import java.util.*;

public class Day02_MedianOfTwoSortedArrays {

    static class Solution {
        public double findMedianSortedArrays(int[] nums1, int[] nums2) {

            int m = nums1.length;
            int n = nums2.length;

            int[] arr = new int[m + n];
            int i = 0;
            int j = 0;
            int k = 0;

            while (i < m && j < n) {

                if (nums1[i] < nums2[j]) {
                    arr[k] = nums1[i];
                    i++;
                } else {
                    arr[k] = nums2[j];
                    j++;
                }

                k++;
            }
            while (i < m) {
                arr[k] = nums1[i];
                i++;
                k++;
            }
            while (j < n) {
                arr[k] = nums2[j];
                j++;
                k++;
            }
            int total = m + n;
            if (total % 2 != 0) {
                return arr[total / 2];
            }
            else {
                return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
            }
        }
    }
    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums1 = {1, 3};
        int[] nums2 = {2};
        
        double result = solution.findMedianSortedArrays(nums1, nums2);
        System.out.println("Median = " + result);
    }
}