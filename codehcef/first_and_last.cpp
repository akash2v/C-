/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA ON DATE-30-06-2021*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int degit[100];
    int sum[100];
    int num_akash[100];
    int num[100];
cin>>t;
for(int i = 0; i < t; i++)
{
    cin>>num[i];
    degit[i]=0;
    num_akash[i]=num[i];

    while (num[i]>0)
    {
        degit[i]=num[i]%10;
        num[i]=num[i]/10;
        if(num[i]/10==0 && num[i]%10==0){
            sum[i]=num_akash[i]%10+degit[i];
            cout<<sum[i]<<endl;
            break;
        }

            }

}
    return 0;
}
