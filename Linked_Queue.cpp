//Implementation of Linked list in Queue
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void ins();
void del();
void display();

struct queue
{
  int roll,mrks;
  queue *link;
} *front,*rear,*temp,*np,*temp1;

void main()
{
  clrscr();
  front=NULL;
  rear=NULL;
  int cho;
  for( ; ; )
  {
    clrscr();
    cout<<"\n  Linklist Queue";
    cout<<"\n\n1. Insert linklist in Queue";
    cout<<"\n2. Delete linklist in Queue";
    cout<<"\n3. Dislay linklist in Queue";
    cout<<"\n4. Exit";
    cout<<"\n\nEnter your choice(1/2/3/4) : ";
    cin>>cho;
    switch(cho)
    { clrscr();
      case 1 : ins();
	       break;
      case 2 : del();
	       break;
      case 3 : display();
	       break;
      case 4 : exit(0);
    }
  }
}

void ins()
{
  clrscr();
  char res='y';
  while(res=='y' || res=='Y')
  {
    np=new queue;
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
    else if(rear==NULL)
    {
      front=np;
      rear=np;
    }
    else
    {
      rear->link=np;
      rear=rear->link;
    }
    cout<<"\nWant to Insert more Linklist in Queue(y/n)..... ";
    cin>>res;
  }
}

void del()
{
  clrscr();
  char res;
  display();
  cout<<"\n\nYou surely Want to Delete linklist in Queue(y/n).... ";
  cin>>res;
  while(res=='y' || res=='Y')
  {
    clrscr();
    if(front==NULL)
    {
      cout<<"\nThere is no linklist in Queue";
      cout<<"\nPress ENTER to go back to main menu";
      getch();
      clrscr();
      break;
    }
    else if(front==rear)
    {
      cout<<"\n\nRoll no. : "<<front->roll;
      cout<<"\t\tMarks : "<<front->mrks;
      temp=front;
      front=NULL;
      rear=NULL;
      delete temp;
      cout<<"  are Deleted from Queue";
      cout<<"\nThere is no more Linklist in Queue";
      getch();
      break;
    }
    else
    {
      cout<<"\n\nRoll no. : "<<front->roll;
      cout<<"\t\tMarks : "<<front->mrks;
      temp=front;
      front=front->link;
      delete temp;
      cout<<"  are Deleted from Queue";
      cout<<"\n\nLinklist in Queue after Deletion : ";
      display();

    }
    cout<<"\n\nWant to Delete more Linklist in Queue(y/n)..... ";
    cin>>res;
  }
}

void display()
{
  temp1=front;
  if(temp1==NULL)
  {
    cout<<"\nThere is no Linklist in Queue";
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
