#include<bits/stdc++.h>

using namespace std;

int a[1000001];

void seive()

{

    int m=1000001;

    int i;

    int j;

    for(i=0;i<=m;i++)

    a[i]=1;

    for(i=2;i*i<=m;i++)

    {

        for(j=i*i;j<=m;j=j+i)

        {

            if(a[j]==1)

            a[j]=i;

        }

    }

}

int main()

{

int t;

cin>>t;

seive();

while(t--)

{ 

       int n;

       cin>>n;

       map<int,int> mp;

       if(a[n]==1)

       {

       cout<<"2^0"<<'\n';

       }

       else

       {    
           if(n%2!=0)

        cout<<"2^0*"; 

       while(1)

      {

                if(a[n]==1)

                {

                mp[n]++;

                break;

                }

                mp[a[n]]++;

                n=n/a[n];


 

       } 

       

        

       for(auto it=mp.begin();it!=mp.end();it++)

       {     

          

           if(it==mp.begin())

           cout<<it->first<<"^"<<it->second;

           else

           cout<<"*"<<it->first<<"^"<<it->second;

       }

       cout<<endl;

       }

}

return 0;

}