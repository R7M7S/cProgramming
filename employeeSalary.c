#include <stdio.h>
	int main()
	{
		/*
		Basic Salary will be 50%
		HRA will be 30%
		TA will be 10%
		Other Allowance 10%
		TAX 5%
		ISUR 500rs 
		*/
	
		int salary = 10000;
		printf("Enter the Employee Salary Range\n");
		scanf("%d",&salary);
		int inssurence= 500;
		printf("SALARY	  	 : %d\n",salary);
		printf("BASIC PAY 	 : %d\n",salary*50/100);
		printf("\n");
		printf("ALLOWANCE:-\n");
		printf("----------------------\n");
		printf(">TA 10%% of salary  : %d\n",salary*10/100);
		printf(">HRA 30%% of salary : %d\n",salary*30/100);
		printf("\n");
		printf("deductions..\n");
		printf("----------------------\n");
		printf(">TAX 5%% of salary  : %d\n",salary*5/100);
		printf(">INSSURENCE	   : %d\n",inssurence);
		printf("\n");
		printf("salary in hand after deducting tax and inssurence:  %d\n",(salary-salary*5/100)-inssurence);

		return 0;
	}
