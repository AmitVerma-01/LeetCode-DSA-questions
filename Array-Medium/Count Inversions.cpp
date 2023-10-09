// brute force TC-O(n^2) SC-O(1)
long long getInversions(long long *arr, int n){
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++{
      if(arr[i]>arr[j])
        ans++;
     } 
   }
    return ans;
}
//optimal TC-O(n-logn) && SC- O(n)
#include <bits/stdc++.h> 
long long int merge(long long arr[], long long low,long long mid,long long high){
        long long temp[high];
        long long left=low,right=mid+1;
        long long i=0, cnt=0;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp[i++]=arr[left];
                left++;
            }
            else {
                temp[i++]=arr[right];
                cnt+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid){
             temp[i++]=arr[left];
             left++;
        }
        while(right<=high){
            temp[i++]=arr[right];
            right++;
        }
        
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return cnt;
        
    }
    long long int mergeSort(long long arr[],long long low,long long high){
        long long cnt=0;
        if(low>=high)
        return cnt;
        int mid=(low+high)/2;
        
        cnt+=mergeSort(arr,low,mid);
        cnt+=mergeSort(arr,mid+1,high);
        cnt+=merge(arr,low,mid,high);
        
        return cnt;
    }
long long getInversions(long long *arr, int n){
    return mergeSort(arr,0,n-1);
}
