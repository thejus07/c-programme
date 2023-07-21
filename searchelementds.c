#include<stdio.h>
#include<stdlib.h>


struct noo
{
    int varma;
    struct noo *indra;
}*head,*newnode,*temp,*tail;

int main()
{
    int n,i,s,a;
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
    printf("enter the element you want to search:");
    scanf("%d",&a);
    temp=head;
    while(temp!=NULL)
    {
        if(a==temp->varma)
        {
            printf("found");
            break;
        }
        temp=temp->indra;
    }
        if(temp==NULL)
        {
            printf("ELEMENT NOT FOUND");
        }
    }

