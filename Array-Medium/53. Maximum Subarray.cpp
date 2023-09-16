// brute force approach,   by generating all subarray and their sum 
int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                    maxSum=max(sum,maxSum);
                }
            }
        }
        return maxSum;
    }
// better approach 
int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                    sum+=nums[j];
                    maxSum=max(sum,maxSum);
            }
        }
        return maxSum;
    }
//optimal approach using Kadan's algorithm
int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int curSum=0;
        for(int i=0;i<nums.size();i++){
            curSum+=nums[i];
            if(curSum>=0){
                maxSum=max(maxSum,curSum);
            }
            else{
                maxSum=max(maxSum,curSum);
                curSum=0;
            }
        }
        return maxSum;
    }
