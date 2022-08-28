# Original problem: https://leetcode.com/problems/contains-duplicate/
#
# @problem given an integer array nums, return true if any value appears
# at least twice in the array, and return false if every element is distinct.
#
# @solution in Python it's possible to convert the array to a set which only contains
# unique values and then check the length of the set against the array length.
# A language agnostic and O(1) space approach is to sort the array first (see C
# implementation).
#
# @complexity time O(n) space O(n)

def contains_duplicate(nums):
    unique_nums = set(nums)
    return len(unique_nums) != len(nums)


def test_answer():
    # testcase: nums = [1, 2, 3, 1], return true
    assert contains_duplicate([1, 2, 3, 1]) == True
    # testcase: nums = [1,2,3,4], return false
    assert contains_duplicate([7, 6, 4, 3, 1]) == False
    # testcase: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2], return true
    assert contains_duplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2]) == True
