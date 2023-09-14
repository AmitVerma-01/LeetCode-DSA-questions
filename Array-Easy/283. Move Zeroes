// brute force approach time-complexity-O(2N),space-complexity-O(N)
 void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i])
            ans.push_back(nums[i]);
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        for(int i=ans.size();i<nums.size();i++){
            nums[i]=0;
        }
    }
// optimal approach time-complexity-O(N),space-complexity-O(1)
void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++) //check first zero and return its index
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }
        if(j==-1) return; // if there no zero prsent return the same array 
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;}
            }
        
    }
