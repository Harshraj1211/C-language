#include <stdio.h>

int main() {
    int number,a = 0, b = 1, i=0 , c=0;

    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    for(i=1 ; i<=number ; i++)
    {
        printf(" %d ",a);
        c=b+a;
        a=b;
        b=c;
        
    }    
}