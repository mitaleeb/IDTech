import java.util.ArrayList;
import java.util.Scanner;

public class ArrayLists {

	public static void main(String[] args) {
		
		Scanner reader = new Scanner (System.in);

		ArrayList<Integer> numbers= new ArrayList<Integer> ();
		
		ArrayList<Integer> numbers2 = new ArrayList<Integer> ();
		
		int minimum= Integer.MAX_VALUE;
		int maximum = Integer.MAX_VALUE;
		
		int minimum2 = Integer.MAX_VALUE;
		int maximum2 = 0;
		for (int i=0; i<=4; i++)
		{
			
			//Get input from user
			System.out.println("Please enter an integer: ");
			int input= reader.nextInt();
			System.out.println("Please enter another integer: ");
			int input2=reader.nextInt();
			
			//Add user input into the ArrayList
			numbers.add(input);
			numbers2.add(input2);
			
			//obtaining minimum and maximum for first arraylist
			
			if (i==0) {
				 minimum=input;
				 maximum = input;
				}
				
				else if (input> maximum){
				maximum=input;
				}
				
				else if (input<minimum) {
					minimum = input;
				}
		
			
			//obtaining minimum and maximum for second arraylist
			
			if (i==0) {
				 minimum2=input2;
				 maximum2 = input2;
				}
				
				else if (input2> maximum2){
				maximum=input2;
				}
				
				else if (input2<minimum2) {
					minimum2 = input2;
				}
				
			if (i==5) { 
			System.out.println("Your first array list was: "+numbers);
			System.out.println("Your second array list was: "+numbers2);
			
			System.out.print("Your maximum values will now be displayed and minimum will be deleted: ");
			numbers.remove(minimum);
			numbers2.remove(minimum2);
			
			System.out.println("Your first array list is now : "+numbers+" Maximum value: "+numbers.get(maximum));
			System.out.println("Your second array list is now: "+numbers2+" Maximum value: "+numbers2.get(maximum2));
			
			}
			
			
		}
			
	}		
}			
		

	




//;