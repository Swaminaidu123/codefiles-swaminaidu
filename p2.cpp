include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,c=1;
      cin>>n;
      int arr[n];
        for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
}
int p[n];
p[1]=arr[1];
for(i=2;i<n;i++)
{
	    if(arr[i]!=-1)
          {
              p[i]=p[i-1]+arr[i];
              c++;
              
          }
          else
          {
             a[i]=p[i-1]/c;
		c++;

          }
          
      }
      for(int i=1;i<=n;i++)
           cout<<arr[i]<<" ";
  }

    return 0;
}