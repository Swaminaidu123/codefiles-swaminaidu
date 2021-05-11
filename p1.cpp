include <iostream>

using namespace std;

int main()
{

  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];

      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
}
int p[n];
p[0]=0;
p[1]=a[0];
for(i=1;i<n;i++)
{
p[i]=p[i-1]+arr[i];
}
int q
cin>>q;
while(q--)
{
int l,r;
cin>>l>>r;
cout<<p[r]-p[l-1];
}
}
}
