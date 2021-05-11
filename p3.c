int findUnsortedSubarray(int* nums, int numsSize){
int s = 0, e = numsSize-1, i, max, min;  
  if(numsSize > 1){
      
  for (s = 0; s < numsSize-1; s++)
  {
    if (nums[s] > nums[s+1])
      break;
  }
      
  for(e = numsSize - 1; e > 0; e--)
  {
    if(nums[e] < nums[e-1])
      break;
  }
  
      
  max = nums[s]; min = nums[s];
  for(i = s + 1; i <= e; i++)
  {
    if(nums[i] > max)
      max = nums[i];
    if(nums[i] < min)
      min = nums[i];
  }
  
  for( i = 0; i < s; i++)
  {
    if(nums[i] > min)
    { 
      s = i;
      break;
    }     
  }
  
  for( i = numsSize -1; i >= e+1; i--)
  {
    if(nums[i] < max)
    {
      e = i;
      break;
    }
  } 
      int result = e-s+1;
    return (result > 0)? result : 0;
  }else{
      return 0;
  }
}