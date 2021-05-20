#include<iostream>
#include<stack>
using namespace std;
int main()
{
	
	int n,x,max =0;
	cin>>n;
	stack<int> s;
	int count=0;
	for(int i=0;i<n;i++)
	{
		
		cin>>x;
		if(s.empty() || s.top()+x != 0 || x>0)
		{
			s.push(x);
			if(count>max)max=count;
			count=0;
		} 
		else
		{
			while(!s.empty() && s.top()+x ==0 && x<0)
			{
				count = count+2;
				s.pop();
			}
		}
	}
	cout<<max<<endl;
	return 0;
}
