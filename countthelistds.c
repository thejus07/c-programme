#include<stdio.h>
#include<stdlib.h>


struct noo
{
    int varma;
    struct noo *indra;
}*head,*newnode,*temp,*tail;

int main()
{
    int n,i,c=0;
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
        c++;
    }
    else
    {
        temp->indra=newnode;
        temp=newnode;
        c++;
    }
    }
    int s;
    printf("element to insert: ");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
    newnode=(struct noo*)malloc(sizeof(struct noo));

    scanf(" %d",&newnode->varma);
    newnode->indra=NULL;
    temp=head;
    newnode->indra=temp;
    head=newnode;
       temp=head;
       c++;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->varma);
        temp=temp->indra;
    }
    printf("\n%d",c);
}



