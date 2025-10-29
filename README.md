# Student Attendance Monitoring System

Description:
This C program tracks student attendance using a singly linked list. It allows adding attendance records, searching for a student's attendance on a specific date, and displaying all attendance records. Each record contains Student ID, Date, and Status (Present/Absent).

Features:
1. Add Attendance – Add a record with Student ID, Date, and Status.
2. Search Attendance – Find a student's attendance on a specific date.
3. Display All – Show all attendance records.
4. Exit – Close the program.

How it Works:
- Uses a struct Attendance with fields: Student ID, Date, Status, and pointer to the next node.
- Linked list dynamically stores attendance records.
- New attendance entries are added to the head of the list.
- Provides a menu-driven interface for easy operation.

Compilation and Execution:
gcc studentsrecord_attendance.c -o studentsrecord_attendance
./studentsrecord_attendance

Sample Input/Output:
Enter choice: 1
Enter Student ID: 101
Enter Date (DD/MM/YYYY): 29/09/2025
Enter Status (Present/Absent): Present
Attendance record added!

Enter choice: 3
Attendance Records:
Student 101 | 29/09/2025 | Present
