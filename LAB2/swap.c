//swapping using pointers

#include <stdio.h>

void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter two numbers a and b : ");
    scanf("%d%d",&a,&b);
    printf("value of a and b before swapping : %d %d\n",a , b);
    swap(&a,&b);
    printf("values in main function after swapping : %d %d\n",a , b);
}

void swap(int *p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("values of a and b after swapping : %d %d\n",*p, *q);
}
