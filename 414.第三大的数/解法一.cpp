class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        middle = list(set(nums))
        if(len(middle)<3):
            return max(middle)
        middle.remove(max(middle))
        middle.remove(max(middle))
        return max(middle)
