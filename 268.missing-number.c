/*
 * @lc app=leetcode id=268 lang=c
 *
 * [268] Missing Number
 */

// @lc code=start
int missingNumber(int* arr, int n){
    int hash[n+1];
    for(int i =0; i<= n;i++) {
        hash[i]=0;
    }
    for(int i = 0; i < n ; i++ ) {
        hash[arr[i]] = 1;
    }
    for(int i =0; i <= n;i++) {
        if(hash[i]==0) return i;
        printf("%d\n", hash[i]);
    }
    return -1;
}
// @lc code=end

