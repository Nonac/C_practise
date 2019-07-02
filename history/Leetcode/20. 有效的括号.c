//
// Created by Nick Yang on 2019-07-02.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_INIT_SIZE 100000
#define STACRINCREMENT 10

typedef char Elemtype;
typedef struct Stack
{
    Elemtype *base;
    Elemtype *top;
    int stacklen;
}Stack;

void InitStack(Stack *s)
{
    s->base=(Elemtype *)malloc(STACK_INIT_SIZE *sizeof(Elemtype));
    if(!s->base) exit(0);
    s->top=s->base;
    s->stacklen=STACK_INIT_SIZE;
}
void Push(Stack *s,Elemtype e)
{
    if(s->top-s->base>=s->stacklen)
    {
        s->base=(Elemtype *)realloc(s->base,(STACK_INIT_SIZE+STACRINCREMENT) *sizeof(Elemtype));
        if(!s->base) exit(0);
    }
    *(s->top)=e;
    s->top++;
}
void Pop(Stack *s,Elemtype *e)
{
    if(s->base==s->top) return;
    *e=*--(s->top);
}
int StackLen(Stack s)
{
    return (s.top-s.base);
}

bool isValid(char * s){

    Elemtype ch;
    Stack st;

    InitStack(&st);

    while(*s)
    {
        if(*(s)=='('||*(s)=='{'||*(s)=='[')
        {
            Push(&st,*(s));
            s++;
        }
        else
        {
            if(st.base==st.top) return false;
            else
            {
                Pop(&st,&ch);
                if(*(s)=='('||*(s)=='{'||*(s)=='[') return false;
                else if((ch=='('&& *s!=')')||(ch=='{'&& *s!='}')||(ch=='['&& *s!=']')) return false;
            }
            s++;
        }
    }
    if(st.base==st.top) return true;
    else return false;

}
