import java.util.Scanner;

class Starrt {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int tc = 0;
        if (sc.hasNextInt())
            tc = sc.nextInt();

        long[] a = new long[60];
        a[0] = 0;
        a[1] = 1;
        long x = 2;
        int i = 1;
        while (x++ < 60) {
            i++;
            long x1 = a[i - 1] + a[i - 2];
            a[i] = Character.getNumericValue(String.valueOf(x1).charAt(String.valueOf(x1).length() - 1));
        }

        while (tc-- != 0) {

            int n = sc.nextInt();
            int x1 = (int) (Math.log(n) / Math.log(2));
            System.out.println(a[((int) Math.pow(2, x1) - 1)%60]);
        }
    }
}
