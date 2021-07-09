// Write a program to convert temperature in Kelvin to celsius.

import java.util.Scanner;
class temp2
{
	public static void main(String [] args)
	{
		Double kelvin, celsius;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("enter the temp in Kelvin:");
		kelvin=Scanner.nextDouble() ;
		celsius = kelvin - 273.15;
		System.out.println("temperature in Celsius:" +celsius);
	}
}