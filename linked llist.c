#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*temp,*newnode;

int main()
{
    int size;
    int i;
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        newnode = (struct node*)malloc(sizeof (struct node*));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head = temp = newnode;
        }
        else
        {
            newnode->prev=temp;
            temp->next=newnode;
            temp = newnode;
        }
    }

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf(temp=temp->next);
    }

     printf( temp=temp->next);
}
