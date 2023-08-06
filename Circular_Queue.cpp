// Implementation of Circular Queue in integer array

#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void insert(int a[],int n,int &r,int &f);
void del(int a[],int n,int &r,int &f);
void dis(int a[],int &r,int &f);

int i;

void main()
{
  clrscr();
  int fr=-1,re=-1,size;
  cout<<"\nEnter the size of Circular Queue : ";
  cin>>size;
  int *arr=new int[size];          //Dynamic memory allocation
  for( ; ; )
  {
    clrscr();
    int ch;
    cout<<"\nMenu of Circular Queue";
    cout<<"\n1. Insert";
    cout<<"\n2. Delete";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    cout<<"\n\nEnter your choice(1-4) : ";
    cin>>ch;
    switch(ch)
    {
      case 1 : insert(arr,size,re,fr);
	       break;
      case 2 : del(arr,size,re,fr);
	       break;
      case 3 : dis(arr,re,fr);
	       break;
      case 4 : delete[ ] arr;  //to avoid memory leak we to deallocate array
	       exit(0);
    }
  }
}


void insert(int a[],int n,int &r,int &f)
{
  clrscr();
  int num;
  char res='y';
  while(res=='y' || res=='Y')
  {
    if((r+1)%n==f)
    {
      cout<<"\nQueue is full";
      cout<<"\nNo Element can be Inserted";
      cout<<"\nPress ENTER to go back to main menu";
      getch();
      clrscr();
      break;
    }
    cout<<"\nEnter the no. to be inserted : ";
    cin>>num;
    if(r==-1)
    {
      r=(r+1)%n;
      f=(f+1)%n;
      a[r]=num;
    }
    else
    {
      r=(r+1)%n;
      a[r]=num;
    }
    cout<<"\nWant to insert more elements(y/n)...... ";
    cin>>res;
    if(res=='n' || res=='N')
    {
      clrscr();
    }
  }
}


void del(int a[],int n,int &r,int &f)
{
  clrscr();
  char res;
  cout<<"\nQueue is : ";
  for(i=f;i<=r;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<"\n\nYou Surely Want to delete element(y/n)..... ";
  cin>>res;

  while(res=='y' || res=='Y')
  {
    int x;

    if(f==-1)
    {
      cout<<"\nQueue is Empty!!!!!";
      cout<<"There is no element in Queue";
      break;
    }
    else if(f==r)
    {
      x=a[f];
      cout<<"\n"<<x<<" deleted";
      f=-1;
      r=-1;
      cout<<"\n\nThere is no more element in the queue";
      getch();
      clrscr();
      break;
    }
    else
    {
      x=a[f];
      cout<<"\n"<<x<<" deleted";
      f=(f+1)%n;
      cout<<"\n\nQueue after deletion : ";
      for(int i=f;i<=r;i++)
      {
	cout<<a[i]<<" ";
      }
    }
    cout<<"\n\nWant to delete more elements(y/n)...... ";
    cin>>res;
    if(res=='n' || res=='N')
    {
      clrscr();
    }
  }
}


void dis(int a[],int &r,int &f)
{
  if(r==-1)
  {
    cout<<"\nQueue is empty!!!!!";
  }
  else if(f==r)
  {
    cout<<"\nElement in Circular Queue : "<<a[r];
  }
  else
  {
    cout<<"\nElement in Circular Queue : ";
    for(int i=f;i<=r;i++)
    {
      cout<<a[i]<<" ";
    }
  }
  getch();
}
