/*
ID: hasan.a5
LANG: C++
TASK: friday
*/
#include<iostream>
#include<memory.h>
#include<cstdio>
using namespace std;

int is_leap_year(int x)
{
	if(x%400==0||(x%4==0&&x%100!=0))
		return 1;
	else
		return 0;
}

int main()
{
	int week[7],month[13];
	int n,i,j,temp1,temp;
	for(i=1;i<=12;i++)
		if(4==i||6==i||9==i||11==i)
			month[i]=30;
		else if(i==2)
			month[i]=28;
		else 
			month[i]=31;
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);
    scanf("%d",&n);
	{
    	memset(week,0,sizeof(week));
		temp=0;
        for(i=0;i<n;i++)
		{
		   if(is_leap_year(i+1900))
		   {
			   temp++;//每年的第一天是周几
			   temp1=0;
			   for(j=1;j<=12;j++)
			   {
				   
				  week[(temp1+temp+13-1)%7]++;//每月的第13天是周几//!!!!-1
				   if(2==j) //是j不是i
					   temp1+=29;
				   else
				      temp1+=month[j];
			   }
			   temp=(temp+366-1)%7;//每年的最后一天是周几
		   }
		   else
		   {
			   temp++;//每年的第一天是周几
			   temp1=0;
			   for(j=1;j<=12;j++)
			   {
				   week[(temp1+temp+13-1)%7]++;
				   temp1+=month[j];
			   }
			   temp=(temp+365-1)%7;//每年的最后一天是周几
		   }
		}
    	printf("%d",week[6]);
		for(i=0;i<6;i++)
			printf(" %d",week[i]);
		printf("\n");
	
	}//******while 
	return 0;
}
