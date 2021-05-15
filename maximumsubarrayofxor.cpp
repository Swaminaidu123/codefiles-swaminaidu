int maxSubarrayXOR(int arr[], int n)
{
    int res = 0;     
 
    
    for (int i=0; i<n; i++)
    {
        int cu_xor = 0; 
 
        
        for (int j=i; j<n; j++)
        {
            cu_xor = curr_xor ^ arr[j];
            res = max(res, cu_xor);
        }
    }
    return res;

}
 
