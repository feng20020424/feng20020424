#define _CRT_SECURE_NO_WARNINGS 1

int findPeakElement(int* nums, int numsLen) {
    int i = 0;
    if (numsLen < 2)
    {
        return 0;
    }
    for (i = 0; i < numsLen - 1; i++)
    {
        if (i == 0)
        {
            if (nums[i] > nums[i + 1])
            {
                return i;
            }
        }
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            break;
        }
    }
    return i;
}