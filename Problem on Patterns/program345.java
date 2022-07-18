import java.lang.*;
import java.util.*;
//Pattern (Shorter version of 344)
// Input : 78956
// Output : 
/*
	7	8	9	5	6
	7	8	9	5	
	7	8	9	
	7	8	
	7		
*/			
class program345
{
    public static void main(String arg[])
    {
    	Scanner sobj = new Scanner(System.in);
	System.out.println("Enter number : ");
	
	char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();

	for(int iCnt = Arr.length-1 ; iCnt >= 0 ;iCnt--)
	{
		for( int jCnt = 0 ; jCnt <= iCnt ; jCnt ++ )
		{
			System.out.print(Arr[jCnt]+"\t");
		}
		System.out.println();
	}
	
    }
}
