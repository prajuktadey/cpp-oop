//insertion of the linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
     printf("%d\n", ptr->data);
     ptr=ptr->next;
    }
}

struct Node *InsertBeginning(struct Node *head, int data)
{
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    ptr->next= head;
    ptr->data= data;

    return ptr;
}

struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1)
    {
        p= p->next;
        i++;
    }

    ptr->data= data;
    ptr->next=p->next;
    p->next= ptr;

    return head;
}

struct Node *InsertEnd(struct Node *head, int data)
{
    struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=NULL)
    {
      p=p->next;

    }
      ptr->data= data;
      p->next=ptr;
      ptr->next=NULL;
    
    return head;
}

struct Node *InsertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
    ptr->data= data;
    struct Node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }

    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
    
}

int main()  
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //allocated memory for nodes in the heap
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    //linking of first and second
    head->data=7;
    head->next=second;

    //linking of second and third
    second->data=9;
    second->next=third;

    //linking third and fourth 
    third->data=11;
    third->next=fourth;

    //fourth node
    fourth->data=13;
    fourth->next=NULL;

    linkedlistTraversal(head);
    //head= InsertBeginning(head, 15);

    //InsertAtIndex(head, 100, 3);

    InsertEnd(head, 90);
    linkedlistTraversal(head);

    return 0;
}

