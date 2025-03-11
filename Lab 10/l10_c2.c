#include<stdio.h>
void main()
{
    int n1,n2,temp1,temp2,hcf,lcm;

    printf("ENTER NUMBER 1 : ");
    scanf("%d",&n1);

    printf("ENTER NUMBER 2 : ");
    scanf("%d",&n2);

    temp1 = n1;
    temp2 = n2;

    while(temp2!=0)
    {
        int temp=temp2;
        temp2=temp1%temp2;
        temp1=temp;
    }
    hcf=temp1;

    lcm = (n1*n2) / hcf;

    printf("HCF = %d\n",hcf);
    printf("LCM = %d",lcm);
}