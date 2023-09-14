// optimal 1
int missingNumber(vector<int>& nums) {
       int xor1=0,xor2=0;
       for(int i=0;i<nums.size();i++){
           xor1^=nums[i];
           xor2^=i;
       }
       xor2^=nums.size();
       return xor1^xor2;
    }
//optimal 2
int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=0;
       int sum1=(n*(n+1))/2;
       for(int i=0;i<n;i++){
           sum+=nums[i];
       }
       return sum1-sum;
    }
