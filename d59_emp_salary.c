#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printPaySlip(char *ename,float bp,float da,float hra,float ta,float pf,float gp,float np)
{
	printf("-----Pay Slip-----\n");
	printf("Employee name %s\n",ename);
	printf("Basic pay %.2f\n",bp);
	printf("Dearness Allowance %.2f\n",da);
	printf("House Rent Allowance %.2f\n",hra);
	printf("Travel Allowance %.2f\n",ta);
	printf("Provident fund %.2f\n",pf);
	printf("Gross Pay %.3f\n",gp);
	printf("Net Pay %.3f\n",np);
}

void calSalary(char *ename,float bp)
{
	 float da = bp * 0.50;
	float hra = bp * 0.30;
	 float ta = bp * 0.10;
	 float pf = bp * 0.15;
	 float gross_pay = bp + da + hra + ta + pf;
	 float net_pay = gross_pay - pf;
	printPaySlip(ename,bp,da,hra,ta,pf,gross_pay,net_pay);
}

void getData()
{
	 float base_pay;
	 char name[100];
	printf("Enter Basic Pay: ");
	scanf("%f",&base_pay);
	printf("Enter Employee Name: ");
	scanf("%s",name);
	calSalary(name,base_pay);
}

int main(void)
{
	getData();
	return 0;
}
