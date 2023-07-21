#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}**head,*temp,*newnode,*swap;
struct node1
{
    int data1;
    struct node *next1;
}*head1,*temp1,*newnode1;





void create()
{
    int size,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
   if(head==NULL)
   {
    temp=newnode;
    head=newnode;
  }
  else
  {
    temp->next=newnode;
    temp=newnode;
  }
}
}

void create_1()
{
    int size1,i;
    scanf("%d",&size1);
    for(i=0;i<size1;i++)
    {
    newnode1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode1->data1);
    newnode1->next1=NULL;
   if(head1==NULL)
   {
    temp1=newnode1;
    head1=newnode1;
  }
  else
  {
    temp1->next1=newnode1;
    temp1=newnode1;
  }
}
}
int merge()
{
    temp->next=head1;
}
int sort()
{
    temp=head;
    while(temp!=NULL)
    {
        swap=temp->next;
        while(swap!=NULL)
        {
            if(temp->data >swap->data)
            {
                int a=temp->data;
                temp->data=swap->data;
                swap->data=a;
            }
            swap=swap->next;
        }
        temp=temp->next;
    }
}

int display()
{
    temp =head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


int main()
{
    create();
    create_1();
    merge();
    display();
    sort();
    printf("\n");
    display();
}

