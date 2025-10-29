#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Attendance {
    int studentID;
    char date[15];
    char status[10];
    struct Attendance *next;
};

struct Attendance *head = NULL;

void addAttendance(int id, char date[], char status[]) {
    struct Attendance *newnode = (struct Attendance*)malloc(sizeof(struct Attendance));
    newnode->studentID = id;
    strcpy(newnode->date, date);
    strcpy(newnode->status, status);
    newnode->next = head;
    head = newnode;
    printf("\nAttendance record added!\n");
}

void searchAttendance(int id, char date[]) {
    struct Attendance *temp = head;
    int found = 0;
    while (temp != NULL) {
        if (temp->studentID == id && strcmp(temp->date, date) == 0) {
            printf("\nAttendance: Student %d | %s | %s\n", temp->studentID, temp->date, temp->status);
            found = 1;
        }
        temp = temp->next;
    }
    if (!found) printf("\nNo record found.\n");
}

void displayAll() {
    struct Attendance *temp = head;
    if (temp == NULL) {
        printf("\nNo records.\n");
        return;
    }
    printf("\nAttendance Records:\n");
    while (temp != NULL) {
        printf("Student %d | %s | %s\n", temp->studentID, temp->date, temp->status);
        temp = temp->next;
    }
}

int main() {
    int choice, id;
    char date[15], status[10];

    do {
        printf("\n--- Student Attendance Monitoring ---\n");
        printf("1. Add Attendance\n");
        printf("2. Search Attendance\n");
        printf("3. Display All\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("Enter Student ID: ");
            scanf("%d", &id);
            printf("Enter Date (DD/MM/YYYY): ");
            scanf("%s", date);
            printf("Enter Status (Present/Absent): ");
            scanf("%s", status);
            addAttendance(id, date, status);
            break;

        case 2:
            printf("Enter Student ID: ");
            scanf("%d", &id);
            printf("Enter Date: ");
            scanf("%s", date);
            searchAttendance(id, date);
            break;

        case 3:
            displayAll();
            break;

        case 0:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    } while(choice != 0);
return 0;
}
