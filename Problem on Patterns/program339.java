import java.lang.*;
import java.util.*;
//Pattern 
// Input : Hello
// Output : 	
//		H	
//		H	e	
//		H	e	l	
//		H	e	l	l	
//		H	e	l	l	o
class program339
{
    public static void main(String arg[])
    {
    	Scanner sobj = new Scanner(System.in);
	System.out.println("Enter String : ");
	String str = sobj.nextLine();
	char Arr[] = str.toCharArray();
	for(int iCnt = 0 ; iCnt < Arr.length ;iCnt++)
	{
		for( int jCnt = 0 ; jCnt <= iCnt ; jCnt ++ )
		{
			System.out.print(Arr[jCnt]+"\t");
		}
		System.out.println();
	}
    }
}
