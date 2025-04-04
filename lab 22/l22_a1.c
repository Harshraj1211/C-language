#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("myself.txt","r");
    
    char ch=getc(fp);          //return type of scanf is integer
    while(ch!=EOF){
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);
}