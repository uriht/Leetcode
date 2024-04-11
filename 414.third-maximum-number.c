/*
 * @lc app=leetcode id=414 lang=c
 *
 * [414] Third Maximum Number
 */

// @lc code=start
int thirdMax(int* arr, int n) {
    long long fmax = LLONG_MIN; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > fmax) {
            fmax = arr[i];
        }
    }
    //tobe deleted later
    long long smax = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > smax && arr[i] < fmax) {
            smax = arr[i];
        }
    }

    long long tmax = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > tmax && arr[i] < smax) {
            tmax = arr[i];
        }
    }

    if (tmax == LLONG_MIN) {
        return fmax;
    }
    return tmax;
}

// @lc code=end

