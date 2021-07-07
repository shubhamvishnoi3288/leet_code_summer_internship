class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        l, r = 0, min([len(s) for s in strs])+1
        sol = 0
        while l < r:
            m = (r+l)//2
            valid = True
            for s in strs[1::]:
                if s[:m+1] == strs[0][:m+1]: continue
                valid = False
            if valid: l, sol = m+1, m
            else: r = m
        return strs[0][:l]