#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include<stdbool.h>
struct AdjListNode
{
    long int  dest;
    long int  weight;
    struct AdjListNode* next;
};
struct AdjList
{
    struct AdjListNode *head;
};
struct Graph
{
    long int  V;
    struct AdjList* array;
};
struct AdjListNode* newAdjListNode(long int  dest, long int  weight)
{
    struct AdjListNode* newNode =(struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}
struct Graph* createGraph(long int  V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));
    long int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
    return graph;
}
void addEdge(struct Graph* graph,long int  src,long int  dest,long int  weight)
{
    struct AdjListNode* newNode = newAdjListNode(dest, weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
    newNode = newAdjListNode(src, weight);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}
struct MinHeapNode
{
    long int  v;
    long int key;
};
struct MinHeap
{
    long int  size;
    long int  capacity;
    long int  *pos;
    struct MinHeapNode **array;
};
struct MinHeapNode* newMinHeapNode(long int v, long int key)
{
    struct MinHeapNode* minHeapNode =
           (struct MinHeapNode*) malloc(sizeof(struct MinHeapNode));
    minHeapNode->v = v;
    minHeapNode->key = key;
    return minHeapNode;
}
struct MinHeap* createMinHeap(long int  capacity)
{
    struct MinHeap* minHeap =
         (struct MinHeap*) malloc(sizeof(struct MinHeap));
    minHeap->pos = (long int*)malloc(capacity * sizeof(long int *));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array =
         (struct MinHeapNode**) malloc(capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b)
{
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}
void minHeapify(struct MinHeap* minHeap, long int  idx)
{
    long int  smallest, left, right;
    smallest = idx;
    left = 2 * idx + 1;
    right = 2 * idx + 2;
    if (left < minHeap->size &&
        minHeap->array[left]->key < minHeap->array[smallest]->key )
      smallest = left;
    if (right < minHeap->size &&
        minHeap->array[right]->key < minHeap->array[smallest]->key )
      smallest = right;
    if (smallest != idx)
    {
        struct MinHeapNode *smallestNode = minHeap->array[smallest];
        struct MinHeapNode *idxNode = minHeap->array[idx];
        minHeap->pos[smallestNode->v] = idx;
        minHeap->pos[idxNode->v] = smallest;
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}
long int isEmpty(struct MinHeap* minHeap)
{
    return minHeap->size == 0;
}
struct MinHeapNode* extractMin(struct MinHeap* minHeap)
{
    if (isEmpty(minHeap))
        return NULL;
    struct MinHeapNode* root = minHeap->array[0];
    struct MinHeapNode* lastNode = minHeap->array[minHeap->size - 1];
    minHeap->array[0] = lastNode;
    minHeap->pos[root->v] = minHeap->size-1;
    minHeap->pos[lastNode->v] = 0;
    --minHeap->size;
    minHeapify(minHeap, 0);

    return root;
}
void decreaseKey(struct MinHeap* minHeap, long int  v, long int  key)
{
    long int  i = minHeap->pos[v];
    minHeap->array[i]->key = key;
    while (i && minHeap->array[i]->key < minHeap->array[(i - 1) / 2]->key)
    {
        minHeap->pos[minHeap->array[i]->v] = (i-1)/2;
        minHeap->pos[minHeap->array[(i-1)/2]->v] = i;
        swapMinHeapNode(&minHeap->array[i],  &minHeap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}
bool isInMinHeap(struct MinHeap *minHeap, long int  v)
{
   if (minHeap->pos[v] < minHeap->size)
     return true;
   return false;
}
void printArr(long int  n,long int key[])
{
    long long int  i,sum=0;
    for ( i = 1; i < n; ++i)
        sum=sum+key[i];
    printf("%lld",sum);
}
void PrimMST(struct Graph* graph)
{
    long int  V = graph->V;
    long int  parent[V];
    long int key[V];
    long int v;
    struct MinHeap* minHeap = createMinHeap(V);
    for ( v = 1; v < V; ++v)
    {
        parent[v] = -1;
        key[v] = INT_MAX;
        minHeap->array[v] = newMinHeapNode(v, key[v]);
        minHeap->pos[v] = v;
    }
    key[0] = 0;
    minHeap->array[0] = newMinHeapNode(0, key[0]);
    minHeap->pos[0]   = 0;
    minHeap->size = V;
    while (!isEmpty(minHeap))
    {
        struct MinHeapNode* minHeapNode = extractMin(minHeap);
        long int u = minHeapNode->v;

        struct AdjListNode* adjlist = graph->array[u].head;
        while (adjlist != NULL)
        {
           long int v = adjlist->dest;

            if (isInMinHeap(minHeap, v) && adjlist->weight < key[v])
            {
                key[v] = adjlist->weight;
                parent[v] = u;
                decreaseKey(minHeap, v, key[v]);
            }
            adjlist = adjlist->next;
        }
    }
    printArr(V,key);
}
int main()
{
    long int V,i,m;
    scanf("%ld %ld",&V,&m);
    struct Graph *graph = createGraph(V);
    for(i=0;i<m;i++)
    {
        long int u1,v1,w1;
        scanf("%ld %ld %ld",&u1,&v1,&w1);
        addEdge(graph,u1-1,v1-1,w1);
    }
    PrimMST(graph);
    return 0;
}
