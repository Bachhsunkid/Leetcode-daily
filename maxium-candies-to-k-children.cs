public class Solution {
    public int MaximumCandies(int[] candies, long k) {
        //binary search
        int left = 1, right = candies.Max();
        int maxCandiesPerChild = 0;

        while (left <= right) {
            int mid = (left + right) / 2;
            long childrenCount = 0;

            foreach (int pile in candies) {
                childrenCount += pile / mid;
            }

            if (childrenCount >= k) {
                maxCandiesPerChild = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return maxCandiesPerChild;
    }
}