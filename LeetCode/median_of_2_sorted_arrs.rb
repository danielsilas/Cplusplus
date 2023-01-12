# @param {Integer[]} nums1
# @param {Integer[]} nums2
# @return {Float}
def find_median_sorted_arrays(nums1, nums2)
  nums = (nums1 + nums2).sort
  if nums.length % 2 == 0
    (nums[nums.length / 2 - 1] + nums[nums.length / 2]) / 2.0
  else
    nums[nums.length / 2]
  end
end

#  test 1
# Input:
nums1 = [1, 3]
nums2 = [2]
# Output: 2.00000
# Explanation: merged array = [1,2,3] and median is 2.

#  test 2
# Input:
nums1 = [1, 2]
nums2 = [3, 4]
# Output: 2.50000
# Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

#  test 3
# Input:
nums1 = [0, 0]
nums2 = [0, 0]
# Output: 0.00000

puts find_median_sorted_arrays(nums1, nums2)
