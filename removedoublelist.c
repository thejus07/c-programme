#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*head,*temp,*newnode,*value,*sum;
int main()
{
        int a,i;
        printf("Enter the size :");
        scanf("%d",&a);
        printf("Enter data:");
    for(i=0;i<a;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
        temp=head;
        while(temp!=NULL)
        {
        if(temp->data<temp->next)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
            else
            continue;
            temp=temp->next;
        }
}
