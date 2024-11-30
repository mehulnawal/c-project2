#include<stdio.h>

int main()
{

    int score ;

    printf("Enter your score: ");
    scanf("%d", &score);

    (score >= 0 && score <= 100) ? 
                    (score >= 90 && score < 100) ? printf("A") :
                    (score >= 80 && score < 90) ? printf("B") :
                    (score >= 70 && score < 80) ? printf("C") :
                    (score >= 60 && score < 70) ? printf("D") :
                    (score >= 50 && score < 60) ? printf("E") : printf("F") 
    : printf("Invalid score") ;


    return 0;
}