#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE;
NODE getnode();
NODE insert_front(NODE);
NODE insert_end(NODE);
NODE insert_specific(NODE,int);
NODE display();

void main()
{
    int choice;
    while(1)
    {
        printf("1)Insert Front\n");
        printf("2)Insert End\n");
        printf("3)Insert at specific position\n");
        printf("4)Display\n");
        printf("5)exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=insert_front(head);
                   break;
            case 2:head=insert_end(head);
                   break;
            /*case 3:head=insertspec();
                   break;*/
            case 4:head=display();
                   break;
            case 5:exit(0);
                   break;
            default : printf("Invalid input\n");
        }
    }
}
NODE create()
{
    NODE temp;
    temp=(NODE*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    return(temp);
}
NODE insert_front(NODE head)
{
    NODE temp,temp1=head,temp2;
    temp=create();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp2=head;
        temp->next=temp2;
        temp2->prev=temp;
        head=temp;
    }
    return(head);
}
NODE insert_end(NODE head)
{
    NODE newn,temp;
    if(head==NULL)
    {
        return newn;
        exit(0);
    }
    temp=head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    temp->next=newn;
    newn->prev=temp;
    newn->next=NULL;

    return head;

}
NODE display()
{
    NODE temp=head;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    printf("\n");
    while(temp!=NULL)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}



