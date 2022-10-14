import java.util.Scanner;
public class MergeArrays {
	static void merge(int[] arr1,int[] arr2,int n1,int n2,int[] arr3)
	{
		int i=0,j=0,k=0;
		while(i<n1 && j<n2)
		{
			if(arr1[i]<arr2[j])
				arr3[k++]=arr1[i++];
			else
				arr3[k++]=arr2[j++];
				
		}
		while(i<n1)
			arr3[k++]=arr1[i++];
		while(j<n2)
			arr3[k++]=arr2[j++];
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the total number of elements in the first array:");
		int n1=sc.nextInt();
		System.out.println("enter the total number of elements in the second array:");
		int n2=sc.nextInt();
		System.out.println("enter the elements of the first array:");
		int arr1[]=new int [n1];
		for(int i=0;i<n1;i++)
		{
			arr1[i]=sc.nextInt();
		}
		System.out.println("enter the elements of the second array:");
		int arr2[]=new int [n2];
		for(int i=0;i<n2;i++)
		{
			arr2[i]=sc.nextInt();
		}
		int arr3[]=new int [n1+n2];
		merge(arr1,arr2,n1,n2,arr3);
		System.out.println("after merging:");
		for(int i=0;i<n1+n2;i++)
		{
			System.out.println(arr3[i]+" ");
		}
	}

}
