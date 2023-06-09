#include <stdio.h>
#include<iostream>
#define max 10
using namespace std;	
typedef struct stack
{
  int entry[max];
  int top1 , top2;
}mstack;
mstack s;
void init()
{
     s.top1=0;
     s.top2=max;
}
int isempty1()
{
    if(s.top1==0)
        return 1;
        else
            return 0;
}
int isempty2()
{
    if(s.top2==max)
        return 1;
        else
            return 0;
}
int isfull()
{
    if(s.top1==s.top2)
        return 1;
        else
            return 0;
}
void push1()
{
    int n;
    if(isfull())
        cout<<"Stack is full\n";
        else
        {
            cout<<"Enter any element\n";
            cin>>n;
            s.entry[s.top1]=n;
            s.top1++;
        }
}
void push2()
{
    int n;
    if(isfull())
        cout<<"stack is full\n";
        else
        {
            cout<<"Enter any element\n";
            cin>>n;
            s.entry[s.top2]=n;
            s.top2--;
        }
}
void pop1()
{
    int n;
    if(isempty1())
     cout<<"Stack is empty\n";
    else
    {
        s.top1--;
        n=s.entry[s.top1];
        cout<<n<<"has been deleted\n";
    }
}
void pop2()
{
    int n;
    if(isempty2())
        cout<<"stack  is empty\n";
        else
        {
            n=s.entry[s.top2];
            cout<<n<<"has been deleted\n";
            s.top2++;
        }
    
}
void traverse1()
{
    int i;
    if(isempty1())
        cout<<"Stack is empty\n";
        else
        {
            cout<<"Elements are\n";
            for(i=s.top1-1;i>=0;i--)
            {
                cout<<endl<<"________="<<s.entry[i];
            }
        }
}
void traverse2()
{
    int i;
    if(isempty2())
        cout<<"Stack 2 is empty\n";
        else
        {
            cout<<"Elements are\n";
            for(i=s.top2+1;i<=max;i++)
            {
                cout<<endl<<s.entry[i];
            }
        }
}
int main()
{
    int ch;
//    clrscr();
    init();
    do
    {
        cout<<"\n\nyour choice\n";
        cout<<"1: push1\n"<<"4: push2\n";
        cout<<"2: pop\n"<<"5: pop2\n";
        cout<<"3: traverse\n"<<"6: traverse\n";
        cout<<"7: exit\n";
        cout<<"\nEnter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            push1();
            break;
            case 2:
            pop1();
            break;
            case 3:
            traverse1();
            break;
            case 4:
            push2();
            break;
            case 5:
            pop2();
            break;
            case 6:
            traverse2();
            break;
            case 7:
            exit(0);
            break;
            default:
            cout<<"Invalid choice\n";
        }
    }while(ch!=7);
    
    
    
//    getch();
}