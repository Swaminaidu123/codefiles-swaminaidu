#include <bits/stdc++.h>
using namespace std;
 
void primecountsieve(int n)
{
    bool prime[n + 1];int c=0;
    memset(prime, 1, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == 1)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
 
    for (int p = 2; p <= n; p++)
{
        if (prime[p])
	     c++;
}
cout<<c<<"\n";
	
}
 
int main()
{
    int n;
    cin>>n;
    primecountsieve(n);
    return 0;
}