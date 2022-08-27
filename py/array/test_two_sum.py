# Original problem: https://leetcode.com/problems/two-sum/
#
# @problem given an array of integers nums and an integer target,
# return indices of the two numbers such that they add up to target.
# you may assume that each input would have exactly one solution,
# and you may not use the same element twice. You can return the
# answer in any order.
#
# @solution iterate over nums once storing seen integers and their
# index in a map. Use the remainder from the target minus the current
# int as a key in the map to retrieve the index of the other int if
# it exists.
#
# @complexity time O(n) space O(n)

def two_sum(nums, target):
    # your solution goes here


def test_answer():
    # testcase: nums = [2, 7, 11, 15], target = 9, ans = [0, 1]
    assert two_sum([2, 7, 11, 15], 9) == [0, 1]
    # testcase: nums = [3, 2, 4], target = 6, ans = [1, 2]
    assert two_sum([3, 2, 4], 6) == [1, 2]
    # testcase: nums = [3, 3], target = 6, ans = [0, 1]
    assert two_sum([3, 3], 6) == [0, 1]
