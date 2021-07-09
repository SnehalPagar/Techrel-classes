// Program to find aarea and perimeter of a rectangle

class rectangle
{
	public static void main(String [] args)
	{
		int l=24,w=12;
		double area, perimeter;
		area=l*w;
		perimeter=2*(l+w);
		System.out.println("Area of Rectangle:" +area);
		System.out.println("Perimeter of Rectangle:" +perimeter);
	}
}