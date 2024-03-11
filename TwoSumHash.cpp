#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

std::vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                std::cout << "First number: " << numMap[complement] << std::endl << "Complement Index: " << i;
                return {numMap[complement], i};
            }   
            numMap[nums[i]] = i;
        }
    return {};
  }

int main() {
    std::vector<int> nums = {15, 11, 2, 7};
    twoSum(nums,9);

}