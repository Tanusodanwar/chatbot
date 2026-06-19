import java.util.Scanner;

public class QuadraticRoots {
    public static void main(String[] args) {
        double a, b, c, d, r1, r2;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a: ");
        a = sc.nextDouble();

        System.out.print("Enter b: ");
        b = sc.nextDouble();

        System.out.print("Enter c: ");
        c = sc.nextDouble();

        d = b * b - 4 * a * c;

        if (d > 0) {
            r1 = (-b + Math.sqrt(d)) / (2 * a);
            r2 = (-b - Math.sqrt(d)) / (2 * a);
            System.out.println("Real and Distinct Roots:");
            System.out.println("Root1 = " + r1);
            System.out.println("Root2 = " + r2);
        } else if (d == 0) {
            r1 = -b / (2 * a);
            System.out.println("Real and Equal Roots:");
            System.out.println("Root = " + r1);
        } else {
            double real = -b / (2 * a);
            double imag = Math.sqrt(-d) / (2 * a);
            System.out.println("Complex Roots:");
            System.out.println("Root1 = " + real + " + " + imag + "i");
            System.out.println("Root2 = " + real + " - " + imag + "i");
        }

        sc.close();
    }
}