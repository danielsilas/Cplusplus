# Definition for singly-linked list.
class ListNode
  attr_accessor :val, :next
  def initialize(val = 0, _next = nil)
    @val = val
    @next = _next
  end
end

# @param {ListNode} list1
# @param {ListNode} list2
# @return {ListNode}
def merge_two_lists(list1, list2)
  return list1 if list2.nil?
  return list2 if list1.nil?

  if list1.val.to_i < list2.val.to_i
    list1.next = merge_two_lists(list1.next, list2)
    list1
  else
    list2.next = merge_two_lists(list1, list2.next)
    list2
  end
end

# Example 1:
# Input:
list1 = [1,2,4]
list2 = [1,3,4]
# Output: [1,1,2,3,4,4]
# Example 2:

# Input:
# list1 = []
# list2 = []
# Output: []
# Example 3:

# Input:
# list1 = []
# list2 = [0]
# Output: [0]

l1 = ListNode.new(list1[0])
l1_copy = l1
(1...list1.length).each do |i|
  l1_copy.next = ListNode.new(list1[i])
  l1_copy = l1_copy.next
end

l2 = ListNode.new(list2[0])
l2_copy = l2
(1...list2.length).each do |i|
  l2_copy.next = ListNode.new(list2[i])
  l2_copy = l2_copy.next
end

l = merge_two_lists(l1, l2)

while l != nil
  puts l.val
  l = l.next
end