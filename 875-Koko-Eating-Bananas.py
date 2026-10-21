class Solution:
    def check(self, k, n):
        ans = 0
        for i in n:
            ans = ans + math.ceil(i / k)
        return ans

    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        l = 1
        r = max(piles)
        ans = r
        while l <= r:
            mid = l + (r - l)//2
            k = self.check(mid, piles)
            if k <= h:
                ans = min(ans, mid)
                r = mid-1
            else:
                l = mid+1
        return ans

