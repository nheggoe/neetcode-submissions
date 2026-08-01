class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        dp = {}
        amount = 0


        def recur(day: int, can_buy: bool) -> int:
            if day >= len(prices):
                return 0

            key = (day, can_buy)
            if key in dp:
                return dp[key]

            do_nothing = recur(day + 1, can_buy)

            if can_buy:
                do_something = recur(day + 1, False) - prices[day]
            else:
                do_something = recur(day + 2, True) + prices[day]
            dp[key] = max(do_nothing, do_something)
            return dp[key]
        
        return recur(0, True)
