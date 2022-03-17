#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[50];
    float per;
};
void read(struct student *,int);
void display(struct student *,int);
void main()
{
int n;
struct student *s;
printf("Enter size:");
scanf("%d",&n);
s=(struct student*)malloc(n*sizeof(struct student));
read(s,n);
display(s,n);
}
void read(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter id,name,percentage :\n");
        scanf("%d%s%0.2f",&(s+i)->id,(s+i)->name,&(s+i)->per);
    }
}
void display(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n%s\n%0.2f\n",(s+i)->id,(s+i)->name,(s+i)->per);
    }
}

