
#include <stdio.h>
#include <stdlib.h>

struct student {
    int data;
    struct student *next;
};

struct student *head = NULL;

// Create a node
struct student* createnode() {
    struct student *newnode;

    newnode = (struct student*)malloc(sizeof(struct student));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    return newnode;
}

// Insert at beginning
void insertbeg() {
    struct student *newnode;

    newnode = createnode();
    newnode->next = head;
    head = newnode;
}

// Insert at end
void insertend() {
    struct student *newnode;
    struct student *temp;

    newnode = createnode();

    if (head == NULL) {
        head = newnode;
    }
    else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

// Delete from beginning
void deletebeg() {
    struct student *temp;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    head = head->next;

    printf("Deleted data: %d\n", temp->data);

    free(temp);
}

// Delete from end
void deleteend() {
    struct student *temp;
    struct student *prev;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL) {
        printf("Deleted data: %d\n", head->data);

        free(head);
        head = NULL;
        return;
    }

    temp = head;
    prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    printf("Deleted data: %d\n", temp->data);

    free(temp);
}

// Display list
void display() {
    struct student *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== INTEGER LINKED LIST =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertbeg();
                break;

            case 2:
                insertend();
                break;

            case 3:
                deletebeg();
                break;

            case 4:
                deleteend();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
