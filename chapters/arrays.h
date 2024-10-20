//
// Created by comme on 20.10.2024.
//

#ifndef ZERO_TO_MASTERY_ALGO_COURSE_ARRAYS_H
#define ZERO_TO_MASTERY_ALGO_COURSE_ARRAYS_H

#include <vector>
#include <unordered_set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
  std::unordered_map<int, int> found;

  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (found.count(complement) > 0) {
      return {i, found[complement]};
    }
    found[nums[i]] = i;

  }

  return {};
}

int maxSubArray(const std::vector<int>& nums) {
  int max_so_far = INT_MIN;
  int current_max = 0;

  for (int num: nums) {
    current_max = std::max(num, current_max + num);
    max_so_far = std::max(max_so_far, current_max);
  }

  return max_so_far;
}

void moveZeroes(std::vector<int>& nums) {
  if (nums.size() <= 1)
    return;
  int last_not_zero = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) {
      std::swap(nums[last_not_zero], nums[i]);
      last_not_zero++;
    }
  }
}

bool containsDuplicate(std::vector<int>& nums) {
  std::unordered_set<int> uset;

  for (auto num: nums) {
    if (!uset.insert(num).second){
      return true;
    }

  }
  return false;
}

void rotateArray(std::vector<int>& nums, int k) {

  int n = (int)nums.size();

  k = k % n;
  k = n - k;

  std::reverse(nums.begin() + k, nums.end());
  std::reverse(nums.begin(), nums.begin() + k);
  std::reverse(nums.begin(), nums.end());
}

std::string longest_word(std::string sen) {

  auto longest_word_start = sen.begin();
  int max = 0;

  for (auto it = sen.begin(); it != sen.end(); it++) {
    if (!ispunct(*it) && *it != ' ') {
      int current_max = 0;
      for (auto curr_it = it; curr_it != sen.end(); curr_it++) {
        if (!ispunct(*curr_it) && *curr_it != ' ') {
          current_max++;
        } else {
          break;
        }
      }
      if (current_max > max) {
        longest_word_start = it;
        max = current_max;
      }
    }
  }

  // code goes here
  return {longest_word_start, longest_word_start + max};
}


#endif //ZERO_TO_MASTERY_ALGO_COURSE_ARRAYS_H
