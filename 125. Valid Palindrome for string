bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){     // to remove non alphnumeric value and convert uppercase to lowercase
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || s[i]>=48 && s[i]<=57)
              { if(s[i]>=65 && s[i]<=90)
                  s[i]=s[i]+32; 
                 ans+=s[i];
                }
        }
        int i=0,j=ans.size()-1;
        while(i<=j){
            if(ans[i]==ans[j])
            {
                i++; j--;
            }
            else return 0;
        }
        return 1;
    }

// using c++ STL
bool isPalindrome(string s){
for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric, #isalnum() is a stl to check the character is alphanumeric or not 
        while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }
    
    return true;
}
