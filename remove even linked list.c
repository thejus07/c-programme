#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*head,*temp,*newnode;
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
    int count=0;
    while(temp!=NULL)
    {
       if(temp->data%2!=0)
       {
            printf("%d ",temp->data);
       }
       else
       {
        count++;
       }
        temp=temp->next;
    }
    printf("\n removed :%d",count);
}
