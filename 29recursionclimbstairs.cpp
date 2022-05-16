class Solution {
public:
    int climbStairs(int n) {
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        return climbStairs(n-1)+climbStairs(n-2);
    }
};

// 1.fibbonacci
// 2.say digit
// 3.reverse string using recursion
// 4.check palindrome
// 5.power a,b
// 6.bubble sort
// 7.selection sort
// 8.insertion sort