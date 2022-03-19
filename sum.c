#include<stdio.h>
void sum(int [],int);
void main()
{
    int a[20]={10,20,30,40},n,sum=0;
    printf("Enter number of elemnts")
    sum(a,n);
}
void sum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
