/**
 * Original problem: https://leetcode.com/problems/product-of-array-except-self/
 *
 * @problem given an integer array nums, return an array answer such that answer[i]
 * is equal to the product of all the elements of nums except nums[i]. The product
 * of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. The
 * solution must run in O(n) time without using the division operation.
 *
 * @solution iterate over the array tracking
 *
 * @complexity time O(n) space O(1) not counting returned array
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* product_except_self(int* nums, int nums_size) {
  int* products = malloc(nums_size * sizeof(int));

  products[0] = 1;
  for (int i = 1; i < nums_size; i++) {
    products[i] = products[i - 1] * nums[i - 1];
  }

  int right = 1;
  for (int i = nums_size - 1; i >= 0; i--) {
    products[i] = products[i] * right;
    right = right * nums[i];
  }

  return products;
}

int main(void) {
  // testcase: nums = [1, 2, 3, 4], return [24, 12, 8, 6]
  int arr_one[4] = {1, 2, 3, 4};
  int* ans_one = product_except_self(arr_one, 4);
  assert(ans_one[0] == 24 && ans_one[1] == 12 && ans_one[2] == 8 && ans_one[3] == 6);
  free(ans_one);

  // testcase: nums = [-1, 1, 0, -3, 3], return [0, 0, 9, 0, 0]
  int arr_two[5] = {-1, 1, 0, -3, 3};
  int* ans_two = product_except_self(arr_two, 5);
  assert(ans_two[0] == 0 && ans_two[1] == 0 && ans_two[2] == 9 && ans_two[3] == 0 && ans_two[4] == 0);
  free(ans_two);

  // testcase: nums = [0, 0, 0, 0], return [0, 0, 0, 0]
  int arr_thr[4] = {0, 0, 0, 0};
  int* ans_thr = product_except_self(arr_thr, 4);
  assert(ans_thr[0] == 0 && ans_thr[1] == 0 && ans_thr[2] == 0 && ans_thr[3] == 0);
  free(ans_thr);

  printf("product_except_self.c success\n");

  return 0;
}
