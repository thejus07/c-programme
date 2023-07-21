#include<stdio.h>
#include<stdlib.h>


struct noo
{
    int varma;
    struct noo *indra;
}*head,*newnode,*temp,*tail;

int main()
{
    int n,i,s;
    printf("size: ");
    scanf("%d",&n);
    printf("data ");
    for(i=1;i<=n;i++)
    {
    newnode=(struct noo*)malloc(sizeof(struct noo));

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
}
    void addfront()
    {


newnode=(struct noo*)malloc(sizeof(struct noo));

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


    newnode=(struct noo*)malloc(sizeof(struct noo));

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
         tail = temp;
         temp=head;
         while(temp->indra!=tail)
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
