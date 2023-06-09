//Gagan yadav
//19 jan 2021
#include<iostream>
#include<stdlib.h>
using namespace std;
 typedef struct stack
{
    int data;
    struct stack *next;
}stack;
int count=0,i;
stack *top;
void init()
{
    
    int n;
    stack *s;
    s = new(stack);
}

int push()
{
    stack *s;
    int n,k;
    s = new(stack);
    cout<<"Enter any element :";
    cin>>n;
    s->data=n;
    s->next=top;
    top=s;
    count++;
    int j;
    cout<<"want to insert more values : \n1 : yes \n2: No\n";
    cin>>k;
    if(k==1)
    {
        cout<<"How many values you want to insert : ";
        cin>>j;
       // cout<<"If you want to back from mid then press f \n";
        //char f;
        for(int i=1;i<=j;i++)
        {
         stack *s;
    int n;
    s = new(stack);
    cout<<"Enter any element :";
    cin>>n;
   // if(n=='f')
    //{
      //  break;
    //}
    s->data=n;
    s->next=top;
    top=s;
    count++;
        }
    }
        else
            return 0;
}


int isempty()
{
    if(count==0)
        return 1;
        else
            return 0;
}
void delet()
{
    int n;
    stack *s;
    if(isempty())
        cout<<"!!.. Stack is empty ..!! ";
        else
        {
            s=top;
            n=s->data;
            cout<<"     "<<n<<"  has been deleted ";
            top=s->next;
            delete(s);
            count--;
        }
}
void traverse()
{
    stack *s;
    if(isempty())
        cout<<"!!.. Stack is empty ..!!";
        else
        {
            s=top;
            cout<<"Elements are :";
            while(s!=0)
            {
                cout<<"      \n         "<<s->data;
                s=s->next;
            }
        }
}
int main()
{
    int ch;
    init();
    do
    {
      cout<<"\n___________________";
		cout<<"\nyour choice\n"<<"1:push\n"<<"2:delet\n""3:traverse\n"<<"4:exit\n"<<"\nenter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
            push();
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
								cout<<"invalid choice\n";
        }
	}while(ch!=4);
}
    
