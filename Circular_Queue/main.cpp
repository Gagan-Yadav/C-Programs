// 5 jan 2021
//  Gagan yadav
 
#include<stdio.h>
#include<iostream>

using namespace std;
#define max 5
typedef struct cqueue
{
    int entry[max];
    int front,rear;
}cqueue;
cqueue q;
int count=0;
void init()
{
    q.front=0;
    q.rear=0;
}
int isempty()
{
    if(count==0)
    return 1;
    else
        return 0;
}
int isfull()
{
    if(count==max)
        return 1;
        else
            return 0;
}
void insert()
{
    int n;
    if(isfull())
        cout<<"Queue is full\n";
        else
        {
            cout<<"Enter any element\n";
            cin>>n;
            if(q.rear==max)
                q.rear=q.rear%max;
            q.entry[q.rear]=n;
            q.rear++;
            count++;
            }
        }
void delet()
{
    int n;
    if(isempty())
        cout<<" Queue is empty\n";
        else
        {
            if(q.front==max)
            
                q.front = q.front%max;
                n = q.entry[q.front];
                cout<<n<<"has been deleted\n";
                q.front++;
                count--;
            
        }
        
}
void traverse()
{
    int i,j;
    if(isempty())
        cout<<" Queue is empty\n";
        else
        {
            cout<<"Elements are : ";
            j=q.front;
            for(i=1;i<=count;i++)
            {
                if(j==max)
                    j=j%max;
                    cout<<endl<<q.entry[j];
                    j++;
            }
        }
}
int main()
{
    int ch;
    init();
    do
    {
    cout<<"\nYour choice\n"<<"1:Insert\n"<<"2: Delet\n"<<"3: Traverse\n"<<"4: exit\n"<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            traverse();
            break;
            case 4:
            exit(0);
            default:
            cout<<"Invalid choice";
        }
    }while(ch!=4);
    int clrscr();
}