#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 26
int getIndex(char c)
{
    return (c - 'a');
}
int* getAlphabetCount(char *arr)
{
    int i = 0;
    int n = strlen(arr);
    int *alphabet_count = (int*)malloc(SIZE*sizeof(int));
    alphabet_count = memset(alphabet_count, 0, sizeof(alphabet_count));
    for(i = 0; i < n; i++)
    {
        alphabet_count[getIndex(arr[i])]++;
    }
    return alphabet_count;
}

findPalind(char *arr)
{
    int *alphabet_count = getAlphabetCount(arr);
    int odd = 0, i;
    if(strlen(arr)%2)
    {
        for(i = 0; i < SIZE; i++)
        {
            if(alphabet_count[i]%2)
            {
                odd++;
            }
            if(odd > 1)
            {
                printf("NO");
                return ;
            }
        }
    }
    else
    {
        for(i = 0; i < SIZE; i++)
        {
            if(alphabet_count[i]%2)
            {
                printf("NO");
                return;
            }
        }
    }
    printf("YES");
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
