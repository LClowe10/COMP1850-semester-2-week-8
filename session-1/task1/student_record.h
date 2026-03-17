
#define NAME_LENGTH 50
#define NUM_MODULES 3

/**
 * Structure to represent a student
 */
typedef struct STUDENT_RECORD {
    char name[NAME_LENGTH];  // Student's name
    int id;                  // Student's ID number
    float marks[NUM_MODULES]; // Marks for three modules
} student_record ;

/*
 * function headers
 */
float calculate_average(student_record student);
void display_student(student_record student);
