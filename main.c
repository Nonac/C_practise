#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10

typedef char ElemType;
typedef struct Stack
{
    ElemType *top;
    ElemType *base;
    int stacklen;
}Stack;

void StackInit(Stack *s)
{
    s->base=(ElemType *)malloc(STACK_INIT_SIZE* sizeof(ElemType));
    if(!s->base) exit(0);
    s->top=s->base;
    s->stacklen=STACK_INIT_SIZE;
}

void Push(Stack *s,ElemType e)
{
    if(s->top-s->base>=s->stacklen)
    {
        s->base=(ElemType *)realloc(s->base,(STACKINCREMENT+s->stacklen)* sizeof(ElemType));
        if (!s->base) exit(0);
        s->top=s->base+s->stacklen;
        s->stacklen=s->stacklen+STACKINCREMENT;
    }
    *(s->top) = e;
    s->top++;
}

void Pop(Stack *s,ElemType *e)
{
    if(s->top==s->base)
        return;
    *e=*--(s->top);
}

int Stacklen(Stack s)
{
    return (s.top-s.base);
}

int main()
{
    Stack s;
    char c,e;
    StackInit(&s);
    printf("请输入中缀表达式，以#结束：\n");
    scanf("%c",&c);

    while (c!="#")
    {
        while (isdigit(c))
        {
            printf("%c",c);
            scanf("%c",&c);
            if(!isdigit(c)) printf(" ");
        }
        if(c==')')
        {
            Pop(&s,&e);
            while (e!='(')
            {
                printf("%c",e);
                Pop(&s,&e);
            }
        }
        else if(c=='+'||c=='-')
        {
            if(Stacklen(s)) Push(&s,c);
            else
            {
                do
                {
                    Pop(&s,&e);
                    if(e=='(') Push(&s,e);
                    else printf("%c",e);
                }while(Stacklen(s)||e!='(');
            }
        }
        else if (c == '*' || c == '/' || c == '(')
        {
            Push(&s, c);
        }
        else
            {
                if (c == '#') break;
                else printf("\nERROR\n");
            }
        scanf("%c",&c);
    }
    while (Stacklen(s))
    {
        Pop(&s,&e);
        printf("%c",e);
    }
    return 0;
}