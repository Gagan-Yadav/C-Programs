// 12 jan 2021
//  Gagan yadav
 
#include<stdio.h>
#include<iostream>
#include<conio.h>

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
void insert_r()
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
              do
              {
                  int a;
            cout<<"Want to insert more elemnts : \n1 : yes\n2 : NO\n";
            cin>>a;
            if(a==1)
            {
                cout<<" Enter any element\n";
            cin>>n;
            q.entry[q.rear]=n;
            q.rear++;
            count++;
           }
           else
                break;
            }while(q.rear!=max);
            }
}
void delet_f()
{
    int n;
    if(isempty())
        cout<<" Queue is empty\n";
        else
        {
            if(q.front==max)
            
                q.front = q.front%max;
                n = q.entry[q.front];
                cout<<n<<"    has been deleted\n";
                q.front++;
                count--;
            
        }
        
}
void traverse_f()
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
void insert_f()
{
    int n;
    if(isfull())
        cout<<"Dequeue is full\n";
        else
            if(q.front==0&&q.rear!=0)
                cout<<"Insertion is not possible\n";
                else
                {
                    cout<<"Enter any element : \n ";
                    cin>>n;
                    if(q.front==0&&q.rear==0)
                    {
                        q.entry[q.front]=n;
                        q.rear++;
                    }
                    else
                    {
                        q.front--;
                        q.entry[q.front]=n;
                    }
                    count++;
                }
}
void delet_r()
{
    int n;
    if(isempty())
        cout<<"DE_Queue is empty\n";
        else
            {
                q.rear--;
            n=q.entry[q.rear];
            cout<<n<<"has been deleted\n";
            count--;
            
            }
}
void traverse_r()
{
      int i,j;
    if(isempty())
        cout<<" Queue is empty\n";
        else
        {
            cout<<"Elements are : ";
            j=q.rear;
            for(i=q.rear;i>=q.front;i--)
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
    cout<<"\nYour choice\n"<<"1:Insert_r\n"<<"2: Delet_f\n"<<"3: Traverse_f\n"<<"4: Insert_f\n"<<"5: Delet_r\n"<<"6: Traverse_r\n"<<"7: exit\n"<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            insert_r();
            break;
            case 2:
            delet_f();
            break;
            case 3:
            traverse_f();
            break;
            case 4:
            insert_f();
            break;
            case 5:
            delet_r();
            break;
            case 6:
            traverse_r();
            break;
            case 7:
            exit(0);
            default:
            cout<<"Invalid choice";
        }
    }while(ch!=7);
    int clrscr();
}