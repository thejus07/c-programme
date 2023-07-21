#include<stdio.h>
#include<stdlib.h>


struct sandy
{
    int varma;
    struct sandy *indra;
}*head,*newnode,*temp,*tail;

int main()
{
    int n,i,s;
    printf("size: ");
    scanf("%d",&n);
    printf("data ");
    for(i=1;i<=n;i++)
    {
    newnode=(struct sandy*)malloc(sizeof(struct sandy));

    scanf(" %d",&newnode->varma);
    newnode->indra=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->indra=newnode;
        temp=newnode;
    }
    }
    printf("choose the option you need to do\n1.insert at front\n2.insert at end\n3.delet at front\n4.delet at end\n5.display\noption:");
    scanf("%d",&s);
    switch(s)
    {
    case 1:
        addfront();
        break;
    case 2:
        addend();
        break;
    case 3:
        delfront();
        break;
    case 4:
        delend();
        break;
    case 5:
        display();
        break;
    }

}
    void addfront()
    {


newnode=(struct sandy*)malloc(sizeof(struct sandy));

    scanf(" %d",&newnode->varma);
    newnode->indra=NULL;
    temp=head;
    newnode->indra=temp;
    head=newnode;
       temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }

    }
    void addend()
    {


    newnode=(struct sandy*)malloc(sizeof(struct sandy));

    scanf(" %d",&newnode->varma);
    newnode->indra=NULL;
    temp=head;
    while(temp->indra!=NULL)
    {
        temp=temp->indra;
    }
    temp->indra=newnode;
       temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }
    }
    void delfront()
    {
        temp=head;
        head=head->indra;
        temp->indra=NULL;
           temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }
     }
     void delend()
     {
         temp=head;
         while(temp->indra=tail)
         {
             temp=temp->indra;
         }
         temp->indra=NULL;
         tail=temp;
            temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }
     }
    void display()
    {


      temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }
    }
