#include <stdio.h>
#include <ctype.h>

int main(void) {
    const int maxAssignments = 6;
    const int maxGrade = 100;

    int grades[maxAssignments];
    int totalPoints = 0;
    int numAssignments = 0;
    int gradeInput;

    printf("At any time press Q to quit\n");

    //This loop scans and stores the inputted values 6 times.
    for (int index = 0; index < maxAssignments; index++) {
        printf("Please enter the grade for assignment #%d: ", index + 1);

        //Checks to see if input is valid
        if (scanf("%d", &gradeInput) == 0) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            index--;
            continue;
        }
        //Checks to see if the input is between 0 and 100
        if (gradeInput < 0 || gradeInput > maxGrade) {
            printf("Grade must be between 0 and %d.\n", maxGrade);
            index--;
            continue;
        }
        //Stores the input and adds it to total points if valid
        grades[numAssignments++] = gradeInput;
        totalPoints += gradeInput;
        
        //Scans for 'Q' to quit
        char nextChar = getchar(); 
        if (nextChar == 'Q' || nextChar == 'q') {
            break;
        }
        else if (nextChar != '\n') {
            printf("Invalid input. Please enter only a single grade or Q to quit.\n");
            while (getchar() != '\n'); 
            index--;
            continue;
        }
    }

    //Calculates points total and points recieved
    int maxPoints = numAssignments * maxGrade; 
    float gradePercent = ((float)totalPoints / maxPoints) * 100;
    char letterGrade;  

    //Assigns the gradePercent to letterGrade
    if (gradePercent >= 90) 
        letterGrade = 'A';
    else if (gradePercent >= 80)
        letterGrade = 'B';
    else if (gradePercent >= 70)
        letterGrade = 'C';
    else if (gradePercent >= 60)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    //Displays calculated grade.
    printf("\nOver %d assignments you earned %d points out of a possible %d points!\n", numAssignments, totalPoints, maxPoints);
    printf("\n");
    printf("Your grade is %.1f%%. Letter grade is %c.\n", gradePercent, letterGrade);

    return 0;
}