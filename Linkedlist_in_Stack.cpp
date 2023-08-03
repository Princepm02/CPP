//Program to demonstrate implementation of Linked list in Stack

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct stack
{
  int roll,mrks;
  stack *link;
} *top,*temp,*np,*temp1;

void main()
{
  clrscr();
  top=NULL;
  int cho;
  for( ; ; )
  {
    clrscr();
    cout<<"\n  Linklist Stack";
    cout<<"\n\n1. Push linklist in stack";
    cout<<"\n2. Pop linklist in Stack";
    cout<<"\n3. Dislay linklist in Stack";
    cout<<"\n4. Exit";
    cout<<"\n\nEnter your choice(1/2/3/4) : ";
    cin>>cho;
    switch(cho)
    {
      case 1 : push();
	       break;
      case 2 : pop();
	       break;
      case 3 : display();
	       break;
      case 4 : exit(0);
    }
  }
}

void push()
{
  clrscr();
  char res='y';
  while(res=='y' || res=='Y')
  {
    np=new stack;
    np->link= NULL;
    cout<<"\nEnter Roll no. : ";
    cin>>np->roll;
    cout<<"\nEnter Marks : ";
    cin>>np->mrks;
    if(np==NULL)
    {
      cout<<"\nOUT OF MEMORY!!!!!!!!";
      break;
    }
    else if(top==NULL)
    {
      top=np;
    }
    else
    {
      np->link=top;
      top=np;
    }
    cout<<"\nWant to push more Linklist in Stack(y/n)..... ";
    cin>>res;
  }
}
void pop()
{
  clrscr();
  char res;
  display();
  cout<<"\n\nYou surely Want to pop Linklists in stack(y/n).... ";
  cin>>res;
  while(res=='y' || res=='Y')
  {
    clrscr();
    if(top==NULL)
    {
      cout<<"\nThere is no linklist in stack";
      cout<<"\nPress ENTER to go back to main menu";
      getch();
      clrscr();
      break;
    }

    else
    {
      cout<<"\n\nRoll no. : "<<top->roll;
      cout<<"\t\tMarks : "<<top->mrks;
      temp=top;
      top=top->link;
      delete temp;
      cout<<"  are poped out from Stack";
      cout<<"\n\nStack after popping : ";
      display();
    }
    cout<<"\n\nWant to pop more Linklist in Stack(y/n)..... ";
    cin>>res;
  }
}
void display()
{
  temp1=top;
  if(temp1==NULL)
  {
    cout<<"\nThere is no linklist in stack";
  }
  else
  {
    cout<<"\nRoll no. And Marks in Linklist";
    while(temp1!=NULL)
    {
      cout<<"\n\nRoll no. : "<<temp1->roll;
      cout<<"\t\tMarks : "<<temp1->mrks;
      temp1=temp1->link;

    }
  }
  getch();
}
