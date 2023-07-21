#include<stdio.h>
#include<stdlib.h>
int size;
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp,*newnode,*mid;
int main()
{
    int i,ch;
    while(ch!=99)
    {
        for(i=0; i<6; i++)
        {
            printf("         ");
            if(i==2)
            {
                printf("%cMenu List%c",1,1);
            }
        }
        printf("\n1.Create\n");
        printf("2.Display\n");
        printf("3.Insert At front\n");
        printf("4.Count\n");
        printf("5.Search\n");
        printf("6.Insert in middle\n");
        for(i=0; i<6; i++)
        {
            printf("-------");
            if(i==2)
            {
                printf("------------");
            }
        }
        printf("\n Enter your choice : ");
       scanf("%d",&ch);
       switch (ch)
       {
           case 1:  create();
                    break;
           case 2:  display();
                    break;
           case 3:  insertatfr();
                     break;
           case 4:  count();
                     break;
           case 5:  search();
                     break;
           case 6:  insertmid();
                     break;
           default : printf("Sorry ");
                     break ;


       }

    }
}
void create()
{

    printf("Enter the size : ");
    scanf("%d",&size);
    int i;
    for(i=0; i<size; i++)
    {
        newnode = (struct node*) malloc (sizeof (struct node*));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
}
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%-5d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertatfr()
{
     newnode=(struct node*)malloc(sizeof(struct node*));
     printf("Enter the data : ");
     scanf("%d",&newnode->data);
     newnode->next=head;
     head=newnode;
}
void count()
{   int count=0;
    if(head==NULL)
{
    count=0;
}
    temp=head;
while(temp!=NULL)
{
    temp=temp->next;
 count++;
}
 printf("Number Element present in This linked List : %d\n",count);

}
void search()
{ int sear;
    printf("Enter the Search Element : ");
    scanf("%d",&sear);
    temp=head;
    int flag=0;
    while(temp!=NULL)
    {
      if(temp->data==sear)
      {
          flag=1;
      }
      temp=temp->next;
    }
    if(flag==1)
    {
        printf("Element Found%c\n",1);
    }
    else
        {
        printf("Element Not Found%c\n");
    }
}

void insertmid()
{
    int data;
     mid=data/2;
     printf("Enter the data : ");
     scanf("%d",&mid->data);
     mid->next=head;
     head=mid;
}


