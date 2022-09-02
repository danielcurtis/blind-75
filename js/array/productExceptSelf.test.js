/**
 * Original problem: https://leetcode.com/problems/product-of-array-except-self/
 *
 * @problem given an integer array nums, return an array answer such that answer[i]
 * is equal to the product of all the elements of nums except nums[i]. The product
 * of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. The
 * solution must run in O(n) time without using the division operation.
 *
 * @solution
 *
 * @complexity
 */

function productExceptSelf(nums) {
  /**
   * your answer here
   */
}

test('testcase: nums = [1, 2, 3, 4], return [24, 12, 8, 6]', () => {
  const nums = [1, 2, 3, 4];
  expect(productExceptSelf(nums)).toEqual([24, 12, 8, 6]);
});

test('testcase: nums = [-1, 1, 0, -3, 3], return [0, 0, 9, 0, 0]', () => {
  const nums = [-1, 1, 0, -3, 3];
  // use JSON functions to avoid -0 vs 0 comparison
  expect(JSON.parse(JSON.stringify(productExceptSelf(nums)))).toEqual([0, 0, 9, 0, 0]);
});

test('testcase: nums = [0, 0, 0, 0], return [0, 0, 0, 0]', () => {
  const nums = [0, 0, 0, 0];
  expect(productExceptSelf(nums)).toEqual([0, 0, 0, 0]);
});
