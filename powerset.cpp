#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin >> n;

while(n--)

{

set<char>str;

string s;

cin >> s;

for(char x:s)

{

str.insert(x);

}

long long int t = str.size();

long long int f = t*(t+1)/2;

cout << f << endl;

}

return 0;

}

