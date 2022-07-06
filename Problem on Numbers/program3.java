////////////////////////////////////
// WAP to perform Addition of 2 numbers (take input from user) (No naming Conventions)
///////////////////////////////////
import java.lang.*;
import java.util.*;
//////////////////////////////////////////////////////////
//
//Function Name:    main
//Description:      Display addition of two numbers
//Input:            10 20
//Output:           30
//Date:             21/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
class program3
{
	public static void main(String args[])
	{
	    int i=0,j=0,k=0;
	    Scanner sobj=new Scanner(System.in);
	    
    	System.out.println("Enter first number : ");
	    i=sobj.nextInt();
	    System.out.println("Enter second number : ");
	    j=sobj.nextInt();
	
	    k=i+j;
	    System.out.println("Addition is : "+k);
	}
}
//////////////////////////////////////////////////////
//Test Case
/////////////////////////////////////////////////////
// Case 1:
// i : 11   j:21
// k : 32
////////////////////////////////////////////////////
// Case 2:
// i : 10   j:20
// k : 30
////////////////////////////////////////////////////
