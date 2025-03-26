#include <stdio.h>

int main() {
    float physicsMarks[4], mathMarks[4], chemistryMarks[4];
    float physicsAverage, mathAverage, chemistryAverage;
    float sum;
    float totalSum = 0; // Variable to hold the total sum of all subjects
    int totalAssignments = 12; // 4 assignments per subject, 3 subjects

    // Function to input marks and calculate average
    void inputMarksAndCalculateAverage(float marks[4], const char* subjectName) {
        printf("Enter marks for %s (4 assignments):\n", subjectName);
        sum = 0;
        for (int i = 0; i < 4; i++) {
            while (1) {
                printf("Assignment %d: ", i + 1);
                if (scanf("%f", &marks[i]) != 1) {
                    // If the input is not a number
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n');  // Clear the buffer
                } else if (marks[i] < 0 || marks[i] > 100) {
                    // If the marks are not between 0 and 100
                    printf("Marks must be between 0 and 100! Try again.\n");
                } else {
                    break;
                }
            }
            sum += marks[i];
        }
        float average = sum / 4; // Calculate the average for the current subject
        printf("%s Average: %.2f\n\n", subjectName, average);
        totalSum += sum; // Add the sum of the current subject to total sum
    }

    // Input and calculate average for each subject
    inputMarksAndCalculateAverage(physicsMarks, "Physics");
    inputMarksAndCalculateAverage(mathMarks, "Math");
    inputMarksAndCalculateAverage(chemistryMarks, "Chemistry");

    // Calculate and print the total average
    float totalAverage = totalSum / totalAssignments;
    printf("Total Average for all subjects: %.2f\n", totalAverage);

    return 0;
}
