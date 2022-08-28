/**
 * Original problem: https://leetcode.com/problems/contains-duplicate/
 *
 * @problem given an integer array nums, return true if any value appears
 * at least twice in the array, and return false if every element is distinct.
 *
 * @solution sort the array of numbers and then compare each element in the
 * against the next element in the array to see if there is a match.
 *
 * @complexity time O(n log n) space O(1)
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b) {
  int x = *((int*)a);
  int y = *((int*)b);

  return (x > y) - (x < y);
}

int contains_duplicate(int* nums, int nums_size) {
  qsort(nums, nums_size, sizeof(int), compare_ints);

  for (int i = 0; i < nums_size; i++) {
    if (nums[i] == nums[i + 1]) {
      return 1;
    }
  }

  return 0;
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
