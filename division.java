//  Write a program to compute quotient and remainder.

import java.util.Scanner;
class division
{
	public static void main(String [] args)
	{
		int dividend, divisor, quotient,remainder;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("Enter dividend:");
		dividend=Scanner.nextInt();
		System.out.println("Enter divisor:");
		divisor=Scanner.nextInt();
		quotient=dividend / divisor;
		remainder=dividend % divisor;
		System.out.println("The quotient of the division is : " +quotient);
		System.out.println("The remainder of the division is : " +remainder);
	}
}