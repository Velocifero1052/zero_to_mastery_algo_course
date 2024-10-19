#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <algorithm>
#include <cctype>

#include "pretty_print.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> found;

  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (found.count(complement) > 0) {
      return {i, found[complement]};
    }
    found[nums[i]] = i;

  }

  return {};
}

int maxSubArray(const vector<int>& nums) {
  int max_so_far = INT_MIN;
  int current_max = 0;

  for (int num: nums) {
    current_max = max(num, current_max + num);
    max_so_far = max(max_so_far, current_max);
  }

  return max_so_far;
}

void moveZeroes(vector<int>& nums) {
  if (nums.size() <= 1)
    return;
  int last_not_zero = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) {
      swap(nums[last_not_zero], nums[i]);
      last_not_zero++;
    }
  }
}

bool containsDuplicate(vector<int>& nums) {
  unordered_set<int> uset;

  for (auto num: nums) {
    if (!uset.insert(num).second){
      return true;
    }

  }
  return false;
}

void rotateArray(vector<int>& nums, int k) {

  int n = (int)nums.size();

  k = k % n;
  k = n - k;

  reverse(nums.begin() + k, nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin(), nums.end());
}

string longest_word(string sen) {

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


int main() {

  cout << "################################################################" << endl;
  cout << "###########################Arrays###############################" << endl;
  cout << "################################################################" << endl;

  cout << "1. Two sum" << std::endl;
  vector<int> twoSumInput{1,2,3};
  cout << "Input: " << twoSumInput << endl;
  cout << "Output: " << twoSum(twoSumInput, 3) << std::endl;
  cout << "------------------------------------------" << endl;

  cout << "2. Max sub array" << endl;
  vector<int> maxSubArrayInput{-2,1,-3,4,-1,2,1,-5,4};
  cout << "Input: " << maxSubArrayInput << endl;
  cout << "Output: " << maxSubArray(maxSubArrayInput) << endl;
  cout << "------------------------------------------" << endl;

  cout << "3. Move zeroes" << endl;
  vector<int> moveZerosInput{1,0,0,3,12};
  cout << "Input: " << moveZerosInput << endl;
  moveZeroes(moveZerosInput);
  cout << "Output: " << moveZerosInput << endl;
  cout << "------------------------------------------" << endl;

  cout << "4. Contains duplicates" << endl;
  vector<int> containsDuplicatesInput{1,2,3,1};
  cout << "Input: " << containsDuplicatesInput << endl;
  cout << "Output: " << containsDuplicate(containsDuplicatesInput) << endl;
  cout << "------------------------------------------" << endl;

  cout << "5. Rotate array" << endl;
  vector<int> rotateArrayInput{1,2,3,4,5,6,7};
  cout << "Input: " << rotateArrayInput << endl;
  rotateArray(rotateArrayInput, 3);
  cout << "Output: " << rotateArrayInput << endl;
  cout << "------------------------------------------" << endl;

  cout << "6. Longest word" << endl;
  string longestWordInput = "Hello, my friend";
  cout << "Input: '" << longestWordInput << "'" << endl;
  cout << "Output: '" << longest_word(longestWordInput) << "'" << endl;
  cout << "------------------------------------------" << endl;

  cout << "################################################################" << endl;
  cout << "###########################Hash Tables##########################" << endl;
  cout << "################################################################" << endl;


  return 0;
}
