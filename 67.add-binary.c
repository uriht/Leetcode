/*
 * @lc app=leetcode id=67 lang=c
 *
 * [67] Add Binary
 */

// @lc code=start
char *addBinary(char *a, char *b)
{
    int lenA = strlen(a);
    int lenB = strlen(b);
    int max_size = lenA > lenB ? lenA : lenB;

    char *result = (char *)malloc((max_size + 2) * sizeof(char)); // +2 for potential carry and null terminator
    result[max_size + 1] = '\0';                                  // Null-terminate the result string

    int carry = 0;
    int indexA = lenA - 1;
    67.add - binary.c int indexB = lenB - 1;
    int resultIndex = max_size;

    while (indexA >= 0 || indexB >= 0 || carry)
    {
        int sum = carry;

        if (indexA >= 0)
        {
            sum += a[indexA] - '0';
            indexA--;
        }

        if (indexB >= 0)
        {
            sum += b[indexB] - '0';
            indexB--;
        }

        carry = sum / 2;
        result[resultIndex] = (sum % 2) + '0';

        resultIndex--;
    }

    return result + resultIndex + 1; // Return the address of the start of the result string
}

// @lc code=end

