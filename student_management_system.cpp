#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main();
void displayStudent(int index);     // Function to display student data.
void inputStudentData(int index);   // Function to get student data from user.
void searchStudent(int rollNumber); // Function to search for a student by roll number.
void addStudent();                  // Function to add a new student record.
void editStudent(int id);           // Function to edit an existing student record.
void fullscreen();
int totalStudents;

struct Student {  // Structure to store student attributes.
    int rollNumber;
    string name;
    string fatherName;
    string phoneNumber;
    string dateOfBirth;
    string address;
};

Student students[50];  // Array to store student records.

int main() {
    system("CLS");
    system("color B1");
    int choice;   // Variable to determine the user's choice of operation.
    int id;       // Variable to store the ID number for editing.
    int rollNumber;  // Variable to store the roll number for searching.

    cout << "Enter the total number of students (Max 50): ";
    cin >> totalStudents;

    while (totalStudents--) {
        cout << "\n\t\tWhat do you want to do?" << endl;
        cout << "\t\t----------------------" << endl;
        cout << "\t\t1 - Add student" << endl;
        cout << "\t\t2 - Edit student" << endl;
        cout << "\t\t3 - Search student" << endl;
        cout << "\t\t4 - Quit program" << endl;
        cout << "\t\t----------------------" << endl;
        cout << "Enter your choice: ";

        cin >> choice;
        switch (choice) {
            case 1:  // Add student module.
                addStudent();
                break;
            case 2:  // Edit student module.
                if (students[0].rollNumber == 0) {
                    cout << "Please add students first." << endl;
                    system("pause");
                    main();
                } else {
                    cout << endl;
                    cout << "--------------------------------------------------------------------------------" << endl;
                    cout << "--------------------------- Student Record Table -------------------------------" << endl;
                    cout << "--------------------------------------------------------------------------------" << endl;
                    cout << "ID   " << "Roll   " << "Name      " << "Father\tPhone Number      " << "DOB          " << "Address\n\n";
                    cout << "--------------------------------------------------------------------------------" << endl;

                    for (int i = 0; i <= totalStudents; i++) {
                        displayStudent(i);  // Display student data.
                    }

                    cout << "--------------------------------------------------------------------------------" << endl;
                    cout << "Which ID number do you want to edit: ";
                    cin >> id;  // Get the ID number to edit.

                    if (id > totalStudents || id < 0) {  // Validate the ID number.
                        cout << "\nInvalid ID Number." << endl;
                    } else {
                        editStudent(id);  // Edit the student record.
                    }
                }
                break;
            case 3:  // Search student module.
                if (students[0].rollNumber == 0) {
                    cout << "Please add students first." << endl;
                    system("pause");
                    main();
                } else {
                    cout << "Enter roll number of the student you want to search: ";
                    cin >> rollNumber;  // Get the roll number to search.
                    searchStudent(rollNumber);
                }
                break;
            case 4:  // Quit the program.
                return 0;
                break;
            default:  // Invalid input.
                cout << "Invalid number." << endl;
                system("pause");
                main();
        }
    }
    return 0;
}

void inputStudentData(int index) {  // Function to get student data from user.
    cout << "Enter student roll number (format: 1XXX): ";
    cin >> students[index].rollNumber;
    cout << "Enter student name: ";
    cin >> students[index].name;
    cout << "Enter student's father name: ";
    cin >> students[index].fatherName;
    cout << "Enter student's phone number: ";
    cin >> students[index].phoneNumber;
    cout << "Enter student's date of birth (dd/mm/yyyy): ";
    cin >> students[index].dateOfBirth;
    cout << "Enter student's address: ";
    cin >> students[index].address;
}

void displayStudent(int index) {  // Function to display student data.
    cout << index << "    ";
    cout << students[index].rollNumber << "   ";
    cout << students[index].name << "     ";
    cout << students[index].fatherName << "\t";
    cout << students[index].phoneNumber << "   ";
    cout << students[index].dateOfBirth << "   ";
    cout << students[index].address << "\n\n";
}

void searchStudent(int rollNumber) {
    for (int i = 0; i <= totalStudents; i++) {  // Loop through the array.
        if (students[i].rollNumber == rollNumber) {  // If roll number matches.
            cout << "ID   " << "Roll   " << "Name      " << "Father\tPhone Number      " << "DOB          " << "Address\n\n";
            displayStudent(i);  // Display student data.
        }
    }
}

void addStudent() {  // Function to add a new student record.
    for (int i = 0; i <= totalStudents; i++) {
        inputStudentData(i);  // Get student data.
    }
    system("CLS");
    cout << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "--------------------------- Student Record Table -------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "ID   " << "Roll   " << "Name      " << "Father\tPhone Number      " << "DOB          " << "Address\n\n";
    cout << "--------------------------------------------------------------------------------" << endl;

    for (int i = 0; i <= totalStudents; i++) {
        displayStudent(i);  // Display student data.
    }
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------- FINISH ---------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    system("pause");

    main();  // Return to main function.
}

void editStudent(int id) {  // Function to edit an existing student record.
    for (int i = 0; i <= totalStudents; i++) {  // Loop through the array.
        if (id == i) {  // If ID matches.
            cout << "\nExisting information about this record.\n\n";
            cout << "--------------------------------------------------------------------------------" << endl;
            cout << "ID   " << "Roll   " << "Name      " << "Father\tPhone Number      " << "DOB          " << "Address\n\n";
            cout << "--------------------------------------------------------------------------------" << endl;
            displayStudent(i);  // Display existing data.
            cout << "\n\nEnter new data for the above shown record.\n\n";
            inputStudentData(i);  // Get new data.
            cout << "\n\nRecord updated successfully." << endl;
            system("pause");
            main();  // Return to main function.
        }
    }
}
