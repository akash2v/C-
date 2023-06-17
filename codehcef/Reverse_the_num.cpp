/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA ON DATE-02-07-2021*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
      long int n, reverse=0, rem;
      cin>>n;
      while(n!=0)
      {
         rem=n%10;
         reverse=reverse*10+rem;
         n/=10;
      }
      cout<<reverse<<endl;
    }
	return 0;
}