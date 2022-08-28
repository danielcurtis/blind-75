# Original problem: https://leetcode.com/problems/contains-duplicate/
#
# @problem given an integer array nums, return true if any value appears
# at least twice in the array, and return false if every element is distinct.


def contains_duplicate(nums):
    # your answer here


def test_answer():
    # testcase: nums = [1, 2, 3, 1], return true
    assert contains_duplicate([1, 2, 3, 1]) == True
    # testcase: nums = [1,2,3,4], return false
    assert contains_duplicate([7, 6, 4, 3, 1]) == False
    # testcase: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2], return true
    assert contains_duplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2]) == True
