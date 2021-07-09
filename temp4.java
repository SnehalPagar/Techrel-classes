//21. Write a program to convert temperature in Fahrenheit to Celsius.

import java.util.Scanner;
class temp4
{
	public static void main(String [] args)
	{
		Double frh, celsius;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("enter the temp in Fahrenheit:");
		frh=Scanner.nextDouble() ;
		celsius = 5 * (frh - 32) / 9;
		System.out.println("Temperature in celsius:" +celsius);
	}
}
