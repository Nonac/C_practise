//
//  main.c
//  practisse
//
//  Created by yang yinan on 2019/5/29.
//  Copyright © 2019年 Yang Nonac. All rights reserved.
//

#include "main.h"
#include<stdio.h>
#define A(x) x;x;x;x;x;x;x;x;x;x;

int main(void)
{
    int n=0;
    A(A(A(printf("%d",n++))));
    return 0;
}
