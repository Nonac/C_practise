#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define STACK_INIT_SIZE 20
#define STACKINCRESEMENT 10
#define MAXBUFFER 20

typedef char ElemType;
typedef struct Stack
{
    ElemType *top;
    ElemType *base;
    int StackSize;
}Stack;

void StackInit(Stack *s)
{
    s->base=(ElemType *)malloc(STACK_INIT_SIZE* sizeof(ElemType));
    if(!s->base) exit(0);
    s->top=s->base;
    s->StackSize=STACK_INIT_SIZE;
}

void Push(Stack *s,ElemType e)
{
    if(s->top-s->base>=s->StackSize)
    {
        s->base=(ElemType *)realloc(s->base,(STACKINCRESEMENT+s->StackSize)* sizeof(ElemType));
        if(!s->base) exit(0);
        s->top=s->base+s->StackSize;
        s->StackSize=s->StackSize+STACKINCRESEMENT;
    }
    *(s->top)=e;
    s->top++;
}
void Pop(Stack *s,ElemType *e)
{
    if(s->top==s->base) return;
    *e=*--(s->top);
}

int StackLen(Stack s)
{
    return (s.top-s.base);
}

int main()
{
    Stack s;
    ElemType c;
    double x=0,y=0;
    char str[MAXBUFFER];
    int i=0;

    StackInit(&s);

    printf("请输入逆波兰表达式，以#结束：\n");
    scanf("%c",&c);

    while (c!='#')
    {
        while (isdigit(c)||c=='.') {
            str[i++] = c;
            str[i] = '\0';
            if(i>=20) printf("\nERROR!\n");
            scanf("%c",&c);
            if(c == ' ') {
                x =atof(str);
                Push(&s,x);
                i=0;
                break;
            }
        }
        switch (c)
        {
            case '+':
                Pop(&s,&x);
                Pop(&s,&y);
                Push(&s,y+x);
                break;
            case '-':
                Pop(&s,&x);
                Pop(&s,&y);
                Push(&s,y-x);
                break;
            case '*':
                Pop(&s,&x);
                Pop(&s,&y);
                Push(&s,y*x);
                break;
            case '/':
                Pop(&s,&x);
                Pop(&s,&y);
                if(x!=0) Push(&s,y/x);
                else printf("\nERROR!\n");
                break;
        }
        scanf("%c",&c);
    }
    getchar();

    Pop(&s,&x);
    printf("结果是：%f\n",x);

    return 0;
}