import java.util.Scanner;

public class LinearEquationsMain 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		double a,b,c,d,m,n,x1,x2;
		System.out.print("Enter Value of a: ");
		a = sc.nextDouble();
		System.out.print("Enter Value of b: ");
		b = sc.nextDouble();
		System.out.print("Enter Value of c: ");
		c = sc.nextDouble();
		System.out.print("Enter Value of d: ");
		d = sc.nextDouble();
		System.out.print("Enter Value of m: ");
		m = sc.nextDouble();
		System.out.print("Enter Value of n: ");
		n = sc.nextDouble();
		if ((a*d)-(b*c)==0)
			System.out.println("x1,x2 not possible as (ad - bc) = 0");
		else
		{
			x1 = ((m*d) - (b*n)) / ((a*d) - (b*c));
			x2 = ((n*a) - (m*c)) / ((a*d) - (b*c));
			System.out.printf("x1: %.2f%nx2: %.2f",x1,x2);
		}
		sc.close();
	}

}


// OUTPUT:

// Enter Value of a: 10
// Enter Value of b: 10
// Enter Value of c: 10
// Enter Value of d: 5
// Enter Value of m: 5
// Enter Value of n: 5
// x1: 0.50
// x2: -0.00


// Code by Rajdeep Das
