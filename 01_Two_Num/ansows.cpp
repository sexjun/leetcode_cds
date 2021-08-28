#include <vector>
#include <stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++){
                if(target == nums[i] + nums[j]) {
                    vector<int> reval;
                    reval[0] = i;
                    reval[1] = j;
                    return reval;
                }
            }
        }
        return {0}; 
    }
};

class Solution_2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for(int i = 0; i < nums.size(); i++) {
            auto value = hashtable.find(target - nums[i]);
            if(value != hashtable.end()) {
                return {value->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {0}; 
    }
};


int main(int argc, char* argv[])
{
    // Solution A;
    // vector<int> data = {2,7,11,15};
    // vector<int> target = A.twoSum(data, 9);
    // for(int i : target) {
    //     cout << i << " ";
    // }

    Solution_2 B;
    vector<int> data = {2,7,11,15};
    vector<int> target = B.twoSum(data, 9);
    for(int i : target) {
        cout << i << " ";
    }
}