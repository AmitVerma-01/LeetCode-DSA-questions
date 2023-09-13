 bool isPalindrome(int x) {
        if(x<0) return 0;
        int rev=0;
        int temp=x;
        while(x!=0){
            if(rev>INT_MAX/10 || (rev==INT_MAX && x%10>7)) //this line ensure that the revNumber does not overflow
            return 0;
            rev=rev*10+(x%10);
            x/=10;
        }
        if(temp==rev)
        return 1;
        else return 0;
    }
