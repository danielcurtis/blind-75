/**
 * Original problem: https://leetcode.com/problems/two-sum/
 *
 * @problem given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 * you may assume that each input would have exactly one solution,
 * and you may not use the same element twice. You can return the
 * answer in any order.
 *
 * @solution iterate over nums once storing seen integers and their
 * index in a map. Use the remainder from the target minus the current
 * int as a key in the map to retrieve the index of the other int if
 * it exists.
 *
 * @complexity time O(n^2) space O(1)
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* nums, int nums_size, int target) {
  // @todo update to use hash table
  int* indices = malloc(2 * sizeof(int));

  for (int i = 0; i < nums_size; i++) {
    for (int j = i + 1; j < nums_size; j++) {
      if (nums[i] + nums[j] == target) {
        indices[0] = i;
        indices[1] = j;
        return indices;
      }
    }
  }

  indices[0] = -1;
  indices[1] = -1;
  return indices;
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
