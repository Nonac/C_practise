#include <stdio.h>
#include<malloc.h>
#include <stdlib.h>
#include <string.h>

#define LEN sizeof(struct student)

struct student *creat();
void print(struct student *head);
struct student *del(struct student *head,int delnum);
struct student *insert(struct student *head);

struct student
{
    int num;
    float score;
    struct student *next;
};

int n;

void main() {
    struct student *stu, *p;

    stu = creat();
    p = stu;
    print(p);

    int delnum;
    char sw1,sw2;
    printf("\nDel a record?(y/n):");
    scanf("%s",&sw1);
    while (sw1 == 121)
    {
        printf("\nPlease enter the del num:");
        scanf("%d", &delnum);
        print( del(p, delnum));
        printf("\nDel a record?(y/n):");
        scanf("%s",&sw1);
    }
    printf("\nInsert a record?(y/n)");
    scanf("%s",&sw2);
    while(sw2 == 121)
    {
        print( insert(p) );
        printf("\nInsert a record?(y/n)");
        scanf("%s",&sw2);
    }
}
struct student *creat()
{
    struct student *head;
    struct student *p1,*p2;

    p1 = p2 = (struct student *)malloc(LEN);

    printf("Please enter the nums:");
    scanf("%d",&p1 -> num);
    printf("please enter the score:");
    scanf("%f",&p1 -> score);

    head = NULL;
    n = 0;

    while(p1->num)
    {
        n++;
        if(n == 1)
        {
            head = p1;
        }
        else
        {
           p2->next=p1;
        }

        p2 = p1;
        p1 = (struct student *)malloc(LEN);

        printf("Please enter the nums:");
        scanf("%d",&p1 -> num);
        printf("please enter the score:");
        scanf("%f",&p1 -> score);
    }
    p2 -> next = NULL;
    return head;
}

void print(struct student *head) {

    struct student *p;
    printf("\nThere are %d records!\n\n", n);

    p = head;

    while(p != NULL)
    {
        printf("the No.%d student score is %f\n",p->num,p->score);
        p = p -> next;
    }
}

struct student *del(struct student *head,int delnum)
{
    struct student *p1,*p2;
    if(head == NULL)
    {
        printf("\nThis is a void list!");
        goto END;
    }
    p1 = head;
    while (p1->num != delnum && p1 -> next != NULL)
    {
        p2 = p1;
        p1 =  p1->next;
    }
    if (p1->num != delnum)
    {
        printf("Could not find the record!\n");
    }
    else
    {
        if(p1 == head)
        {
            head = p1-> next;
        }
        else
        {
            p2->next=p1->next;
        }
        printf("\nDelete No: %d succeed!\n",delnum);
        n = n-1;
    }

END:
    return head;
}

struct student *insert(struct student *head)
{
    struct student *p0,*p1,*p2;
    p0 = (struct student *)malloc(LEN);
    printf("Please enter the nums:");
    scanf("%d",&p0 -> num);
    printf("please enter the score:");
    scanf("%f",&p0 -> score);
    p1 = head;
    if (p1 == NULL)
    {
        head = p0;
    }
    else
    {
        while(p1->num < p0->num && p1->next != NULL)
        {
            p2 = p1;
            p1 = p1 -> next;
        }
        if (p0 ->num > p1 -> num)
        {
            p1 -> next = p0;
            p0 -> next = NULL;
        }
        else {
            if (p1 != head)
            {
                p2->next = p0;
                p0->next = p1;

            }
            else
            {
                head = p0;
                p0 -> next = p1;
            }
        }
        n++;
    }
    return head;
}