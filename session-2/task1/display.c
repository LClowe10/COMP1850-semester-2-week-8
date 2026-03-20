#include <stdio.h>
#include <string.h>
#include "structure.h"

/**
 * @brief Display student information including name, ID, marks, and average
 * 
 * @param student The student whose information is to be displayed
 */
void display_student(Student student) {
    float average = calculate_average(student);
    
    printf("Student Information:\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Module marks: ");
    
    for (int i = 0; i < NUM_MODULES; i++) {
        printf("%.1f", student.marks[i]);
        if (i < NUM_MODULES - 1) {
            printf(", ");
        }
    }
    
    printf("\nAverage mark: %.1f\n", average);
}