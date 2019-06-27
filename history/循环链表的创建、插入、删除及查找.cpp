//
// Created by Nick Yang on 2019-06-27.
//

#include <tclDecls.h>
#include <stdio.h>
#include <stdlib.h>

/*链表存储结构的定义*/
typedef struct ClinkList
{
    int data;
    struct ClinkList *next;
}node;

/*插入节点*/
void ds_insert(node **pNode,int i)
{
    node *temp;
    node *target;
    node *p;
    int item;
    int j = 1;

    printf("输入要插入的节点的值");
    scanf("%d",&item);

    if(i == 1)
    {
        temp = (node *)malloc(sizeof(struct ClinkList));
        if(!temp) exit(0);
        temp ->data = item;
        for(target = (*pNode);target->next != (*pNode);target = target->next)
            ;
        temp->next=(pNode);
        target->next=temp;
        *pNode = temp;
    }
    else
    {
        target = *pNode;
        for(;j<(i-1);++j)
        {
            target= target->next;
        }
        temp = (node *)malloc(sizeof(struct ClinkList));

        if(!temp) exit(0);
        temp -> data = item;
        p = target->next;
        target->next=temp;
        temp->next=p;
    }
}


/*删除*/
void ds_delete(node **pNode,int i)
{
    node *target,*temp;
    int j = 1;
    if(i == 1)
    {
        for(target = *pNode;target->next != *pNode;target = target->next)
            ;
        temp = *pNode;
        *pNode=(*pNode)->next;
        target->next=*pNode;
        free(temp);
    }
    else
    {
        target = *pNode;
        for(;j<i-1;j++)
        {
            target = target ->next;
        }
        temp=target->next;
        target->next=temp->next;
        free(temp);
    }
}

/*返回节点所在的位置*/
int ds_search(node *pNode,int elem)
{
    node *target;
    int i =1;
    for(target = pNode;target->data!=elem&&target->next!=pNode;++i)
    {
        target=target->next;
    }
    if(target->next=pNode) return 0;
    else return i;
}




/*初始化循环链表*/
void ds_init(node **pNode)
{
    int item;
    node *temp;
    node *target;

    printf("输入节点的值，输入0完成初始化");

    while(1)
    {
        scanf("%d",&item);
        fflush(stdin);

        if(item == 0)
            return;

        if((*pNode) == NULL)
        {
            *pNode = (node*)malloc(sizeof(struct ClinkList));
            if(!(*pNode)) exit(0);
            (*pNode)->data = item;
            (*pNode)->next = *pNode;
        }
        else
        {
            for(target = (*pNode);target->next != (*pNode);target = target -> next)
                ;
            temp = (node *)malloc(sizeof(struct ClinkList));

            if(!temp) exit(0);
            temp -> data = item;
            temp -> next = *pNode;
            target -> next = temp;
        }
    }
}