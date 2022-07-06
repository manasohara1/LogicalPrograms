import java.lang.*;
import java.util.*;
class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iValue)
	{
		this.Arr=new int[iValue];
	}
	public void Accept()
	{
		int iCnt=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter elements : ");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}
	public void Display()
	{
		int iCnt=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
	}
//////////////////////////////////////////////////////////
//
//Function Name:    Summation
//Description:      return addition of array elements
//Input:            
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
	public int Summation()
	{
		int iCnt=0;
		int iSum=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iSum+=Arr[iCnt];
		}
		return iSum;
	}
}
class program144
{
	public static void main(String arguments[])
	{
		int iSize=0;
		int iRet=0;
		System.out.println("Enter no. of elements : ");
		Scanner sobj=new Scanner(System.in);
		iSize=sobj.nextInt();
		ArrayX obj=new ArrayX(iSize);
		obj.Accept();
		obj.Display();
		iRet=obj.Summation();
		System.out.println("Summation is : "+iRet);
		obj=null;
	}
}
