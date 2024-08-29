#include<stdio.h>
int main()
{
    int marks;
    char grade;

    printf("enter the marks: ");
    scanf("%d",&marks);

    
    grade=(marks>=90)?'A' :(marks>=80)?'B'
                          :(marks>=70)?'C'
                          :(marks>=60)?'D'
                          :(marks>=50)?'E'
                                      :'F';


    printf("the grade is : %c\n",grade);
    printf("wrong output\n");

       //switch//
    switch(grade)
    {
        case 'A':
            printf("Excellent Work\n");
        break;
        case 'B':
            printf("Well done\n");
        break;
        case 'C':
             printf("Good job\n");
        break;
        case 'D':
             printf("You passed\n");
        break;
        case 'E':
             printf("You need hard work\n");
        break;
        case 'F':
              printf("Sorry You Fail..\n");
        break;
        default:
              printf("invaild grade\n");
        
    }

    //check eligibility based on the grade//
    if (grade=='A' ||grade=='B'||grade=='C'||grade=='D'){
    
        printf("congratulations you are eligible for the next level\n");}
    
    else if (grade=='F'){
    
        printf("sorry try again\n");}
    
    else{
    
        printf("invalid grade\n");}
    
       
}