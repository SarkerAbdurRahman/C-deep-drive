#include<iostream>
using namespace std;

int main()
{
    int numbers[5];
    cout << " Give 5 integers: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    cout<<" Reverse order : "<<endl;
    for(int i = 4; i >= 0; i--)
    {
        cout<<numbers[i]<<endl;
    }
}
