#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*curr,*prev,*tail,*nextnode;
void reverse()
{
 curr=tail->next;
 nextnode=curr->next;
 if(tail==0)
 {
     return tail;
 }
 else
    {
        while(curr!=tail)
        {
            prev=curr;
            curr=nextnode;
            nextnode=curr->next;
            curr->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
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
                    temp->next=head;
                }

}
tail=temp->next;
reverse();
        while(temp->next!=head)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
}
