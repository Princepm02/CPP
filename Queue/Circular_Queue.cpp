// Implementation of Circular Queue in integer array

#include <iostream>
#include <cstdlib> // For system("clear")
using namespace std;

void insert(int a[], int n, int &r, int &f);
void del(int a[], int n, int &r, int &f);
void dis(int a[], int n, int r, int f);

int main()
{
    int fr = -1, re = -1, size;
    cout << "\nEnter the size of Circular Queue : ";
    cin >> size;
    int *arr = new int[size]; // Dynamic memory allocation
    for (;;)
    {
        system("clear"); // Clear the screen (Unix/Linux)
        int ch;
        cout << "\nMenu of Circular Queue";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\n\nEnter your choice(1-4) : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert(arr, size, re, fr);
            break;
        case 2:
            del(arr, size, re, fr);
            break;
        case 3:
            dis(arr, size, re, fr);
            break;
        case 4:
            delete[] arr; // Deallocate the array to avoid memory leak
            return 0;
        }
    }
}

void insert(int a[], int n, int &r, int &f)
{
    system("clear"); 
    int num;
    char res = 'y';
    while (res == 'y' || res == 'Y')
    {
        if ((r + 1) % n == f)
        {
            cout << "\nQueue is full";
            cout << "\nNo Element can be Inserted";
            cout << "\nPress ENTER to go back to the main menu";
            cin.ignore();
            cin.get();
            system("clear"); 
            break;
        }
        cout << "\nEnter the number to be inserted : ";
        cin >> num;
        if (r == -1)
        {
            r = (r + 1) % n;
            f = (f + 1) % n;
            a[r] = num;
        }
        else
        {
            r = (r + 1) % n;
            a[r] = num;
        }
        cout << "\nWant to insert more elements(y/n)...... ";
        cin >> res;
        if (res == 'n' || res == 'N')
        {
            system("clear"); 
        }
    }
}

void del(int a[], int n, int &r, int &f)
{
    system("clear"); 
    char res;
    if (f == -1)
    {
        cout << "\nQueue is Empty!!!!!";
        cout << "\nThere is no element in Queue";
        cin.ignore();
        cin.get();
        return;
    }
    cout << "\nQueue is : ";
    int i = f;
    while (i != r)
    {
        cout << a[i] << " ";
        i = (i + 1) % n;
    }
    cout << a[r] << " ";

    cout << "\n\nYou Surely Want to delete element(y/n)..... ";
    cin >> res;

    while (res == 'y' || res == 'Y')
    {
        int x = a[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % n;
        }
        cout << "\n" << x << " deleted";
        cout << "\n\nQueue after deletion : ";
        i = f;
        while (i != r)
        {
            cout << a[i] << " ";
            i = (i + 1) % n;
        }
        if (f != -1)
        {
            cout << a[r] << " ";
        }
        cout << "\n\nWant to delete more elements(y/n)...... ";
        cin >> res;
        if (res == 'n' || res == 'N')
        {
            system("clear"); // Clear the screen (Unix/Linux)
        }
    }
}

void dis(int a[], int n, int r, int f)
{
    if (f == -1)
    {
        cout << "\nQueue is empty!!!!!\nPress ENTER";
        cin.ignore();
        cin.get();
    }
    else
    {
        cout << "\nElement in Circular Queue : ";
        int i = f;
        while (i != r)
        {
            cout << a[i] << " ";
            i = (i + 1) % n; 
        }
        cout << a[r] << " ";
        cout<<"\nPress ENTER";
        cin.ignore();
        cin.get();
    }
}
