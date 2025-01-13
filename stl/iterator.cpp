#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1,2,33,5,6,78};
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(6);

    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(++it) <<endl;

    vector<int> ::iterator it_2 = v.end();
    // vector<int> ::iterator it_3 = v.rend();
    // vector<int> ::iterator it_4 = v.rbegin();

    cout<<v[2] << " " <<v.at(2)<< endl;
    cout<<v.back()<<endl <<endl;

    // for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
    // {
    //     cout<< *(i)<<endl;
    // }

    // OR WE CAN WRITE

    // for (auto i = v.begin(); i !=v.begin(); i++)
    // {
    //     cout<<*(i)<<endl;
    // }

    for (auto i:v)
    {
        cout<<i<<endl;
    }
    
}