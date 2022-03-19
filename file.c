#include<stdio.h>
void main()
{

    FILE *fp;
    char ch;
    fp=fopen("sample.txt","a");
    if(fp==NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("input some text");
    while((ch=getchar())!=EOF)
        fputc(ch,fp);
    fclose(fp);
    printf("The file contains:\n");
    fp=fopen("sample.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
        fclose(fp);
    }
}
