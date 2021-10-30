import java.util.*;

import java.lang.*;

import java.io.*;



/* Name of the class has to be "Main" only if the class is public. */

class Codechef

{

	public static void main (String[] args) throws java.lang.Exception

	{

		Scanner in = new Scanner(System.in);

		int t = in.nextInt();

		

		for(int i=0; i<t; i++)

		{

		    long n = in.nextLong();

		    for (long j=n; j>=1; j--)

		    {

		        for (int k=1; k<=n; k++)

		        {

		            if(j==k && k!=1 && k!=3)

		            {

		                System.out.print("Q");

		            }

		            else

		            {

		                System.out.print(".");

		            }

		        }

		        System.out.println();

		    }

		}

	}


}
