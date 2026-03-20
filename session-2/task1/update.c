#include "structure.h"

/**
 * @brief Update student name
 * 
 * @param student Pointer to the student whose name is to be updated
 * @param new_name The new name for the student
 */
void update_name(Student *student, const char *new_name) {
    // Use strncpy to avoid buffer overflow
    strncpy(student->name, new_name, NAME_LENGTH - 1);
    student->name[NAME_LENGTH - 1] = '\0'; // Ensure null termination
}

/**
 * @brief Update a specific module mark
 * 
 * @param student Pointer to the student whose mark is to be updated
 * @param module_index The index of the module to update (0, 1, or 2)
 * @param new_mark The new mark
 * @return int 1 if successful, 0 if module_index is invalid
 */
int update_mark(Student *student, int module_index, float new_mark) {
    // Validate the module index
    if (module_index < 0 || module_index >= NUM_MODULES) {
        return 0; // Invalid module index
    }
    
    // Update the mark
    student->marks[module_index] = new_mark;
    return 1; // Success
}