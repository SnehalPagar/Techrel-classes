//Program to find area of any triangle using Heron's formula



class triangle

{
  
	public static void main(String [] args)

	{
   
		int a=5,b=5,c=5;

	        double area, s;
 
	        s=(a+b+c)/2;
   
		area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
   
  
	        System.out.println("area of triangle:" +area);
 
      
  }

}