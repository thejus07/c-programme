#include <stdio.h>
int front;
int rear;
int N ,i,elements;
int main()
{
    printf("Enter the space required: ");
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        printf("\n enter the elements : ");
        scanf("%d",&elements);
        return 0;
    }

    void enqu_front(elements)
    {
        if ((front == 0 & rear == N-1) || (front == rear+1))
        {
            printf("queue is overflow");
        }
    }
}
