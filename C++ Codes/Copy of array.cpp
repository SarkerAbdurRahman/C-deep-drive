#include<iostream>
using namespace std;
int main()
{
    int n, arr1[n],arr2[n];
    cout<<" How many elements you want add: " ;
    cin>>n;
    cout<<" Enter the elements of Array 1: "<<endl;
    for (int i=0 ;i < n; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<" The number of Array 2 is : ";
    for(int i=0; i<n; i++)
    {
    cout<<'\t'<< arr2[i];
    }
}
