// 1st
vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]>0)
            pos.push_back(nums[i]);
            else 
            neg.push_back(nums[i]);
        }
        for(int i=0,j=0;i<pos.size();i++){
            nums[j]=pos[i];
            j+=2;
        }
        for(int i=0,j=1;i<neg.size();i++){
            nums[j]=neg[i];
            j+=2;
        }
        return nums;
    }
// 2nd 
vector<int> rearrangeArray(vector<int>& nums) {
          int n=nums.size();
   vector<int> b(n,0);
   int posIndex=0, negIndex=1;
    for(int i=0;i<n;i++){
      if (nums[i] > 0) {
        b[posIndex] = nums[i];
        posIndex+=2;
      } else {
        b[negIndex] = nums[i];
        negIndex += 2;
      }
    }
    return b;
    }
