/**
 * Original problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 *
 * @problem given an array prices where prices[i] is the price of a
 * given stock on the ith day. Maximize your profit by choosing a
 * single day to buy one stock and choosing a different day in the
 * future to sell that stock. Return the maximum profit you can achieve
 * from this transaction. If you cannot achieve any profit, return 0.
 *
 * @solution iterate over prices tracking the highest and lowest prices
 * and the difference between the two. The difference should only be set
 * if it's larger than it was before. The high should be reset anytime a
 * higher number is encountered. The low and high should be reset anytime
 * a lower number is encountered.
 *
 * @complexity time O(n) space O(1)
 */

function maxProfit(prices) {
  let diff = 0;
  let low = prices[0];
  let high = prices[0];

  for (const currPrice of prices) {
    if (high < currPrice) {
      high = currPrice;
    }
    if (low > currPrice) {
      low = currPrice;
      high = currPrice;
    }

    let tmpDiff = high - low;
    if (tmpDiff > diff) {
      diff = tmpDiff;
    }
  }

  return diff;
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
