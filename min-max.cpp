#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMin(int a[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
        // if (a[i] < min)
        // {
        //     min = a[i];
        // }
    }
    return mini;
};
int getMax(int a[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        // if (a[i] > max)
        // {
        //     max = a[i];
        // }
    }
    return maxi;
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << " Min of the array "<< getMin(a, n) << endl;
    cout << "max of the array "<<getMax(a, n) << endl;
    return 0;
}
