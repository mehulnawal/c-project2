#include <stdio.h>

int main()
{

    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    (score >= 0 && score <= 100) ? 
                    (score >= 90 && score < 100) ? printf("A") :
                    (score >= 80 && score < 90) ? printf("B") :
                    (score >= 70 && score < 80) ? printf("C") :
                    (score >= 60 && score < 70) ? printf("D") :
                    (score >= 50 && score < 60) ? printf("E") : printf("F") 
    : printf("Invalid score") ;

    switch (grade)
    {
    case 'A':
        printf("Excellent work");
        break;

    case 'B':
        printf("Well done");
        break;

    case 'C':
        printf("Good job");
        break;

    case 'D':
        printf("You passed");
        break;

    case 'E':
        printf("could do better");
        break;

    case 'F':
        printf("OK");
        break;

    default:
        printf("Fail");
        break;
    }

    

    return 0;
}