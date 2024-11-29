#include<stdio.h>

int main()
{

    int score ;

    printf("Enter your score: ");
    scanf("%d", &score);

    (score >= 90 && score <= 100) ? printf("A") : (score >= 80) ? printf("B") : (score >= 70) ? printf("C") : (score >=60 ) ? printf("D") : (score >=50 ) ? printf("E") : (score >= 40) ? printf("F") : printf("Fail") ;

    return 0;
}