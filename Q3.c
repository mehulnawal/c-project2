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
        printf("A\nExcellent work");
        break;

    case 'B':
        printf("B\nWell done");
        break;

    case 'C':
        printf("C\nGood job");
        break;

    case 'D':
        printf("D\nYou passed");
        break;

    case 'E':
        printf("E\ncould do better");
        break;

    case 'F':
        printf("F\nOK");
        break;

    default:
        printf("Fail");
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E')
    {
        printf("\nYou can eligible for next level");
    }
    else
    {
        printf("\nYou are not eligible for next level");
    }

    return 0;
}