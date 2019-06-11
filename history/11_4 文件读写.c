//
// Created by nonac on 19-6-11.
//
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char ch,filename[20];

    printf("Please input the filename you want to write:");
    scanf("%s",filename);

    if (!(fp=fopen(filename,"wt+")))
    {
        printf("Can not open 1.txt!\n");
    }
    else
    {
        printf("Please input the sentences you want to write:\n");
        ch = getchar();
        ch = getchar();
        while(ch != EOF)
        {
            fputc(ch,fp);
            ch = getchar();
        }
    }
    fclose(fp);
}
