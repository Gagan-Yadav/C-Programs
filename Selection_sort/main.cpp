#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i, j, n,t,k,a[20];
    cout<<"Enter the size of an array :\n";
    cin>>n;
    cout<<"Entr array element : \n";
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if (a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        cout<<"Sorted array : \n";
for(i=0;i<n;i++)
    cout<<a[i]<<endl;
//    getch();
        
}
