package debug;
import java.lang.*;
import java .util.*;
public class Prime {
	public static void main(String[] args)
	{
	  Scanner sc= new Scanner(System.in);
	  int n=sc.nextInt();
	  if(checkprime(n))
	  System.out.println(n+"is a prime number");
	  else
	   System.out.println(n+"is not a prime number");
	}
	public static boolean checkprime(int n)
	{
		int ct=0;
	  for(int i=1;i<=n;i++)
	  {
		 if(n%i==0)
		 ct++;
	  }
	  return (ct==2);
	}

}
"Simple Test" 
