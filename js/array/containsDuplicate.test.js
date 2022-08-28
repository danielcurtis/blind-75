/**
 * Original problem: https://leetcode.com/problems/contains-duplicate/
 *
 * @problem given an integer array nums, return true if any value appears
 * at least twice in the array, and return false if every element is distinct.
 */

function containsDuplicate(nums) {
  /**
   * your answer here
   */
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
