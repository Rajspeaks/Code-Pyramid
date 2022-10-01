public class Frequency 
{
	private double l;
	private double r;
	public void set_l(double l)
	{
		this.l = l;
	}
	public void set_r(double r)
	{
		this.r = r;
	}
	public double get_r()
	{
		return r;
	}
	public double get_l()
	{
		return l;
	}
	public void cal_frequency()
	{
		double c,f;
		for (c = 0.01; c <= 0.1; c = c + 0.01)
		{
			f = Math.sqrt((1/(l*c)-((r*r)/(4*c*c))));
			if (f > 0)
			{	
				System.out.printf("C = %.3f  Frequency = %.3f%n",c,f);
			}
			else
			{
				System.out.println("Math.sqrt((1/(l*c)-((r*r)/(4*c*c)))) is giving an imaginary number enter valid value of L and R");
				break;
			}
		}
	}

}
