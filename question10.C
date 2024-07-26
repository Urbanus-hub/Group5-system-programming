#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 12
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

// Structure to represent contact information
struct Contact {
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    char phoneNumber[MAX_PHONE_LENGTH];
};

// Global array to store contacts
struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

// Function prototypes
void addContact();
void deleteContact();
void updateContact();
void displayContacts();

int main() {
    int choice;

    // Main menu
    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Update Contact\n");
        printf("4. Display Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                deleteContact();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a new contact
void addContact() {
    if (numContacts >= MAX_CONTACTS) {
        printf("Maximum contacts reached.\n");
        return;
    }

    printf("Enter first name: ");
    scanf("%s", contacts[numContacts].firstName);
    printf("Enter last name: ");
    scanf("%s", contacts[numContacts].lastName);
    printf("Enter phone number: ");
    scanf("%s", contacts[numContacts].phoneNumber);

    numContacts++;
    printf("Contact added successfully.\n");
}

// Function to delete a contact
void deleteContact() {
    if (numContacts == 0) {
        printf("No contacts to delete.\n");
        return;
    }

    int i, j;
    char lastName[MAX_NAME_LENGTH];
    printf("Enter last name of contact to delete: ");
    scanf("%s", lastName);

    for (i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].lastName, lastName) == 0) {
            for (j = i; j < numContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            printf("Contact deleted successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

// Function to update a contact
void updateContact() {
    if (numContacts == 0) {
        printf("No contacts to update.\n");
        return;
    }

    char lastName[MAX_NAME_LENGTH];
    printf("Enter last name of contact to update: ");
    scanf("%s", lastName);

    for (int i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].lastName, lastName) == 0) {
            printf("Enter new first name: ");
            scanf("%s", contacts[i].firstName);
            printf("Enter new last name: ");
            scanf("%s", contacts[i].lastName);
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phoneNumber);
            printf("Contact updated successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

// Create Function to display all contacts
void displayContacts() {
    if (numContacts == 0) {
        printf("No contacts to display.\n");
        return;
    }

    printf("Contacts:\n");
    for (int i = 0; i < numContacts; i++) {
        printf("%d. %s %s - %s\n", i + 1, contacts[i].firstName, contacts[i].lastName, contacts[i].phoneNumber);
    }
}
