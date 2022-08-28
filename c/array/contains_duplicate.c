/**
 * Original problem: https://leetcode.com/problems/contains-duplicate/
 *
 * @problem given an integer array nums, return true if any value appears
 * at least twice in the array, and return false if every element is distinct.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int contains_duplicate(int* nums, int nums_size) {
  /**
   * your answer here
   */
}

int main(void) {
  // testcase: nums = [1, 2, 3, 1], return true
  int arr_one[4] = {1, 2, 3, 1};
  int ans_one = contains_duplicate(arr_one, 4);
  assert(ans_one == 1);

  // testcase: nums = [1,2,3,4], return false
  int arr_two[4] = {1, 2, 3, 4};
  int ans_two = contains_duplicate(arr_two, 3);
  assert(ans_two == 0);

  // testcase: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2], return true
  int arr_thr[10] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  int ans_thr = contains_duplicate(arr_thr, 10);
  assert(ans_thr == 1);

  printf("contains_duplicate.c success\n");

  return 0;
}
