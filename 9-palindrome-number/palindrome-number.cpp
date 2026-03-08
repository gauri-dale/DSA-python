class Solution {
public:
    bool isPalindrome(int x) {

       if(x<0) return false;

        int num = x;
        long long newNum = 0;
        while(num > 0){
            int ld = num % 10;
            newNum = (newNum * 10)+ ld;
            num = num / 10;
        }

    return newNum == x;
    }
};
