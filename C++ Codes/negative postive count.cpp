#include<iostream>
using namespace std;
int main()
{
    int x, positive=0, negative=0, zeros=0;
    cout<<" How many integers you wanna add : ";
    cin>>x;
    int y;
    cout<<"Enter numbers: "<<endl;
    for(int i = 0; i < x; i++)
    {
    cin>>y;

    if( y > 0)
    {
       positive++;
    }
    else if ( y < 0 )
    {
        negative++;
    }
    else
    {
        zeros++;
    }
    }
    cout<<" Positive Numbers: "<<positive<<endl;
    cout<<" Negative Numbers: "<<negative<<endl;
    cout<<" Zero Vales: "<<zeros<<endl;
}
