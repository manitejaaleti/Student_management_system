# Student Management System

This is a simple Student Management System implemented in C++. It allows you to add, edit, search, and display student records.

## Features

- Add new student records
- Edit existing student records
- Search for students by roll number
- Display all student records

## Getting Started

### Prerequisites

- C++ compiler (e.g., GCC)
- Basic knowledge of C++ programming

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/student-management-system.git
    ```

2. Navigate to the project directory:
    ```bash
    cd student-management-system
    ```

3. Compile the code:
    ```bash
    g++ -o student_management_system main.cpp
    ```

4. Run the executable:
    ```bash
    ./student_management_system
    ```

## Usage

1. Enter the total number of students (maximum 50).
2. Choose an option from the menu:
    - `1` to add a student
    - `2` to edit a student
    - `3` to search for a student
    - `4` to quit the program

### Example

```plaintext
Enter the total number of students (Max 50): 2

        What do you want to do?
        ----------------------
        1 - Add student
        2 - Edit student
        3 - Search student
        4 - Quit program
        ----------------------
Enter your choice: 1

Enter student roll number (format: 1XXX): 1001
Enter student name: Alice
Enter student's father name: John
Enter student's phone number: 1234567890
Enter student's date of birth (dd/mm/yyyy): 01/01/2000
Enter student's address: 123 Main St

Enter student roll number (format: 1XXX): 1002
Enter student name: Bob
Enter student's father name: Robert
Enter student's phone number: 0987654321
Enter student's date of birth (dd/mm/yyyy): 02/02/2001
Enter student's address: 456 Elm St

        What do you want to do?
        ----------------------
        1 - Add student
        2 - Edit student
        3 - Search student
        4 - Quit program
        ----------------------
Enter your choice: 3

Enter roll number of the student you want to search: 1001
ID   Roll   Name      Father  Phone Number      DOB          Address

0    1001   Alice     John    1234567890   01/01/2000   123 Main St










Setup and Compilation:

First, we wrote the C++ code for the Student Management System, which includes functionalities to add, edit, search, and display student records.
We included necessary headers like <iostream>, <string>, <bits/stdc++.h>, and <stdlib.h>.
We defined a Student structure to store student attributes such as roll number, name, father's name, phone number, date of birth, and address.
We created an array of Student structures to store up to 50 student records.
Main Function:

The main function initializes the program, sets up the console color, and prompts the user to enter the total number of students.
It then enters a loop where it displays a menu with options to add, edit, search, or quit the program.
Based on the user's choice, it calls the appropriate function to perform the desired operation.
Adding Students:

The addStudent function is called when the user chooses to add a new student.
It loops through the number of students specified by the user and calls the inputStudentData function to get the details of each student.
After collecting the data, it clears the screen and displays the student records using the displayStudent function.
Editing Students:

The editStudent function is called when the user chooses to edit an existing student record.
It first displays all the student records and prompts the user to enter the ID number of the student they want to edit.
It validates the ID number and, if valid, displays the existing data for that student.
The user can then enter new data for the student, which updates the record.
Searching Students:

The searchStudent function is called when the user chooses to search for a student by roll number.
It prompts the user to enter the roll number and then loops through the student records to find a match.
If a match is found, it displays the student's details using the displayStudent function.
Displaying Students:

The displayStudent function is used to display the details of a student.
It takes an index as a parameter and prints the student's roll number, name, father's name, phone number, date of birth, and address.
Inputting Student Data:

The inputStudentData function is used to get the details of a student from the user.
It prompts the user to enter the roll number, name, father's name, phone number, date of birth, and address, and stores these details in the corresponding Student structure.
