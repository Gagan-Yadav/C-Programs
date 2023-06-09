#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    
    int sm[5][6] =
    {
        {0 , 0 , 0 , 0 , 9, 0 },
        {0 , 8 , 0 , 0 , 0, 0 },
        {4 , 0 , 0 , 2 , 0, 0 },
        {0 , 21 , 0 , 0 , 0, 5 },
        {0 , 0 , 2 , 0 , 15, 0 }
    };

    
    int size = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sm[row][column] != 0)
                size++;

    int rm[size][3];
    int k = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sm[row][column] != 0)
            {
                rm[k][0] = row;
                rm[k][1] = column;
                rm[k][2] = sm[row][column];
               k++;
            }

    cout<<"Triplet Representation : "<<"\n"<<"row column value "<<endl;
    for (int row=0; row<size; row++)
    {
        for (int column = 0; column<3; column++)
            cout<<""<<rm[row][column]<<"   "<<"  ";

        cout<<endl;
    }
    return 0;
}