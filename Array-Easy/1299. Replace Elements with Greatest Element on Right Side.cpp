ector<int> replaceElements(vector<int>& arr) {
        int sum=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int s=arr[i];
            arr[i]=sum;
            sum=max(sum,s);
        }
        return arr;
    }
