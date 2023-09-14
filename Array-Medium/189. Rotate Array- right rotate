//brute force approach, not work on larger array due to TLE
void rotate(vector<int>& nums, int k) {   //time complexity O(k*n)
        k=k%nums.size();
        int n=nums.size();
        while(k--){
            int temp=nums[n-1];
            for(int i=n-1;i>=1;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=temp;
        }
    }
// optimal approach using STL of c++
void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end()); 
    }
