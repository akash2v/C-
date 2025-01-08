#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void explainPair()
{
    pair<int, int> p;
    p.first = 10;
    p.second = 20;

    // cout << "first: " << p.first << endl;
    // cout << "second: " << p.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {1, 6}, {1, 9}, {10, 5}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<< "First of array "<< i << " = " << arr[i].first<<endl;
        cout<< "Second of array "<< i << " = " << arr[i].second<<endl<<endl;
    }
    
}
int main()
{
    explainPair();
    return 0;
}