#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*temp,*newnode;
void insertbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the beg value:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void insertend()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the end value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode->prev;
}
int main()
{
    int size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter the data:");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            newnode->prev=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
                {
                    temp->next=newnode;
                    newnode->prev=temp;
                    temp=temp->next;
                }
        }
        //insertbeg();
        insertend();
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }

