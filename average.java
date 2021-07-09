//  Write a program in C++ to compute the total and average of four numbers.

import java.util.Scanner;
class average
{
	public static void main(String [] args)
	{
		double n1,n2,n3,n4,tot,avrg;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("Enter numbers:");
		n1=Scanner.nextDouble();
		n2=Scanner.nextDouble();
		n3=Scanner.nextDouble();
		n4=Scanner.nextDouble();
		tot=n1+n2+n3+n4;
		avrg=tot/4;
		System.out.println("The total of four numbers is: " +tot);
		System.out.println("The average of four numbers is : " +avrg);
	}
}