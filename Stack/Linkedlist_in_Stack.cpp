//Program to demonstrate implementation of Linked list in Stack
#include<iostream>
#include<stdlib.h>

using namespace std;

struct stack
{
    int roll, mrks;
    stack* link;
} *top, *temp, *np, *temp1;

void push();
void pop();
void display();

int main()
{
    int cho;
    top = nullptr;

    while (true)
    {
        system("clear");
        cout << "\n  Linklist Stack";
        cout << "\n\n1. Push linklist in stack";
        cout << "\n2. Pop linklist in Stack";
        cout << "\n3. Display linklist in Stack";
        cout << "\n4. Exit";
        cout << "\n\nEnter your choice (1/2/3/4): ";
        cin >> cho;

        switch (cho)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}

void push()
{
    system("clear");
    char res = 'y';

    while (res == 'y' || res == 'Y')
    {
        np = new stack;
        np->link = nullptr;
        cout << "\nEnter Roll no. : ";
        cin >> np->roll;
        cout << "\nEnter Marks : ";
        cin >> np->mrks;

        if (np == nullptr)
        {
            cout << "\nOUT OF MEMORY!!!!!!!!";
            break;
        }
        else if (top == nullptr)
        {
            top = np;
        }
        else
        {
            np->link = top;
            top = np;
        }

        cout << "\nWant to push more Linklist in Stack (y/n)..... ";
        cin >> res;
    }
}

void pop()
{
    system("clear"); 
    char res;
    display();
    cout << "\n\nDo you want to pop Linklists in stack (y/n).... ";
    cin >> res;

    while (res == 'y' || res == 'Y')
    {
        system("clear");

        if (top == nullptr)
        {
            cout << "\nThere is no linklist in the stack";
            cout << "\nPress ENTER to go back to the main menu";
            cin.ignore();
            cin.get();
            system("clear");
            break;
        }
        else
        {
            cout << "\n\nRoll no. : " << top->roll;
            cout << "\t\tMarks : " << top->mrks;
            temp = top;
            top = top->link;
            delete temp;
            cout << "  are popped out from Stack";
            cout << "\n\nStack after popping : ";
            display();
        }

        cout << "\n\nWant to pop more Linklist in Stack (y/n)..... ";
        cin >> res;
    }
}

void display()
{
    temp1 = top;

    if (temp1 == nullptr)
    {
        cout << "\nThere is no linklist in the stack";
    }
    else
    {
        cout << "\nRoll no. And Marks in Linklist";
        while (temp1 != nullptr)
        {
            cout << "\n\nRoll no. : " << temp1->roll;
            cout << "\t\tMarks : " << temp1->mrks;
            temp1 = temp1->link;
        }
    }

    cin.ignore();
    cout<<"\nPress ENTER";
    cin.get();
}
