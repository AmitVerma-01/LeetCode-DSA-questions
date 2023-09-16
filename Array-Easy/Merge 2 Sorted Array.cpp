//brute force approach  TC-O(2(n+m)) , SC-O(n+m)
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int> st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }
    vector<int> unionArr(st.size(),0);
    int i=0;
    for(auto it: st){
        unionArr[i]=it;
        i++;
    }
    return unionArr;
}
// optimal approach  TC-O(n+m) 
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    vector<int> unionArr;
    while(i < n && j < m){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back()!=a[i])
            unionArr.push_back(a[i]);
            i++;
        }
        else {
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i < n){
        if(unionArr.back()!=a[i])
        unionArr.push_back(a[i]);
        i++;
    }
    while(j < m){
        if(unionArr.back()!=b[j]){
        unionArr.push_back(b[j]);
        }
        j++;
    }
    return unionArr;
}
