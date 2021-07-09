// Write a program to find the area of Scalene Triangle.

import java.util.Scanner;
class scalene
{
	public static void main(String [] args)
	{
		int s1,s2,angle;
		double area;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("Enter side1:");
		s1=Scanner.nextInt();
		System.out.println("Enter side2:");
		s2=Scanner.nextInt();
		System.out.println("Enter angle:");
		angle=Scanner.nextInt();
		area = (s1 * s2* Math.sin((3.14/180)*angle))/2;
		System.out.println("Area of scalene triangle:" +area);
	}
}