#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    int ch;
    if(argc!=3)
    {
        printf("Invalide numbers of arguments\n");
        return 1;
    }
    fp1=fopen(argv[1],"r");
    if(fp1==NULL)
    {
        printf("Can't find the source file.");
        return 1;
    }
    fp2=fopen(argv[2],"w");
    if(fp2==NULL)
    {
        printf("Can't open target file.");
        fclose(fp1);
        return 1;
    }

    while(1)
    {
        ch=fgetc(fp1);
        if (feof(fp1)) break;
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
