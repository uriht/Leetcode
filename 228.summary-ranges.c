/*
 * @lc app=leetcode id=228 lang=c
 *
 * [228] Summary Ranges
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **summaryRanges(int *nums, int numsSize, int *returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    char **ranges = (char **)malloc(numsSize * sizeof(char *));
    int rangeCount = 0;

    for (int i = 0; i < numsSize; i++) {
        int start = nums[i];
        int end = nums[i];

        while (i < numsSize - 1 && nums[i] + 1 == nums[i + 1]) {
            end = nums[i + 1];
            i++;
        }

        if (start == end) {
            ranges[rangeCount] = (char *)malloc(13); 
            snprintf(ranges[rangeCount], 13, "%d", start);
        } else {
            ranges[rangeCount] = (char *)malloc(25); 
            snprintf(ranges[rangeCount], 25, "%d->%d", start, end);
        }

        rangeCount++;
    }

    *returnSize = rangeCount;
    return ranges;
}
// @lc code=end

