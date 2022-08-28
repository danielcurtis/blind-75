/**
 * Original problem: https://leetcode.com/problems/contains-duplicate/
 *
 * @problem given an integer array nums, return true if any value appears
 * at least twice in the array, and return false if every element is distinct.
 *
 * @solution in JS it's possible to convert the array to a Set which only contains
 * unique values and then check the length of the set against the array length.
 * A language agnostic and O(1) space approach is to sort the array first (see C
 * implementation).
 *
 * @complexity time O(n) space O(n)
 */

function containsDuplicate(nums) {
  const uniqueNums = new Set(nums);
  return uniqueNums.size !== nums.length;
}

test('testcase: nums = [1, 2, 3, 1], return true', () => {
  const nums = [1, 2, 3, 1];
  expect(containsDuplicate(nums)).toEqual(true);
});

test('testcase: nums = [1,2,3,4], return false', () => {
  const nums = [7, 6, 4, 3, 1];
  expect(containsDuplicate(nums)).toEqual(false);
});

test('testcase: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2], return true', () => {
  const nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2];
  expect(containsDuplicate(nums)).toEqual(true);
});
