import java.util.Scanner;
public class ElectricalCircuit {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the inductance:");
		double l=sc.nextDouble();
		System.out.println("enter the resistance:");
		double r=sc.nextDouble();
		for(double c=0.01;c<=0.1;c=c+0.01)
		{
			double x=Math.abs((1/(l*c))-((r*r)/(4*c*c)));
			double f=Math.sqrt(x);
			System.out.println("when capacitance value is "+c+" frequency is "+f);
		}

	}

}
 