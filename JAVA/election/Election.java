import java.util.Scanner;
public class Election {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the total number of voters:");
		int voter=sc.nextInt();
		int candidate[]= {0,0,0,0,0,0};
		for(int i=0;i<voter;i++)
		{
			System.out.println("Cast your vote:");
			int n=sc.nextInt();
			if(n==1||n==2||n==3||n==4||n==5)
			{
				candidate[n]++;
				System.out.println("You have voted successfully");
			}
			else if(n==0) {
				candidate[0]++;
				System.out.println("you have voted for NOTA");
			}
			else {
				candidate[0]++;
				System.out.println("There is no such candidate ");
			}
		}
		System.out.println("total spoilt votes:"+candidate[0]);
		System.out.println("total votes for 1st candidate:"+candidate[1]);
		System.out.println("total votes for 2nd candidate:"+candidate[2]);
		System.out.println("total votes for 3rd candidate:"+candidate[3]);
		System.out.println("total votes for 4th candidate:"+candidate[4]);
		System.out.println("total votes for 5th candidate:"+candidate[5]);
	}

}
