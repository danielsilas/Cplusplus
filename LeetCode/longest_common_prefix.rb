# @param {String[]} strs
# @return {String}
def longest_common_prefix(strs)
  pref = strs[0]
  for i in 1..(strs.length - 1) do
    j = 0
    str = strs[i]
    while j < pref.length && str[j] == pref[j]
      j += 1
    end

    pref = str[0...j]
  end

  pref
end