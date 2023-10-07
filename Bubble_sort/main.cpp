

#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    
    int a[5],n=0,i,j,t;
	cout<<"Enter size of an array\n";
    cin>>n;
    cout<<"Enter array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before sorting : \n";
    for(i=0;i<5;i++)
        cout<<a[i];

for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
cout<<"\nArray after sorting : \n";
for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    int clrscr();
}
