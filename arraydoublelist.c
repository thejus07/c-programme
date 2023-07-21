#include<stdio.h>
struct sab
{
    int data;
    struct sab *pre;
    struct sab *nxt;
};
struct sab *head,*tail=NULL;
void add(int data) {
    struct sab *newNode = (struct sab*)malloc(sizeof(struct sab));
    newNode->data = data;
        if(head == NULL) {
        head = tail = newNode;
        head->pre = NULL;
        tail->nxt = NULL;
    }
        else {
        tail->nxt = newNode;
        newNode->pre = tail;
        tail = newNode;
        tail->nxt = NULL;
    }
}
void rev()
{
  struct sab *current = head, *temp = NULL;

    while(current != NULL) {
        temp = current->nxt;
        current->nxt = current->pre;
        current->pre = temp;
        current = current->pre;
    }
    temp = head;
    head = tail;
    tail = temp;
}
void display() {
    struct sab *current = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    while(current !=NULL) {
        printf("%d ",current->data);
        current = current->nxt;
    }
}
void main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
  printf("Original List: \n");
    display();
    rev();
    printf("\nReversed List: \n");
    display();

}


