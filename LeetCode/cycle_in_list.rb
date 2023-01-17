# Definition for singly-linked list.
class ListNode
    attr_accessor :val, :next, :pos
    def initialize(_val, _next = nil, _pos = 0)
        @val = _val
        @next = _next
        @pos = _pos
    end

    def to_s
      "#{val} at #{pos}"
    end
end

# @param {ListNode} head
# @return {ListNode}
def detectCycle(head)
  return nil if head.nil? || head.next.nil?
  slow = head
  fast = head
  pos = 0
  while fast != nil && fast.next != nil
    slow = slow.next
    fast = fast.next.next
    if slow == fast
      slow = head
      while slow != fast
        slow = slow.next
        pos += 1;
        slow.pos = pos
        fast = fast.next
      end
      return slow
    end
  end
  nil
end

# l4 = ListNode.new(-4)
# l3 = ListNode.new(0, l4)
# l2 = ListNode.new(2, l3)
# head = ListNode.new(3, l2)
# l4.next = l2

l2 = ListNode.new(2)
head = ListNode.new(1, l2)
l2.next = head

puts detectCycle(head)