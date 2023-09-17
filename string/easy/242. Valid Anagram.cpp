// 1st
bool isAnagram(string s, string t) {
unordered_map<char,int>mp;
        for(auto x:s)
        mp[x]++;
        for(auto x:t)
        mp[x]--;
        for(auto x:mp)
        if(x.second!=0)
        return 0;
        return 1;
    }
// 2nd 
bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;mp2[t[i]]++;
        }
        for (auto it:mp1){
            char key=it.first;
            if(mp2.find(key)==mp2.end()|| mp2[key]!=it.second)
            return false;
        }
        return true;
}
