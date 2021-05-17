#include<iostream>
using namespace std;
int main()
{
	int t,n;
	const unsigned int m=1000000007;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		cin>>n;
		unsigned long long f=1;
		if(n==0)
		{
		    cout<<1;
		}
			else
			{
				for(int j=1;j<=n;j++)
				{

				 f=f*j;
				}
			

			}
			cout<<f%m<<" "<<"\n";
			}
			return 0;
}