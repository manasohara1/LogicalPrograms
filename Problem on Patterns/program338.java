import java.lang.*;
import java.util.*;
//Pattern 
// Input : Hello
// Output : 	H	H	H	H	H
//		e	e	e	e	e
//		l	l	l	l	l
//		o	o	o	o	o
//		o	o	o	o	o
class program338
{
    public static void main(String arg[])
    {
    	Scanner sobj = new Scanner(System.in);
	System.out.println("Enter String : ");
	String str = sobj.nextLine();
	char Arr[] = str.toCharArray();
	for(int iCnt = 0 ; iCnt < Arr.length ;iCnt++)
	{
		for( int jCnt = 0 ; jCnt <Arr.length ; jCnt ++ )
		{
			System.out.print(Arr[iCnt]+"\t");
		}
		System.out.println();
	}
    }
}
