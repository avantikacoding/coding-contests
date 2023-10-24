// Link to problem: https://www.codechef.com/START102D/problems/AGENTCHEF
// Link to solution: https://www.codechef.com/viewsolution/1023044162

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
		
		byte T = sc.nextByte();
		
		for( int i =0; i < T; i++ ){
		    float X= sc.nextFloat();
		  
		    float in = 20*X/100 ;
		    float r = 100/in;
		    int rr = (int)Math.ceil(r);
		    System.out.println(rr);
		}
	}
}