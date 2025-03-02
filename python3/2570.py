class Solution:
    def mergeArrays(
        self, nums1: List[List[int]], nums2: List[List[int]]
    ) -> List[List[int]]:
        n1 = len(nums1)
        n2 = len(nums2)
        res = []
        i = 0
        j = 0
        while i < n1 or j < n2:
            if i == n1 or (j < n2 and nums1[i][0] > nums2[j][0]):
                res.append(nums2[j])
                j += 1
            elif j == n2 or nums1[i][0] < nums2[j][0]:
                res.append(nums1[i])
                i += 1
            else:
                nums1[i][1] += nums2[j][1]
                res.append(nums1[i])
                i += 1
                j += 1
        return res
