#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	float b;
	cin>>a>>b;
	if(a%5==0 && a<=b-.50)
	{
		b=float(b)-float(a);
		b=b-0.50;
	}
	cout<<fixed<<setprecision(2)<<b<<endl;
	return 0;
}