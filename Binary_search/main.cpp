



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,flag,low,high,mid,key,a[10];
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the array element\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter search value\n";
	cin>>key;
	low=0;
	high=n-1;
	for(i=0;i<n;i++)
	{
		mid = (low+high)/2;
		if(a[mid]<key)
		low = mid+1;
		else if(a[mid]>key)
		high=mid-1;
		else if (a[mid]==key)
	{
	cout<<"__________";
	cout<<"\nFound\n";
	cout<<"__________";
	flag=0;
	break;
}
}
if(flag)
cout<<"Not found";
getch();
}
