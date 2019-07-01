#include <stdlib.h>
#include <stdio.h>
#define CardNumber 13

typedef struct node
{
    int data;
    struct node *next;
}card,*node;

node Create()
{
    node head=NULL;
    node cur,node1;
    cur=head;
    for(int i=1;i<=CardNumber;i++)
    {
        node1=(node)malloc(sizeof(card));
        node1->data=0;
        if(head==NULL)
        {
            head = node1;
        }
        else {
            cur->next = node1;
        }
        cur=node1;
    }
    cur->next=head;
    free(cur);
    return head;
}

void Count(node head)
{
    node cur=head;
    int i=0,card=2;
    cur->data=1;
    while(card<14) {
        for (; i < card; i++) {
            cur = cur->next;
            if (cur->data != 0) {
                i--;
                cur = cur->next;
            }
        }
        if (cur->data == 0) {
            cur->data = card;
            card++;
        }
        i=0;
    }
}



int main()
{
    node p;
    p=Create();
    Count(p);

    for(int i=0;i<CardNumber;i++)
    {
        printf("黑桃%d->",p->data);
        p=p->next;
    }
    return 0;
}