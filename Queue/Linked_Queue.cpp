//Implementation of Linked list in Queue
#include <iostream>

using namespace std;

struct Node {
    int roll, mrks;
    Node* link;
};

Node* front = nullptr;
Node* rear = nullptr;

void ins();
void del();
void display();

int main() {
    int cho;
    while (true) {
        cout << "\n  Linklist Queue";
        cout << "\n\n1. Insert linklist in Queue";
        cout << "\n2. Delete linklist in Queue";
        cout << "\n3. Display linklist in Queue";
        cout << "\n4. Exit";
        cout << "\n\nEnter your choice (1/2/3/4): ";
        cin >> cho;
        switch (cho) {
            case 1:
                ins();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
}

void ins() {
    char res = 'y';
    while (res == 'y' || res == 'Y') {
        Node* np = new Node;
        np->link = nullptr;
        cout << "\nEnter Roll no. : ";
        cin >> np->roll;
        cout << "Enter Marks : ";
        cin >> np->mrks;
        if (np == nullptr) {
            cout << "\nOUT OF MEMORY!!!!!!!!";
            break;
        } else if (rear == nullptr) {
            front = np;
            rear = np;
        } else {
            rear->link = np;
            rear = rear->link;
        }
        cout << "\nWant to Insert more Linklist in Queue (y/n)..... ";
        cin >> res;
    }
}

void del() {
    char res;
    display();
    cout << "\n\nYou surely want to Delete linklist in Queue (y/n).... ";
    cin >> res;
    while (res == 'y' || res == 'Y') {
        if (front == nullptr) {
            cout << "\nThere is no linklist in Queue";
            cout << "\nPress ENTER to go back to the main menu";
            cin.ignore();
            cin.get();
            break;
        } else if (front == rear) {
            cout << "\n\nRoll no. : " << front->roll;
            cout << "\t\tMarks : " << front->mrks;
            Node* temp = front;
            front = nullptr;
            rear = nullptr;
            delete temp;
            cout << "  are Deleted from Queue";
            cout << "\nThere is no more Linklist in Queue";
            cin.ignore();
            cin.get();
            break;
        } else {
            cout << "\n\nRoll no. : " << front->roll;
            cout << "\t\tMarks : " << front->mrks;
            Node* temp = front;
            front = front->link;
            delete temp;
            cout << "  are Deleted from Queue";
            cout << "\n\nLinklist in Queue after Deletion : ";
            display();
        }
        cout << "\n\nWant to Delete more Linklist in Queue (y/n)..... ";
        cin >> res;
    }
}

void display() {
    Node* temp1 = front;
    if (temp1 == nullptr) {
        cout << "\nThere is no Linklist in Queue";
    } else {
        cout << "\nRoll no. And Marks in Linklist";
        while (temp1 != nullptr) {
            cout << "\n\nRoll no. : " << temp1->roll;
            cout << "\t\tMarks : " << temp1->mrks;
            temp1 = temp1->link;
        }
    }
    cin.ignore();
    //cin.get();
}

