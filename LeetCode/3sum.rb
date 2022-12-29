# Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

# Notice that the solution set must not contain duplicate triplets.

 

# Example 1:

# Input: nums = [-1,0,1,2,-1,-4]
# Output: [[-1,-1,2],[-1,0,1]]
# Explanation:
# nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
# nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
# nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
# The distinct triplets are [-1,0,1] and [-1,-1,2].
# Notice that the order of the output and the order of the triplets does not matter.

# @param {Integer[]} nums
# @return {Integer[][]}
def three_sum(nums)
  nums.sort!
  result = []
  for i in 0..(nums.length - 3) do
    next if i > 0 && nums[i] == nums[i - 1] # skip duplicates
    j = i + 1 # left
    k = nums.length - 1 # right
    while j < k do # two pointers
      sum = nums[i] + nums[j] + nums[k] # sum
      if sum == 0 # found
        result << [nums[i], nums[j], nums[k]] # add to result
        j += 1 # move pointers
        j += 1 while j < k && nums[j] == nums[j - 1] # skip duplicates
        k -= 1 # move pointers
        k -= 1 while j < k && nums[k] == nums[k + 1] # skip duplicates
      elsif sum < 0 # sum is too small
        j += 1 # move left pointer
      else # sum is too big
        k -= 1 # move right pointer
      end
    end
  end

  result
end
