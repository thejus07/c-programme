#include<stdio.h>
#include<stdlib.h>
struct node
{
  char data;
  struct node* next;
}*head,*temp,*newnode,*nextnode,*prev;
void create()
{
 //head=0;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter data   ");
  scanf("%s",newnode->data);
  newnode->next=NULL;
  if(head==NULL)
  {
    temp=newnode=head;
  }
  else
  {
    newnode=temp->next;
    temp=newnode;
  }
}
void reverse()
{
    prev=0;
    temp=newnode=nextnode=head;
    nextnode=nextnode->next;
    temp->next=prev;
    prev=temp;
    temp=nextnode;

}
int main()
{
    int choice=0;
    printf("1->create\n 2->reverse\n");
    scanf("%d",&choice);
    while(1)
    {
      switch(choice)
      {
        case 1:create();
        break;
        case 2:reverse();
        break;
      }

    }

head=temp;
while(temp!=0)
{
   printf("%d ",temp->data);
   temp=temp->next;

}
}
