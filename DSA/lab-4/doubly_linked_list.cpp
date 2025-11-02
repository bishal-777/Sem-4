#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        cout << "Memory allocation failed!" << endl;
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtKthPosition(Node** head, int data, int k) {
    if (k <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (k == 1) {
        insertAtBeginning(head, data);
        return;
    }
    Node* temp = *head;
    for (int i = 1; i < k - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
        (*head)->prev = NULL;
    free(temp);
}

void deleteFromEnd(Node** head) {
    if (*head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
}

void deleteFromKthPosition(Node** head, int k) {
    if (*head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (k <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (k == 1) {
        deleteFromBeginning(head);
        return;
    }
    Node* temp = *head;
    for (int i = 1; i < k && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    free(temp);
}

void updateKthPosition(Node* head, int k, int newData) {
    if (k <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < k && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }
    temp->data = newData;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL;
    int choice, data, pos;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at k-th Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from k-th Position\n";
        cout << "7. Update k-th Position\n";
        cout << "8. Print List\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert at beginning: ";
                cin >> data;
                insertAtBeginning(&head, data);
                break;
            case 2:
                cout << "Enter data to insert at end: ";
                cin >> data;
                insertAtEnd(&head, data);
                break;
            case 3:
                cout << "Enter position to insert at: ";
                cin >> pos;
                cout << "Enter data to insert: ";
                cin >> data;
                insertAtKthPosition(&head, data, pos);
                break;
            case 4:
                deleteFromBeginning(&head);
                break;
            case 5:
                deleteFromEnd(&head);
                break;
            case 6:
                cout << "Enter position to delete from: ";
                cin >> pos;
                deleteFromKthPosition(&head, pos);
                break;
            case 7:
                cout << "Enter position to update: ";
                cin >> pos;
                cout << "Enter new data: ";
                cin >> data;
                updateKthPosition(head, pos, data);
                break;
            case 8:
                cout << "Doubly Linked List: ";
                printList(head);
                break;
            case 9:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
