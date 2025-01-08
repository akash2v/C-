#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.emplace_back(2);

    // cout<<a[1];

    vector <pair<int,int>> vec;
    vec.push_back({1,7});
    vec.emplace_back(5,2);
    vec.emplace_back(2,6);

    cout<< vec[2].first;
}