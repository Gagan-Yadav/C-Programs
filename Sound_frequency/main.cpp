



#include <stdio.h>
#include<iostream>
#include<dos.h>
#include<conio.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{

    int n;
    cout<<"Enter Number for pascal triangle - ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" "<<fact(i)/((fact(j)*fact(i-j)));
        }
        cout<<endl;
    }
    // int a;
    // int clrscr();
    // for(a=1;a<=20;a++)
    // {
    //     printf("%d",a);
    //     sound(a);
    //     delay(1000);
    // }
    // nosound();
    // getch();
}
