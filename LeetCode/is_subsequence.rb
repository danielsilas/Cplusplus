def is_subsequence(s, t)
  si = 0
  ti = 0

  while si < s.length && ti < t.length do
    if s[si] == t[ti]
      si += 1
      ti += 1
    else
      ti += 1
    end
  end

  si == s.length
end

# Input:
s = "axc"
t = "ahbgdc"
# Output: false

# Input:
s = "abc"
t = "ahbgdc"
# Output: true

puts is_subsequence(s, t)