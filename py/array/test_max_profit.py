# Original problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#
# @problem given an array prices where prices[i] is the price of a
# given stock on the ith day. Maximize your profit by choosing a
# single day to buy one stock and choosing a different day in the
# future to sell that stock. Return the maximum profit you can achieve
# from this transaction. If you cannot achieve any profit, return 0.

def max_profit(prices):
    # your answer here


def test_answer():
    # testcase: prices = [7, 1, 5, 3, 6, 4], return 5
    assert max_profit([7, 1, 5, 3, 6, 4]) == 5
    # testcase: prices = [7, 6, 4, 3, 1], return 0
    assert max_profit([7, 6, 4, 3, 1]) == 0
    # testcase: prices = [7, 2, 20, 1, 6, 4], return 18
    assert max_profit([7, 2, 20, 1, 6, 4]) == 18
