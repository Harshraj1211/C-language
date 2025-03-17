#include<stdio.h>
void main()
{
    int n,i=0,j=0,a=1;

    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&n);

    int h=65;
    /*
     for (i = 1; i <= n; i++) {   
        if (i % 2 != 0) {
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            for (j = 1; j <= i; j++) {   
                printf("%c ", (char)h);
                h++;
            }
        }
        printf("\n");
    }
}
    */
    for(i=1 ; i<=n ; i++)
    {   
        if(i%2!=0)
        {
            for(j=1 ; j<=i ; j++)
            {
                printf("%d",j);
            }
        }

        else
        {
            for(j=1 ; j<=i ; j++)
            {   
                printf("%c",(char)h);
                h++;
            }
            
        }
        printf("\n");
    }
}