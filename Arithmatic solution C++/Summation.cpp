#include<iostream>
using namespace std;
int main(){

    int n,sum = 0;
    cout << " Enter the number of students :";
    cin >> n;
    int students[n];
    for(int i = 0; i < n ;i++){
        cout << "Enter the number "<<i+1<<" : ";
        cin >> students[i];
        sum=sum+students[i];

}
cout<<" Sum of all elements are:"<<sum<<endl;
float average = float (sum)/n;
cout<<" The average value is :"<<average<<endl;
//Maximum
int max=students[0];
for(int i=1;i<n;i++)
    {
    if(max<students[i])
    {
        max=students[i];
    }

}
cout<<" The maximum value is : "<<max<<endl;
//minimum
int min=students[0];
    for(int i = 1; i < n; i++)
    {
        if(min>students[i])
        {
            min=students[i];
        }
    }
cout<<" The minimum value is : "<<min<<endl;
// Even Odd Count
int evencount=0;
for(int i=0; i<n; i++)
{
    if(students[i] % 2 == 0)
    {
        evencount++;
    }
}
cout<<" Total even numbers found : "<<evencount<<endl;
int oddcount=0;
for(int i=0;i<n;i++)
{
    if(students[i]%2 !=0)
    {
        oddcount++;
    }
}
cout<<" Total Odd numbers found : "<<oddcount<<endl;

for(int i = 0 ; i < n ; i++)
{
    cout << students[i] << " ";

}

int s ;
int cnt = 0;
cout<<" Input the number to search: ";
cin>> s;
for(int i = 0; i < n; i++)
{
    if(students[i] == s)
    {
      cnt++;
    }
}
if(cnt > 0)
    {
    cout<<"The number is present: " << s << endl;
    }
else
{
    cout<<"The number is not present :  "<< s <<endl;
}

}
