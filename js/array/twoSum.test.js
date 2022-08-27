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
 * @complexity time O(n) space O(n)
 */

function twoSum(nums, target) {
  /**
   * your solution goes here
   */
}

test('testcase: nums = [2, 7, 11, 15], target = 9, ans = [0, 1]', () => {
  const nums = [2, 7, 11, 15];
  const target = 9;

  expect(twoSum(nums, target)).toEqual([0, 1]);
});

test('testcase: nums = [3, 2, 4], target = 6, ans = [1, 2]', () => {
  const nums = [3, 2, 4];
  const target = 6;

  expect(twoSum(nums, target)).toEqual([1, 2]);
});

test('testcase: nums = [3, 3], target = 6, ans = [0, 1]', () => {
  const nums = [3, 3];
  const target = 6;

  expect(twoSum(nums, target)).toEqual([0, 1]);
});
