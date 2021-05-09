class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s1 = s.split(' ')
        if(len(pattern)!= len(s1)):
            return False;
        if(len(set(zip(list(pattern),s1))) == len(set(s1))==len(set(pattern))):
            return True;
        else:
            return False
