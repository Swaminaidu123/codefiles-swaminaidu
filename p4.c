int subarraySum(int* nums, int numsSize, int k){
    int count = 0;
        for (int start = 0; start < numsSize; start++) {
            for (int end = start + 1; end <= numsSize; end++) {
                int sum = 0;
                for (int i = start; i < end; i++)
                    sum += nums[i];
                if (sum == k)
                    count++;
            }
        }
        return count;
}