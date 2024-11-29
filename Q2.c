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