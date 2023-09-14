#include<bits/stdc++.h>
int secondLargest(int n,vector<int> arr){
    int largest=0;
    int sLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(int n,vector<int>arr){
    int smallest=INT_MAX;
    int sSmallest=0;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            sSmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]!=smallest && arr[i]<sSmallest)
        sSmallest=arr[i];
    }
    return sSmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest=secondLargest(n,a);
    int sSmallest=secondSmallest(n,a);
    vector<int>ans={sLargest,sSmallest};
    return ans;
}
