// Link to problem: https://www.codechef.com/START102D/problems/STOCKMARKET
// Link to solution: https://www.codechef.com/viewsolution/1023123650

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
		
		short T = sc.nextShort();  // Read user input
		
		for(int k =0 ; k <T; k++){
		    int x = sc.nextInt();
		   
		   int rm = Integer.MAX_VALUE;
            		     int add =0;
		    for(int j =0 ; j<x; j++ ){
		      
		      String xi = sc.next();
           
                 Integer in = Integer.parseInt(xi);
		         add = add +in;
                if( in < rm){
                    rm = in;
                }
		    }
	 System.out.println( add - rm);
		}
	
	}
}
