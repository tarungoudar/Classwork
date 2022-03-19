#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
};
void main()
{
    struct employee p1,*p;
    p=&p1;
    read(p);
    display(p);
}
void read(struct employee *p)
{
  printf("Enter the employee id and name:\n");
  scanf("%d %s",&p->id,p->name);
}
void display(struct employee *p)
{
    printf("Employee name =%s Employee id=%d",p->name,p->id);
}
