

#include <stdio.h>
#include<iostream>
using namespace std;
#define max 5
typedef struct stack
{
	int entry[max];
	int top;
	
}stack;
stack s;
void init()
{
	s.top=0;
	
}
int isempty()
{
	if(s.top==0)
	return 1;
	else
	return 0;
}
int isfull()
{
if(s.top==max)
return 1;
else
return 0;
}
void push()
{
	int n;
	if(isfull())
	cout<<"stack is full\n";
	else
	{
		cout<<"enter any element\n";
		cin>>n;
		s.entry[s.top]=n;
		s.top++;
	}
}
void pop()
{
	int n;
	if (isempty())
	cout<<"stack is empty\n";
	else
	{
		s.top--;
		n = s.entry[s.top];
		cout<<n<<" : has been deleted\n";
	}
}
void traverse()
{
	int i;
	if(isempty())
	cout<<"stack is empty\n";
	else
	{
		cout<<"\n elements are\n";
		for(i= s.top-1;i>=0;i--)
		{
			cout<<s.entry[i]<<"\n";
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
		cout<<"\nyour choice\n";
		cout<<"1:push\n";
		cout<<"2:pop\n";
		cout<<"3:traverse\n";
		cout<<"4:exit\n";
		cout<<"\nenter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
            push();
            break;
				case 2:
					pop();
					break;
					case 3:
						traverse();
						break;
						case 4:
							exit(0);
							default:
								cout<<"invalid choice\n";
		}
//		std::getch();
//		clrscr();
	}while(ch!=4);
}
