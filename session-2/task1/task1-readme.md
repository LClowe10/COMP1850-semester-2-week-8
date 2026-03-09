# Task 1: Simple Modularisation

## Learning Objectives
By the end of this activity, you should be able to:
- Separate a C program into header and implementation files
- Implement proper include guards
- Understand the relationship between interface and implementation
- Compile a multi-file C program

## Background
In this activity, you'll take the Student Record Management program from last week's Structure activity and refactor it into a properly modularised structure. This involves separating the program into three files:

1. **student.h** - Header file containing structure definitions and function declarations
2. **student.c** - Implementation file containing function definitions
3. **main.c** - Main program file that uses the student module

## Starting Code
The original, single-file student record program, is provided in the repository: `student_record_orig.c`


## Step 1: Create the Header File (student.h)
Create a new file named `student.h` that contains:
- Include guards
- Structure definition
- Function prototypes (declarations)
- Constant definitions

The header file should provide the **interface** to your student record module without revealing implementation details.

**Your Task:** Complete the student.h file below:

```c
/**
 * @file student.h
 * @brief Header file for student record management system
 */

/* Add include guards here */
#ifndef STUDENT_H
#define STUDENT_H

/* Add necessary includes here */


/* Add constant definitions here */


/* Add the Student structure definition here */


/* Add function prototypes here */


#endif /* STUDENT_H */
```

## Step 2: Create the Implementation File (student.c)
Create a new file named `student.c` that contains:
- Necessary includes (including your header file)
- Function implementations

The implementation file provides the actual code that makes the functions work, but doesn't include main().

**Important:** When including headers, always include your own header file first, then system headers.

**Your Task:** Complete the student.c file below:

```c
/**
 * @file student.c
 * @brief Implementation of student record management functions
 */

/* Add necessary includes here */
#include "student.h"  /* Always include your own header first */
#include <stdio.h>
#include <string.h>


/* Implement the calculate_average function here */



/* Implement the display_student function here */



/* Implement the update_name function here */



/* Implement the update_mark function here */


```

## Step 3: Create the Main Program File (main.c)
Create a new file named `main.c` that contains:
- Necessary includes (including your header file)
- The main() function

The main program file focuses on the high-level flow of your program, using the functions defined in your student module.

**Your Task:** Complete the main.c file below:

```c
/**
 * @file main.c
 * @brief Main program for student record management system
 */

/* Add necessary includes here */



/* Implement the main function here */


```

## Step 4: Compile and Test
Compile your modularised program with the following commands:

```bash
# Compile the implementation file to an object file
gcc -c student.c -o student.o

# Compile the main program file to an object file
gcc -c main.c -o main.o

# Link the object files to create the executable
gcc student.o main.o -o student_program

# Alternative one-line compilation (simpler but less efficient for large projects)
gcc student.c main.c -o student_program

# Run the program
./student_program
```

The output should be identical to the original single-file program.

## Common Issues

- **"undefined reference"** errors typically indicate you've declared a function in the header but not implemented it in the .c file
- **"multiple definition"** errors often mean missing include guards
- **"implicit declaration"** errors usually mean you forgot to include the header file
- If your program behavior differs from the original, check that all functions are implemented correctly

## Reflection Questions
1. How does separating the program into multiple files improve its organisation?
2. What is the purpose of include guards, and what problems do they prevent?
3. Why do we include the header file in both the implementation file and the main program file?
4. How would you extend this modular structure if you wanted to add more functionality, such as reading/writing student records to a file?

## Extension Tasks
If you finish early, try these extension tasks:

1. Add a new function to the student module that sorts an array of students by their average mark
2. Add appropriate documentation comments to all files
3. Update the program to handle multiple students
4. Create a new module for file operations (e.g., saving and loading student records)

## Note on Documentation

Maintain consistent documentation style across all files. Use the same Doxygen-style comments as in the original code for all new functions and data structures:

```c
/**
 * @brief Short description of function/structure
 *
 * @param param_name Description of parameter
 * @return Description of return value
 */
```
