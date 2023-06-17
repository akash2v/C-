/*THIS PROGRAM IS CODED BY AKASH AT 17-06-2021*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
   cin>>a>>b;
    if((a+.50<=b) && a%5==0)
{
    float rb=b-a-(0.5);
    cout<<rb<<endl;
}
else{
    cout<<b<<endl;
}
return 0;
}
