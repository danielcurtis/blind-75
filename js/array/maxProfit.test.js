/**
 * Original problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 *
 * @problem given an array prices where prices[i] is the price of a
 * given stock on the ith day. Maximize your profit by choosing a
 * single day to buy one stock and choosing a different day in the
 * future to sell that stock. Return the maximum profit you can achieve
 * from this transaction. If you cannot achieve any profit, return 0.
 */

function maxProfit(prices) {
  /**
   * your answer here
   */
}

test('testcase: prices = [7, 1, 5, 3, 6, 4], return 5', () => {
  const prices = [7, 1, 5, 3, 6, 4];
  expect(maxProfit(prices)).toEqual(5);
});

test('testcase: prices = [7, 6, 4, 3, 1], return 0', () => {
  const prices = [7, 6, 4, 3, 1];
  expect(maxProfit(prices)).toEqual(0);
});

test('testcase: prices = [7, 2, 20, 1, 6, 4], return 18', () => {
  const prices = [7, 2, 20, 1, 6, 4];
  expect(maxProfit(prices)).toEqual(18);
});
