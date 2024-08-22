#include<stdio.h>
int main()
{
    int basesalary,grosssalary,HRA,DA,TA;

    printf("enter the basic salary:");
    scanf("%d",&basesalary);

    HRA=basesalary*10/100;
    DA=basesalary*5/100;
    TA=basesalary*8/100;

    grosssalary=basesalary+HRA+TA+DA;
    printf("grosssalary is %d\n",grosssalary);



}