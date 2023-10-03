//01 FEB 2021
//Gagan Yadav

12345678901

#include <stdio.h>
#include<iostream>
using namespace std;
#define max 5
typedef struct queue
{
    int entry[max];
    int front, rear;
}queue;
queue q;
void init()
{
    q.front=0;
    q.rear=0;
}
int isempty()
{
    if(q.front==q.rear)
        return 1;
        else
            return 0;
}
int isfull()
{
    if(q.rear==max)
        return 1;
        else
        return 0;
}
void insert()
{
    int n;
    if(isfull())
        cout<<"queue is full";
        else
        {
            int a;
            cout<<"Enter any element\n";
            cin>>n;
            q.entry[q.rear]=n;
            q.rear++;
            do{
            cout<<"Want to insert more elemnts : \n1 : yes\n2 : NO\n";
            cin>>a;
            if(a==1)
            {cout<<" Enter any element\n";
            cin>>n;
            q.entry[q.rear]=n;
            q.rear++;
           }else
                break;
            }while(q.rear!=max);
            }
    
            
        }

void delet()
{
    int n;
    if(isempty())
        cout<<"Queue is empty\n";
        else
        {
            n=q.entry[q.front];
            cout<<n<<"has been deleted\n";
            q.front++;
        }
}
void traverse()
{
    int i;
    if(isempty())
        cout<<"Queue is empty";
        else
        {
            cout<<"elements are\n";
            for(i=q.front;i<q.rear;i++)
                cout<<endl<<q.entry[i]<<"\n";
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
}
