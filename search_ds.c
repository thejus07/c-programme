#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int size,i,a,count=0,flag;
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
        printf("enter the searching element:");
        scanf("%d",&a);
        temp=head;
        while(temp!=NULL)
        {
            if(a==temp->data)
            {
                flag=1;
            }
            temp=temp->next;
        }
        if(flag==0)
        {
            printf("not found");
        }
        else
        {
            printf("found");
        }
}
