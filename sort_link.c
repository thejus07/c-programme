#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*temp1;
    struct node*temp;
}*head=NULL,*newnode,*temp,*temp1;
void sort()
{
    int temp2;
    temp=head;temp1=head;
    if(head==NULL)
    {
        printf("%d",head->data);
    }
    else
    {
        while(temp!=NULL)
        {
            temp1=temp->next;
            while(temp1!=NULL)
            {
                if(temp->data < temp1->data)
                {
                    temp2=temp->data;
                    temp->data=temp1->data;
                    temp1->data=temp2;
                }
                temp1=temp1->next;
            }
            temp=temp->next;
        }
    }
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
    sort();
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
