
#include <iostream>
#include <vector>
#include <unordered_map>

#include "pretty_print.h"
#include "chapters/arrays.h"

using namespace std;


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
