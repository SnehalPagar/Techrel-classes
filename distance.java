// Write a program that converts kilometers per hour to miles per hour.

import java.util.Scanner;
class distance
{
	public static void main(String [] args)
	{
		Double kmph, miph;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("Enter the distance in kilometer : ");
		kmph=Scanner.nextDouble() ;
		miph = (kmph * 0.6213712);
		System.out.println("The distance in miles per hour:" +miph);
	}
}