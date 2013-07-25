
import java.util.Scanner;
public class ArrayChallenge {

	public static void main (String args[])
	{
		Scanner reader = new Scanner (System.in);
		
		int number;
		int [] arr = new int [5];
		
		for (int i=0; i<=4; i++)
		{
			System.out.print("Please enter a number: ");
			number=reader.nextInt();
			arr [i]=number;
			
					if (i==4)
					System.out.print(arr[i]);
		}	
		
	}
}
