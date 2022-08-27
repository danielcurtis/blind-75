/**
 * Original problem: https://leetcode.com/problems/two-sum/
 *
 * @problem given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 * you may assume that each input would have exactly one solution,
 * and you may not use the same element twice. You can return the
 * answer in any order.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* nums, int nums_size, int target) {
  /**
   * your solution goes here
   */
}

int main(void) {
  // testcase: nums = [2, 7, 11, 15], target = 9, ans = [0, 1]
  int arr_one[4] = {2, 7, 11, 15};
  int* ans_one = two_sum(arr_one, 4, 9);
  assert(ans_one[0] == 0 && ans_one[1] == 1);
  free(ans_one);

  // testcase: nums = [3, 2, 4], target = 6, ans = [1, 2]
  int arr_two[3] = {3, 2, 4};
  int* ans_two = two_sum(arr_two, 3, 6);
  assert(ans_two[0] == 1 && ans_two[1] == 2);
  free(ans_two);

  // testcase: nums = [3, 3], target = 6, ans = [0, 1]
  int arr_thr[4] = {3, 3};
  int* ans_thr = two_sum(arr_thr, 2, 6);
  assert(ans_thr[0] == 0 && ans_thr[1] == 1);
  free(ans_thr);

  printf("two_sum.c success\n");

  return 0;
}
