#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*tail;
void insertbeg()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the beg value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insertend()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the end value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void delectionbeg()
{
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
}
void delectionend()
{
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
}
void insertmid()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   int value,pos,i;
   printf("pos:");
   scanf("%d",&pos);
   printf("value:");
   scanf("%d",&value);
   temp=head;
   for(i=1;i<pos-1;i++)
   {
       temp=temp->next;
   }
   newnode->data=value;
   newnode->prev=temp;
   temp->next->next=newnode->prev;
}
int main()
{
    int size,i,count=0;
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
       //insertbeg();
       // insertend();
        //delectionbeg();
       // delectionend();
       insertmid();
       //insertmid();
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
       /* while(temp!=NULL)
        {
            //printf("%d",temp->data);
            if(temp->data%2!=0)
            {
                printf("\nodd num:%d\t",temp->data);
            }
            temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
            //printf("%d",temp->data);
            if(temp->data%2==0)
            {
                printf("\nevev num:%d\t",temp->data);
            }
            temp=temp->next;
        }*/
}
