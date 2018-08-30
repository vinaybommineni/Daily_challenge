import java.util.*;
public class Daily {

	public static void main(String[] args) {
		 Scanner s=new Scanner(System.in);
		    int n,i,s1=1,s2=1,temp,sum=0;
		    n=s.nextInt();
		    if(n==1)
		    {
		        sum=1;
		    }
		    else{
		    for(i=1;i<n-1;i++)
		    {
		        temp=s1+s2;
		        sum=sum+temp;
		        s1=s2;
		        s2=temp;
		        //System.out.println("temp:"+temp);
		        //System.out.println("sum: "+sum);
		    }
		    sum=sum+2;
		    }
		    System.out.println(sum);

	}

}
