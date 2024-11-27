#include<stdio.h> 
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[100];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Open the file for writing
    file = fopen("limitstudent.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the details of each student to the file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        
        // Input student details
        printf("Enter roll number: ");
        scanf("%d", &student.rollNumber);
        printf("Enter name: ");
        getchar(); // to consume any leftover newline character
        fgets(student.name, sizeof(student.name), stdin);
        printf("Enter total marks: ");
        scanf("%f", &student.totalMarks);

        fprintf(file, "Roll Number: %d\n", student.rollNumber);
        fprintf(file, "Name: %s", student.name);
        fprintf(file, "Total Marks: %.2f\n", student.totalMarks);
        fprintf(file, "----------------------\n");
    }

    // Close the file
    fclose(file);

    printf("\nStudent details have been written to LIMIITSTUDENT.TXT\n");

    return 0;
}