//
// Created by Nick Yang on 2019-07-07.
//

#include <stdlib.h>
#include <stdio.h>

typedef char ElemType;
typedef struct QNode
{
    ElemType data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct
{
    QueuePtr front,rear;
}LinkQueue;

void initQueue(LinkQueue *q)
{
    q->front=q->rear=(QueuePtr)malloc(sizeof(QNode));
    if(!q->front) exit(0);
    q->front->next=NULL;
}
void InsertQueue(LinkQueue *q,ElemType e)
{
    QueuePtr p;
    p=(QueuePtr)malloc(sizeof(QNode));
    if(!q->front) exit(0);
    p->data=e;
    p->next=NULL;
    q->rear->next=p;
    q->rear=p;
}
void DeleteQueue(LinkQueue *q,ElemType *e)
{
    QueuePtr p;
    if(q->front==q->rear) return;
    p=q->front->next;
    *e=p->data;
    q->front->next=p->next;
    if(q->rear==p) q->rear=q->front;
    free(p);
}

int main()
{
    ElemType e;
    LinkQueue q;

    initQueue(&q);
    printf("请输入一个字符串，以#结束：\n");
    scanf("%c",&e);
    while (e!='#')
    {
        InsertQueue(&q,e);
        scanf("%c",&e);
    }
    printf("打印队列中的元素：\n");
    while (q.front!=q.rear)
    {
        DeleteQueue(&q,&e);
        printf("%c",e);
    }

    return 0;
}