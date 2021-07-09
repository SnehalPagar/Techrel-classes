// Write a program to find the third angle of a triangle.

import java.util.Scanner;
class angle
{
	public static void main(String [] args)
	{
		int a,b,c;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("Enter two angles: ");
		a=Scanner.nextInt() ;
		b=Scanner.nextInt() ;
		c=180-(a+b);
		System.out.println("The 3rd angle of the triangle is :" +c);
	}
}