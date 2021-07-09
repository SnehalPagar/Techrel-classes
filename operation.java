// Program to display the opeartion of pre and post increment and decrement

class operation
{
	public static void main(String [] args)
	{ 
		int num=57;
		System.out.println("After post increment by 1:" +(num++));
		System.out.println("After pre increment by 1:" +(++num));
		System.out.println("After increasing number by 1:" +(num+=1));
		System.out.println("After post decrement by 1:" +(num--));
		System.out.println("After pre increment by 1:" +(--num));
		System.out.println("After decreasing number number by 1:" +(num-=1));
	}
}