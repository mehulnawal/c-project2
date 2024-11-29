#include <stdio.h>

int main()
{

    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    (score >= 90 && score <= 100) ? grade = 'A' : (score >= 80) ? grade = 'B'
                                              : (score >= 70)   ? grade = 'C'
                                              : (score >= 60)   ? grade = 'D'
                                              : (score >= 50)   ? grade = 'E'
                                              : (score >= 40)   ? grade = 'F'
                                                                : printf("");

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