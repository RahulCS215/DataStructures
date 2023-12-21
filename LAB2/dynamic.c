//dynamic memory allocation

#include <stdio.h>

void Malloc(int);
void Calloc(int);

void main()
{
    int n;

    printf("enter the number of elements n : \n");
    scanf("%d",&n);
    Malloc(n);
    Calloc(n);
}

void Malloc(int n)
{
    int *ptr;
    int i;
    ptr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
        ptr[i]=i+1;
    printf("malloc memory allocation\n");
    printf("the elements are : \n");
    for(i=0;i<n;i++)
        printf("%d ",ptr[i]);
    free(ptr);
}

void Calloc(int n)
{
    int *ptr;
    int i;
    ptr = (int*)calloc(n , sizeof(int));
    for(i=0;i<n;i++)
        ptr[i]=i+1;
    printf("\ncalloc memory allocation \n");
    printf("the elements are : \n");
    for(i=0;i<n;i++)
        printf("%d ",ptr[i]);
    n=10;
    ptr = (int*)realloc(ptr,n * sizeof(int));
    for(i=5;i<n;i++)
        ptr[i]=i+1;
    printf("\nrealloc memory allocation \n");
    printf("the elements are : \n");
    for(i=0;i<n;i++)
        printf("%d ", ptr[i]);
    free(ptr);

}

