#define PI 3.1415926
#include <stdio.h>

int main()
{
    double s;
    int r;
    printf("Please enter the radius:");
    scanf("%d",&r);
    
    s = PI *r *r;
    printf("%g\n\n",s);
}
