import java.util.*;
public class Daily5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int a[][]=new int [5][5];
		int k,i,j,si=0,sj=0;
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				a[i][j]=sc.nextInt();
				if(a[i][j]==1)
				{
					si=i;
					sj=j;
				}
			}
		}
		int c,r;
		c=2-si;
		r=2-sj;
		k=Math.abs(c)+Math.abs(r);
		System.out.println(k);
	}

}
