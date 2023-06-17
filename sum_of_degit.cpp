/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA AT DATE-29-06-2021*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100];
    int sum;
    int count;
    for (int i=0; i<n; i++)
    {
        sum=0;
        count=0;
     cin>>a[i];
    while (a[i]>0)
    {   
        count=a[i]%10;
        sum=sum+count;
        a[i]=a[i]/10;
    }
    cout<<sum<<endl;
    }
    return 0;

}
