//Better approach solution
int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        for(int a : nums)
        mpp[a]++;
        for(auto a:mpp){
            if(a.second==1)
            return a.first;
        }
        return -1;
    }
// optimal approach
int singleNumber(vector<int>& nums) {
        int xor=0;
      for(int a:nums)
          xor^=a;
      return xor;
    }
