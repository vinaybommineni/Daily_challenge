import java.util.*;
public class Daily4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		int nu=s.nextInt();
		String n=s.next();
		char[] str = n.toCharArray();
		int i,j,count=0;
		if(nu>26)
			System.out.println(-1);
		else {
		for(i=0;i<n.length();i++)
		{
			for(j=i+1;j<n.length();j++)
			if(str[i]==str[j]&& str[i]!=0)
			{
				//System.out.println("i:"+str[i]+","+"j:"+str[j]);
				str[j]=0;
				count=count+1;
			}
		}
		System.out.println(count);
	    s.close();
	}
	}
	

}
