#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms in polynomial : \n";
    cin>>n;
    int arr[2][n];
    for(int i=0;i<n;i++)
    {
        arr[0][i] = i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the coefficient with x raised to : "<<i<<endl;
        cin>>arr[1][i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[1][i];
        if(i!=0)
            cout<<"x^"<<i;
            
            if(i!=n-1)
                cout<<"+";
    }
    return 0;
}