# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
  hash = {}
  nums.each_with_index do |num, i|
    return [hash[target - num], i] if hash[target - num]
    hash[num] = i
  end
  []
end

# Input:
nums = [2,7,11,15]
target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

nums = [3,2,4]
target = 6

puts two_sum(nums, target)