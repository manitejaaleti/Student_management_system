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









