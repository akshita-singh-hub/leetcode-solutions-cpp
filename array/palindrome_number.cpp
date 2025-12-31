class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        int digit;
        long long rev=0;
        bool ispal=true;
        while(x>0){
            digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(num!=rev){
            ispal=false;
        }
        return ispal;
    }
};
