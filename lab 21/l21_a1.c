#include<stdio.h>
#include<string.h>

struct employee
{
    char name[100];
    char id[100];
    int salary;
    char department[100];
};

void main()
{
    struct employee E1;

    printf("ENTER NAME OF EMPLOYEE : ");
    // scanf("%s",E1.name);
    gets(E1.name);
    
    // printf("NAME OF EMPLOYEE IS : %s",E1.name);
    
    printf("ENTER ID OF THE EMPLOYEE : \n");
    gets(E1.id);

    printf("ENTER SALARY OF THE EMPLOYEE : \n");
    scanf("%d",&E1.salary);

    // printf("ENTER DEPARTMENT OF THE EMPLOYEE : \n");
    // gets(E1.department);

    printf("NAME OF THE EMPLOYEE IS : \n");
    puts(E1.name);

    printf("ID OF THE EMPLOYEE : \n");
    puts(E1.id);

    // printf("DEPARTMENT OF EMPLOYEE : \n");
    // puts(E1.department);

    printf("SALARY OF THE EMPLOYEE : %d",E1.salary);
}