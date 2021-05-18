#include <iostream>
#include<algorithm>
using namespace std;
 

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 

void reverse(int arr[], int n) {
    reverse(arr, arr + n);
}
 
int main()
{
	int n;
	cin>>n;
    	int arr[n] ;
    for(int i=0;i<n;i++)
	cin>>arr[i];
 
    reverse(arr, n);
    print(arr, n);
 
    return 0;
}