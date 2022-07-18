//iRow=4,iCol=4
/*
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*
*/
import java.lang.*;
import java.util.*;
class Pattern{
	private  int iRow,iCol;
	
	public Pattern(int a,int b)
	{
		this.iRow=a;
		this.iCol=b;
	}
	public	void DisplayPattern()
	{
		//pattern for logic
		int i=0,j=0;
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
}
class program151
{
	public static void  main(String b[])
	{
		Pattern obj=new Pattern(4,4);
		obj.DisplayPattern();
	}
}
