public class Day01_TwoSum {
<<<<<<< HEAD
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
=======

    public static int linearSearch(int[] arr, int target) {

        for (int i = 0; i < arr.length; i++) {

>>>>>>> 2d1d80508113da431929a407150d85438cb02cfb
            if (arr[i] == target) {
                return i;
            }
        }
<<<<<<< HEAD
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {10, 25, 30, 45, 50};
        int target = 30;
        int result = linearSearch(arr, target);
=======

        return -1;
    }

    public static void main(String[] args) {

        int[] arr = {10, 25, 30, 45, 50};
        int target = 30;

        int result = linearSearch(arr, target);

>>>>>>> 2d1d80508113da431929a407150d85438cb02cfb
        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found");
        }
    }
<<<<<<< HEAD
} 
=======
}
>>>>>>> 2d1d80508113da431929a407150d85438cb02cfb
