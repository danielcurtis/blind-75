/**
 * Original problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 *
 * @problem given an array prices where prices[i] is the price of a
 * given stock on the ith day. Maximize your profit by choosing a
 * single day to buy one stock and choosing a different day in the
 * future to sell that stock. Return the maximum profit you can achieve
 * from this transaction. If you cannot achieve any profit, return 0.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int max_profit(int* prices, int prices_size) {
  /**
   * your answer here
   */
}

int main(void) {
  // testcase: prices = [7, 1, 5, 3, 6, 4], return 5
  int arr_one[6] = {7, 1, 5, 3, 6, 4};
  int ans_one = max_profit(arr_one, 6);
  assert(ans_one == 5);

  // testcase: prices = [7, 6, 4, 3, 1], return 0
  int arr_two[6] = {7, 6, 4, 3, 1};
  int ans_two = max_profit(arr_two, 5);
  assert(ans_two == 0);

  // testcase: prices = [7, 2, 20, 1, 6, 4], return 18
  int arr_thr[6] = {7, 2, 20, 1, 6, 4};
  int ans_thr = max_profit(arr_thr, 6);
  assert(ans_thr == 18);

  printf("max_profit.c success\n");

  return 0;
}
