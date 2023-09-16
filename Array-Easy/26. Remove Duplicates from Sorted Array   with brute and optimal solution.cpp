//brute force approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> st;
        for(int a: nums){
            st.insert(a);
        }
        int n=st.size();
        // vector<int>nums(n,0);
        int i=0;
        for(auto it:st){
            nums[i]=it; i++;
        }
        return n;
    }
};

// optimal approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=0;
        for(int i=1;i<nums.size();i++){
            if(nums[unique]!=nums[i]){
                unique++;
                nums[unique]=nums[i];
            }
        }
        return unique+1;
    }
};
