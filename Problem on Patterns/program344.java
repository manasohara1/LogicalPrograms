import java.lang.*;
import java.util.*;
//Pattern (Shorter version of 344)
// Input : 78956
// Output : 
/*
	7	8	9	5	6
	7	8	9	5	6
	7	8	9	5	6
	7	8	9	5	6
	7	8	9	5	6	
*/			
class program344
{
    public static void main(String arg[])
    {
    	Scanner sobj = new Scanner(System.in);
	System.out.println("Enter number : ");
	
	char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();
	
	for(int iCnt = 0 ; iCnt < Arr.length ;iCnt++)
	{
		for( int jCnt = 0 ; jCnt <Arr.length ; jCnt ++ )
		{
			System.out.print(Arr[jCnt]+"\t");
		}
		System.out.println();
	}
	
    }
}
