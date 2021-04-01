import Java.util.Scanner;
public class Main
{
public static void main(String[] args)
{
        Scanner scan = new Scanner(System.in);
	int xa, ya, xb, yb, A, B;
	System.out.print("Xa: ");
	xa = scan.nextInt();
        System.out.print("Ya: ");
	ya = scan.nextInt();
        System.out.print("Xb: ");
	xb = scan.nextInt();
        System.out.print("Yb: ");
	yb = scan.nextInt();

	A = xa + ya;
        B = xb + yb;
        System.out.printf("A = xa + ya = ", A);
        System.out.printf("B = xb + yb = ", B);
   }
}