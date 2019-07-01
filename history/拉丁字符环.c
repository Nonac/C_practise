//
// Created by Nick Yang on 2019-07-01.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}*node,nums;

node create(int n)
{
    node head=NULL;
    node cur=head,node1;
    int i;
    for(i=1;i<=n;i++)
    {
        node1=(node)malloc(sizeof(nums));
        node1->data=i;
        if(head==NULL)
        {
            head=node1;
        }
        else
        {
            cur->next = node1;
        }
        cur = node1;
    }
    cur->next=head;
    return head;
}

int main()
{
    node p;
    int n;
    printf("the number:\n");
    scanf("%d",&n);
    p =create(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
        p=p->next;
    }
    return 0;
}

