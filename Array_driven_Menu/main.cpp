


//Gagan yadav
//11 jan 2021
#include <iostream>
using namespace std;
class menu
{
    int count =0, n=0,mx=0,mn=1000,x,arr[];
public:

    void create_array();
    void insert();
    void search();
    int binary_search(int arr[],int,int,int);
    void max();
    void min();
};
int menu::binary_search(int arr[],int l,int r,int x)
{
    if (r >= 1) Dr
   {
      int mid = l + (r - 1) / 2;
      if (arr[mid] == x)
         return mid;

      if (arr[mid] > x)
         return binary_search(arr,l, mid - 1, x);

      return binary_search(arr,mid+1,r,x);
   }
   return -1;
}
void menu::create_array()
{
    cout<<endl<<"Enter size of Array : ";
    cin>>n;
    cout<<endl<<"Array of "<<n<<" is created .";
    cout<<"\n\n";

}
void menu::search()
{
   if(n==0)
    {
        cout<<endl<<"You need to create an array first .\n";
        return;
    }
    else
    {
        if(count==0)
            cout<<"Array is empty\n";
            else
            {
    cout<<endl<<"Enter element to search : ";
    cin>>x;
    int res=binary_search(arr,0,n-1,x);
    if(res==-1)
        cout<<endl<<"Element not found :";
    else
        cout<<endl<<"Element  found on position : "<<res+1;
            }
            }
    }

void menu:: insert()
{
    if(n==0)
    {
        cout<<endl<<"You need to create an array first .\n";
        return;
    }
    cout<<endl<<"Enter Elements of array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Your array : \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
        count++;
}
void menu :: max()
{
       if(n==0)
    {
        cout<<endl<<"You need to create an array first .\n";
        return;
    }
    for(int i=0;i<n;i++)
        if(mx<arr[i])
            mx=arr[i];
    cout<<endl<<"Maximum number is : "<<mx;
}
void menu :: min()
{
    if(n==0)
    {
        cout<<endl<<"You need to create an array first .\n";
        return;
    }
    for(int i=0;i<n;i++)
        if(mn>arr[i])
            mn=arr[i];
    cout<<endl<<"Minimum number is : "<<mn;
}
int main()
{
    system("cls");
    menu o1;                          
    while (1)
    {
        cout<<endl<<"1.   Create an Array.";
        cout<<endl<<"2.   Insert an element in Array.";
        cout<<endl<<"3.   Search an element in Array.";
        cout<<endl<<"4.   Find Maximum element in Array.";
        cout<<endl<<"5.   Find Minimum element in Array.";
        cout<<endl<<"6.   Exit \n";
        int choice;
        cout<<endl<<"\nChose a Option from above menu:  ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            o1.create_array();
            break;
        case 2:
            o1.insert();
            break;
        case 3:
            o1.search();
            break;
        case 4:
            o1.max();
            break;
        case 5:
            o1.min();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<endl<< "Invalid Option." << endl;
        }
    }
}
