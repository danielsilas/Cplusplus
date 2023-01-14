# Definition for singly-linked list.
class ListNode
    attr_accessor :val, :next
    def initialize(val = 0, _next = nil)
        @val = val
        @next = _next
    end
end
# @param {ListNode} head
# @return {ListNode}
def reverse_list(head)
  prev = ListNode.new
  while head != nil
    aux = head.next
    head.next = prev
    prev = head
    head = aux
  end
  prev
end

list = [1,3,4,2,3,3,52,1,0]

l = ListNode.new(list[0])
l_copy = l
(1...list.length).each do |i|
  l_copy.next = ListNode.new(list[i])
  l_copy = l_copy.next
end

l = reverse_list(l)

while l != nil
  puts l.val
  l = l.next
end