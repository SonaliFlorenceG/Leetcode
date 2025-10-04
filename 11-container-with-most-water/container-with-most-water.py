class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        max_area = -1
        n = len(height)
        left = 0
        right = n - 1
        while left < right:
            area = min(height[right], height[left]) * (right - left)
            if height[right] < height[left]:
                right -=1
            else:
                left +=1
            if area > max_area:
                max_area = area
        return max_area

        