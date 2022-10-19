// Jump Search.
public class JumpSearch
{
	public static int jumpSearch(int[] arr, int x)
	{
		int n = arr.length;

		// block size
		int step = (int)Math.floor(Math.sqrt(n));

		// Finding the block where element is
		int prev = 0;
		while (arr[Math.min(step, n)-1] < x)
		{
			prev = step;
			step += (int)Math.floor(Math.sqrt(n));
			if (prev >= n)
				return -1;
		}

		// Doing a linear search for x in block
		while (arr[prev] < x)
		{
			prev++;

			// If we reached next block or end of array.
			if (prev == Math.min(step, n))
				return -1;
		}

		// element found
		if (arr[prev] == x)
			return prev;

		return -1;
	}

	// test function
	public static void main(String [ ] args)
	{
		int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
					34, 55, 89, 144, 233, 377, 610};
		int x = 55;

		// index of 'x'
		int index = jumpSearch(arr, x);

		// Print 'x' 
		System.out.println("\nNumber " + x +
							" is at index " + index);
	}
}
