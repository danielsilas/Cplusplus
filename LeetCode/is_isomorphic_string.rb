# @param {String} s
# @param {String} t
# @return {Boolean}

# All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
def is_isomorphic(s, t)
    return false if s.length != t.length

    map = {}
    t.each_char.with_index do |char, i|
        if map[s[i]]
            return false if map[s[i]] != char

        else
            return false if map.values.include?(char)

            map[s[i]] = char
        end
    end
    true
end


# Example 1:

# Input:
s = "egg"
t = "add"
# Output: true

# Example 2:

# Input:
s = "foo"
t = "bar"
# Output: false

# Example 3:

# Input:
s = "paper"
t = "title"
# Output: true

puts is_isomorphic(s, t)