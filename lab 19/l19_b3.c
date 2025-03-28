// #include<stdio.h>
// void main()
// {
//     int i=0,size;

//     printf("ENTER SIZE OF ARRAY : ");
//     scanf("%d",&size);

//     int a[size],b[size];

//     for(i=0 ; i<size ; i++)
//     {
//         printf("ENTER %d ELEMENT OF ARRAY A : ",i+1);
//         scanf("%d",&a[i]);
//     }

//      for(i=0 ; i<size ; i++)
//     {
//         printf("ENTER %d ELEMENT OF ARRAY B : ",i+1);
//         scanf("%d",&b[i]);
//     }
    
//     printf("ARRAY A : \n");
//     for(i=0 ; i<size ; i++)
//     {   
//         printf(" %d ",a[i]);
//     }

//     printf("ARRAY B : \n");
//     for(i=0 ; i<size ; i++)
//     {   
//         printf(" %d ",b[i]);
//     }
    
//     int temp[size];

//     for(i=0 ; i<size ; i++)
//     {   
//         /*
//         temp[i]=a[i];
//         a[i]=b[i];
//         b[i]=temp[i];
//         */
//         a[i]=a[i]+b[i]; 
//         b[i]=a[i]-b[i];
//         a[i]=a[i]-b[i];
//     }

//     printf("AFTER SWAPING ARRAY A : \n");
//     for(i=0 ; i<size ; i++)
//     {
//         printf(" %d \n",a[i]);
//     }

//     printf("AFTER SWAPING ARRAY B : \n");
//     for(i=0 ; i<size ; i++)
//     {
//         printf(" %d \n",b[i]);
//     }

// }
#include<stdio.h>
void swaparr(int a[],int b[],int size);
void main()
{
    int size,i=0;

    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&size);

    int a[size],b[size];

    printf("ENTER ELEMENTS OF ARRAY A : \n");

    for(i=0 ; i<size ; i++)
    {
        printf("ENTER %d ELEMENT OF ARRAY A : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("ENTER ELEMENTS OF ARRAY B : \n");

    for(i=0 ; i<size ; i++)
    {
        printf("ENTER %d ELEMENT OF ARRAY B : ",i+1);
        scanf("%d",&b[i]);
    }

    printf("ARRAY A : \n");

    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",a[i]);
    }

    printf("ARRAY B : \n");

    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",b[i]);
    }

    swaparr(a,b,size);

    printf("AFTER SWAPING ARRAY A : \n");
    
    for(i=0 ; i<size ; i++)
    {
        printf(" %d \n",a[i]);
    }

    printf("AFTER SWAPING ARRAY B : \n");

    for(i=0 ; i<size ; i++)
    {
        printf(" %d \n",b[i]);
    }
}

void swaparr(int a[],int b[],int size)
{
    int i=0;

    int temp[size];

    for(i=0 ; i<size ; i++)
    {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }
}