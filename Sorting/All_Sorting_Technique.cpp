#include <iostream>
#include <cstdlib>

void accarr(int a[], int n);
void disarr(const int a[], int n);
void bubble(int a[], int n);
void selection(int a[], int n);
void insertion(int a[], int n);

int main()
{
    int cho, size;
    std::cout << "\nEnter the size of Array : ";
    std::cin >> size;
    int *arr = new int[size]; // Dynamic Memory Allocation

    // Menu

    while (true)
    {
        //system("clear"); // Use "cls" instead of "clear" for Windows
        std::cout << "\n\nSorting Array Menu\n";
        std::cout << "\n1. Insert New Array";
        std::cout << "\n2. Display Array";
        std::cout << "\n3. Bubble sort";
        std::cout << "\n4. Selection Sort";
        std::cout << "\n5. Insertion Sort";
        std::cout << "\n6. Exit";
        std::cout << "\nEnter your choice : ";
        std::cin >> cho;
        switch (cho)
        {
            case 1:
                accarr(arr, size);
                break;
            case 2:
                disarr(arr, size);
                break;
            case 3:
                bubble(arr, size);
                break;
            case 4:
                selection(arr, size);
                break;
            case 5:
                insertion(arr, size);
                break;
            case 6:
                delete[] arr;
                return 0;
        }
    }
}

void accarr(int a[], int n)
{
    // Accepting Array Elements
    std::cout << "\nEnter " << n << " elements of Array : \n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    disarr(a, n);
}

void disarr(const int a[], int n)
{
    std::cout << "\nArray : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
}

//***********************   Bubble Sort   ***************************

void bubble(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                std::swap(a[j], a[j + 1]);
            }
        }
    }
    std::cout << "\nSorted array is : ";
    disarr(a, n);
    std::cout << "\nMain Array is sorted";
    std::cout << "\nPlease Enter New Array!!!!!!\n\n";
    std::cin.get();
}

//*************************    Selection Sort    *************************

void selection(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                std::swap(a[i], a[j]);
            }
        }
    }
    std::cout << "\nSorted array is : ";
    disarr(a, n);
    std::cout << "\nMain Array is sorted";
    std::cout << "\nPlease Enter New Array!!!!!!";
    std::cin.get();
}

//*************************    Insertion Sort    *************************
void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && temp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    std::cout << "\nSorted list is as follows\n";
    disarr(a, n);
    std::cout << "\nMain Array is sorted";
    std::cout << "\nPlease Enter New Array!!!!!!";
    std::cin.get();
}
