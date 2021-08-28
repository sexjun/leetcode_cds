# -*- coding: UTF-8 -*-
from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        for i in range(n):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    return [i, j]

        return []

# 使用hashtable来进行


class Solution_2:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      hashtable = dict()
       for i, data in enumerate(nums):
            if target - data in hashtable:
                return [hashtable[target - data], i]
            hashtable[nums[i]] = i
        return []


def main():
    a = Solution()
    b = a.twoSum([1, 2, 3, 4, 5], 3)
    for i in b:
        print(i)


if __name__ == '__main__':
    main()
