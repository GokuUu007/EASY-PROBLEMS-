import java.util.Scanner;

class geeksforGeeks {
    public static void convertToWave(int n, int[] a) {
        int i = 0;
        while (i < n) {
            if (i % 2 == 0 && i != n - 1) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            System.out.print(a[i] + " ");
            i++;
        }
        //2. The code given below has time
        //  complexity more than the above one. 

        // for (int i = 0; i < n; i++) {
        //     if (i % 2 == 0 && i < n - 1) {
        //         int swap = a[i];
        //         a[i] = a[i + 1];
        //         a[i + 1] = swap;
        //     }
        //     System.out.print(a[i] + " ");
        // }
    }
}

public class waveNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        geeksforGeeks.convertToWave(n, a);
    }
}