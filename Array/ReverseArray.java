import java.util.Arrays;
import java.util.Scanner;

public class ReverseArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int start = arr[0];
        int end = arr.length -1;
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        // for (int i = 0; i < n; i++) {
            while (start <= end) {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        // }
        System.out.print(Arrays.toString(arr));

        sc.close();
    }
}