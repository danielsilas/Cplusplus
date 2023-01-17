# @param {Integer[]} prices
# @return {Integer}
def max_profit(prices)
  buy = prices[0]
  profit = 0

  (1...prices.length).each do |i|
    if prices[i] < buy
      buy = prices[i]
    elsif prices[i] - buy > profit
      profit = prices[i] - buy
    end
  end

  profit
end

# test 1
# Input:
prices = [7,1,5,3,6,4]
# Output: 5
# Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
# Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

puts max_profit(prices)