// find the percentage of four subject thier marks are out of fourty

#include <stdio.h>
int main() {
    int subject1 = 35; // marks obtained in subject 1
    int subject2 = 30; // marks obtained in subject 2
    int subject3 = 28; // marks obtained in subject 3
    int subject4 = 32; // marks obtained in subject 4

    int totalMarks = 40 * 4; // total marks for four subjects
    int obtainedMarks = subject1 + subject2 + subject3 + subject4; // total marks obtained

    float percentage = (float)obtainedMarks / totalMarks * 100; // calculate percentage

    printf("Percentage: %.2f%%\n", percentage); // print the percentage
    return 0;
}