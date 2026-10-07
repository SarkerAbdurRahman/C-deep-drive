#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<" What will be the size of array : ";
    cin>>x>>y;
    int Arr1[x][y];
    cout<< " Input the elements of the array : "<<endl;
    for ( int i=0; i<x;i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>Arr1[i][j];
        }
    }
    cout<<" The Array you entered is : "<<endl;
    for ( int i=0; i<x;i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<Arr1[i][j];
        }
    }
}
