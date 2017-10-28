#include<stdio.h>
int isPrime(int n)
int main()

{
    int i = 2, result;
    do{
        result = n%i;
        if(result == 0)
        break;
        i++;
    }while(n != i);
    if(n == i)
    return 1;
    else
    return 0;
}
