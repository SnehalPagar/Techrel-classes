// Write a program to convert temperature in Kelvin to Fahrenheit.

import java.util.Scanner;
class temp3
{
	public static void main(String [] args)
	{
		Double frh, kelvin;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("enter the temp in Kelvin:");
		kelvin=Scanner.nextDouble() ;
		frh = (9.0 / 5) * (kelvin - 273.15) + 32;
		System.out.println("temperature in Fahrenheit:" +frh);
  	}
}