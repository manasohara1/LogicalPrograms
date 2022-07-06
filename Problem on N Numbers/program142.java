//////////////////////////////////////////////////////////
//WAP to find factorial of number
//////////////////////////////////////////////////////////
import java.lang.*;
import java.util.*;
class Number
{
	private int no;
	public void Accept()
	{
		System.out.println("Enter no");
		Scanner sobj=new Scanner(System.in);
		no=sobj.nextInt();
	}
	public void Display()
	{
		System.out.println("Value is : "+this.no);
	}
//////////////////////////////////////////////////////////
//
//Function Name:    Factorial
//Description:      return factorial of number
//Input:            
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
	public int Factorial()
	{
		int iFact=1;
		int iCnt=0;
		for(iCnt=1;iCnt<=no;iCnt++)
		{
			iFact*=iCnt;
		}
		return iFact;
	}	
}
class program141
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		nobj.Accept();
		nobj.Display();
		
		iRet=nobj.Factorial();
		System.out.println("Factorial is : "+iRet);
	}
}
