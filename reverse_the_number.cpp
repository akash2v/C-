/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA AT DATE -30-06-2021*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int num[50];
 cin>>t;
   int degit[50];
 for (int i = 0; i < t; i++)
 {
     degit[i]=0;
     cin>>num[i];
  while (num[i]>0)
  {
      degit[i]=num[i]%10;
      cout<<degit[i];
      num[i]=num[i]/10;
  }
  cout<<endl;
   }
    return 0;
}
