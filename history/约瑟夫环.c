//
// Created by Nick Yang on 2019-06-27.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create(int n)
{
    node *p = NULL,*head,*temp;
    head = (node *)malloc(sizeof(node));
    p =head;
    int i=1;

    if(n!=0)
    {
        while(i <= n)
        {
            temp = (node *)malloc(sizeof(node));
            temp->data = i++;
            p->next=temp;
            p=temp;
        }
        temp->next = head->next;
    }
    free(head);
    return  temp->next;
}

int main()
{
    int n= 57;
    int m = 7;
    int i;
    node *p = create(n);
    node *temp;

    //m = n % m;

    while(p!=p->next)
    {
        for(i=1;i<m-1;i++)
        {
            p=p->next;
        }
        printf("%d->\n",p->next->data);
        temp=p->next;
        p->next=temp->next;
        free(temp);
        p=p->next;
    }
    printf("%d\n",p->data);

}