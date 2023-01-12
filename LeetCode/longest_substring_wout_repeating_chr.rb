def length_of_longest_substring(s)
  return 0 if s.empty?
  return 1 if s.length == 1

  # initialize
  max = 1
  i = 0
  j = 1
  while j < s.length do
    # check if s[j] is in s[i..j-1]
    if s[i..j-1].include?(s[j])
      # if so, move i to the next of the first occurrence of s[j]
      i = s[i..j-1].index(s[j]) + i + 1
    else
      # if not, update max
      max = [max, j - i + 1].max
    end
    j += 1
  end

  max
end

#  test 1
# Input:
s = "pwwkew"
# Output: 3

#  test 2
# Input:
s = "bbbbb"
# Output: 1

#  test 3
# Input:
s = "abcabcbb"
# Output: 3

puts length_of_longest_substring(s)