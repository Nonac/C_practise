//
//  main。c.c
//  practisse
//
//  Created by yang yinan on 2019/5/29.
//  Copyright © 2019年 Yang Nonac. All rights reserved.
//

#include <stdio.h>

struct student{
    long num;
    float score;
    struct student *next;
};
int main()
{
    struct student a,b,c,*head;
    
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90;
    c.num = 10107;
    c.score = 85;
    
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    
    do{
        printf("%ld %5.1f\n",head->num,head->score);
        head = head->next;
    }while(head);
}
