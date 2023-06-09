//wrong correct it
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int insertion_sort(int ar[], int n)
{
    cout<<"|gagan";
    for(int i=1;i<n;i++)
    {
        int temp = ar[i];
        int j = i-1;
        while(j>=0&&ar[j]>temp)
        {
        ar[j+1] = ar[j];
        j = j+1;
        }
        ar[j+1] = temp;
    }
}
int main()
{
    int i;
    int ar[] = {6,5,4,3,2,1};
    int n = sizeof(ar)/sizeof(ar[1]);
    insertion_sort(ar,n);
    cout<<"Sorted array : \n";
    for(int i=0;i<n;i++)
        cout<<"g";
        cout<<ar[i]<<endl;
        
        return 0;
}