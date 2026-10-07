#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "How many numbers you want to add: ";
    cin >> n;

    vector<int> v(n);

    cout << "Array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << "The second largest number: " << v[n - 2] << endl;

    return 0;
}
