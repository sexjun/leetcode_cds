#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
                if(nums[j] + nums[i] == target) {
                    int* retVal = malloc(sizeof(int) * 2);
                    retVal[0] = i;
                    retVal[1] = j;
                    *returnSize = 2;
                    return retVal;
                }
        }
        
    }
    *returnSize = 0;
    return NULL;
}

int main(int argc, char const *argv[])
{
    int nums[4] = {2,7,11,15};
    int target = 9;
    int length = sizeof(nums) / sizeof(nums[0]);;
    int* rtval = malloc(2);
    twoSum(nums, length, target, rtval);

    printf("%d, %d\r\n", rtval[0], rtval[1]);

    return 0;
}
