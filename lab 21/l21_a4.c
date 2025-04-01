#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    float percentage;
    int age;
};

int main()
{
    struct student n[5];

    for(int i=0 ; i<5 ; i++)
    {   
        printf("ENTER THE NAME OF THE STUDENT %d : ",i+1);
        gets(n[i].name);

        printf("ENTER PERCENTAGE %d : ",i+1);
        scanf("%f",&n[i].percentage);

        printf("ENTER AGE %d : ",i+1);
        scanf("%d",&n[i].age);
        // printf("%d \n %d \n %s",p.percentage,a.age,n[100].name);
    }

    for(int i=0 ; i<5 ; i++)
    {
        printf("%f \n %d \n %s",n[i].percentage,n[i].age,n[i].name);
    }

    // printf("ENTER THE NAME OF THE STUDENT : ");
    // gets(n[100].name);

    // printf("ENTER PERCENTAGE : ");
    // scanf("%d",&p.percentage);

    // printf("ENTER AGE : ");
    // scanf("%d",&a.age);
    
    // printf("%d \n %d \n %s",p.percentage,a.age,n[100].name);

}