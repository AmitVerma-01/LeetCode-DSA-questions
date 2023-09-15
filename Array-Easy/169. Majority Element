// brute force approach  TC-O(n^2) & SC-O(1)
int majorityElement(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j])
                cnt++;
            }
            if(cnt>nums.size()/2)
            return nums[i];
            else cnt=0;
        }
        return -1;
    }
// better approach using hashmap   TC-O(2N) & SC-O(N)
int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){   // hashing 
            mpp[nums[i]]++;
        }
        for(auto a:mpp){   fetching
            if(a.second>nums.size()/2)
            return a.first;
        }
        return -1;
    }
// optimal approach
nt majorityElement(vector<int>& nums) {
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
               el=nums[i];
               cnt=1; 
            }
            else if(nums[i]==el){
                cnt++;
            }
            else cnt--;
        }
        cnt=0;
        for(int i=0;i<nums.size();i++){  // this check ,the given array does have element occurance n/2 or not.
            if(el==nums[i])
            cnt++;
        }
        if(cnt>nums.size()/2)
        return el;
        else return -1;
    }
