import java.util.Scanner;

public class FrequencyMain 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		Frequency obj = new Frequency();
		double i;
		System.out.print("Enter industance(L): ");
		i = sc.nextDouble();
		obj.set_l(i);
		System.out.print("Enter resistance(R): ");
		i = sc.nextDouble();
		obj.set_r(i);
		System.out.printf("Given Value of L: %.2f\nGiven Value of R: %.4f\n",obj.get_l(),obj.get_r());
		obj.cal_frequency();
		sc.close();
	}

}
