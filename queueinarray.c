#include<stdio.h>
#define n 5
int display();
int enqueue(int value);
int dequeue();
int a[n],front=-1,rear=-1;
int main()
{
dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
}
int dequeue()
{
    if(front=-1)
    {
        printf("queue is empty\n");
    }
    else
    front++;
    if(front>rear)
    {
        front=rear=-1;
    }
}
int enqueue(value)
{
    if(rear==n-1)
    {
        printf("queue is full\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        a[rear]=value;
        printf("Inserted=%d\n",a[rear]);
}
}
int display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
}

