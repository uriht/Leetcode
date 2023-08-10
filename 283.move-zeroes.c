/*
 * @lc app=leetcode id=283 lang=c
 *
 * [283] Move Zeroes
 */

// @lc code=start
void moveZeroes(int* arr, int n){
    int zp = 0;
    for(int i=0 ; i< n;i++){
        if(arr[i] != 0 ){
            int temp = arr[zp];
            arr[zp] = arr[i];
            arr[i] = temp;
            zp++;
        }
    }
}
// @lc code=end

