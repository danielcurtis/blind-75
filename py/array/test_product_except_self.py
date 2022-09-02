# Original problem: https://leetcode.com/problems/product-of-array-except-self/
#
# @problem given an integer array nums, return an array answer such that answer[i]
# is equal to the product of all the elements of nums except nums[i]. The product
# of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. The
# solution must run in O(n) time without using the division operation.
#
# @solution
#
# @complexity

def product_except_self(nums):
    # your answer here


def test_answer():
    # testcase: nums = [1, 2, 3, 4], return [24, 12, 8, 6]
    assert product_except_self([1, 2, 3, 4]) == [24, 12, 8, 6]
    # testcase: nums = [-1, 1, 0, -3, 3], return [0, 0, 9, 0, 0]
    assert product_except_self([-1, 1, 0, -3, 3]) == [0, 0, 9, 0, 0]
    # testcase: nums = [0, 0, 0, 0], return [0, 0, 0, 0]
    assert product_except_self([0, 0, 0, 0]) == [0, 0, 0, 0]
