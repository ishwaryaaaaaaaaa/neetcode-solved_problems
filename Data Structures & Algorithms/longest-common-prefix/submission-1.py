class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        n = len(strs)
        prefix_string = strs[0]
        last_string = strs[n - 1]
        j = 0
        while j < min(len(prefix_string), len(last_string)) and prefix_string[j] == last_string[j]:
            j += 1
        return prefix_string[0:j]