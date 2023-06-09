//full error in this program
//
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
#define max  5
class pque
{
private:
    struct data
    {
        char job[max];
        int pmo;
        int ord;
    }d[max];
    int front ,rear;
public:
int dt,temp;
    pque();
    void add(data dt);
    data remove();
};
pque::pque()
{
    front = rear=1;
    for(int i =0;i<max;i++)
    {
        strcpy(d[i].job,"\0");
        d[i].pmo = d[i].ord=0;
    }
}
void pque::add(data dt)
{
    if(rear==max-1)
    {
        cout<<"\nQueue is full";
        return;
    }
    rear++;
    d[rear]=dt;
    if(front==-1)
        front =0;
        data temp;
        for(int i=front;i<=rear;i++)
        {
            for(int j=i+1;j<=rear;j++)
            {
                if(d[i].pmo>d[j].pmo)
                {
                    temp = d[i];
                    d[i]=d[j];
                    d[j]=temp;
                }
                else
                    {
                    if(d[i].pmo==d[j].pmo)
                    {
                        if(d[i].ord>d[j].ord)
                        {
                            temp=d[i];
                            d[i]=d[j];
                            d[j]=temp;
                            
                        }
                    }
                }
            }
        }
}
 d pque::remove()
{
    data t;
    strcpy(t.job,"");
    t.pmo=0;
    t.ord=0;
    {
        if(front==-1)
        {
            cout<<"\nQueue is Empty"<<endl;
            return t;
        }
        t=d[front];
        d[front]=t;
        if(front==rear)
            front=rear=-1;
            else
                front++;
                return t;
    }
}
int main()
{
    pque q;
    data dt;
    int j=0;
    cout<<"Enter job description ( max 4 chars)and its priority"<<endl;
    cout<<"lower the priority number , higher the priority";
    cout<<"job Priority"<<endl;
    for(int i=0;i<max;i++)
    {
        cin>>dt.job>>dt.pmo;
        dt.ord=j++;
        q.add(dt);
    }
    cout<<endl;
    cout<<"Process jobs prioritywise"<<endl;
    cout<<"Job Priority"<<endl;
    for(i=0;i<max;i++)
    {
        data temp = q.remove();
        cout<<temp.job<<"    "<<temp.pmo<<endl;
    }
    cout<<endl;
}
