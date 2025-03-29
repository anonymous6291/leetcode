class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        i = len(nums1) - 1
        j = len(nums2) - 1
        md = 0
        while i >= 0:
            while i <= j and nums1[i] > nums2[j]:
                j -= 1
            if j - i > md:
                md = j - i
            i -= 1
        return md
