#include<stdio.h>
void main(){
    FILE *fp1,*fp2;
    fp1=fopen("test.txt","r");
    fp2=fopen("text.txt","a");
    char ch;
    while(ch!=EOF){
        ch=getc(fp1);
        putc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);


    
    fp1=fopen("text.txt","r");
    char ch1=getc(fp1);          //return type of scanf is integer
    while(ch1!=EOF){
        printf("%c",ch1);
        ch1=getc(fp1);
    }

    fclose(fp1);

}