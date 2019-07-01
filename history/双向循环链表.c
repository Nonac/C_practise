//
// Created by Nick Yang on 2019-07-01.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    char data;
    struct node *piror;
    struct node *next;
}*node,ch;

node create()
{
    node head=NULL;
    node cur=head,temp;

    for(int i=1;i<=26;i++)
    {
        temp=(node)malloc(sizeof(ch));
        temp->data=('A'+i-1);
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            cur->next=temp;
            temp->piror=cur;
        }
        cur=temp;
    }
    cur->next=head;
    head->piror=cur;
    return head;
}

int main()
{
    node p;
    p=create();
    int n;

    printf("input a number:");
    scanf("%d",&n);

    if(n>0)
    {
        for (int i = 0; i <n ; ++i) {
            p=p->next;
        }
    }
    else
    {
        for (int i = 0; i <(-n) ; ++i) {
            p=p->piror;
        }
    }
    for (int j = 0; j <26 ; ++j) {
        printf("%c ",p->data);
        p=p->next;
    }

    return 0;
}