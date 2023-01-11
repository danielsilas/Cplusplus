# Definition for singly-linked list.
class ListNode
    attr_accessor :val, :next
    def initialize(val = 0, _next = nil)
        @val = val
        @next = _next
    end
end
# @param {ListNode} l1
# @param {ListNode} l2
# @return {ListNode}

def add_two_numbers(l1, l2)
  l3 = []
  i = 0
  j = 0


  while l1 != nil || l2 != nil
    digit_sum = l3[i].to_i + l1.val + l2.val
    l3[i] = digit_sum % 10
    l3 << digit_sum / 10 if digit_sum / 10 > 0
    l1 = l1.next
    l2 = l2.next
    i += 1

    if l1 == nil && l2 != nil
      l1 = ListNode.new(0)
    elsif l2 == nil && l1 != nil
      l2 = ListNode.new(0)
    end
  end

  l3
end

# test 1
aux_l1 = [9,9,9,9,9,9,9]
aux_l2 = [9,9,9,9]

# test 2
aux_l1 = [2,4,3]
aux_l2 = [5,6,4]

# test 3
aux_l1 = [0]
aux_l2 = [0]




l1 = ListNode.new(aux_l1[0])
l1_copy = l1
(1...aux_l1.length).each do |i|
  l1_copy.next = ListNode.new(aux_l1[i])
  l1_copy = l1_copy.next
end

l2 = ListNode.new(aux_l2[0])
l2_copy = l2
(1...aux_l2.length).each do |i|
  l2_copy.next = ListNode.new(aux_l2[i])
  l2_copy = l2_copy.next
end

puts add_two_numbers(l1, l2).inspect
