



#include <iostream>
using namespace std;
int main()
{
  int arr[3][4] = {
      {2, 5, 6, 8},
      {3, 15, 9, 12},
      {4,11,10,50}};

  int x, size, i = 0, j = 0,row= 3, add = 0;
  size = sizeof(arr[0][0]);
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
      cout << arr[i][j] << "  ";
    cout << endl;
  }
  cout<<"Enter element to see its address:";
  cin>>x;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      if (arr[i][j] == x)
      {
        add = size * (i +(row*j));
      }
  cout<<"  Base address  :  " << (unsigned)&arr[0][0] << "    " << endl;
  cout<<"  Element  address  :  "<<(unsigned)&arr[0][0]+add<< endl;
//  getch();
}
