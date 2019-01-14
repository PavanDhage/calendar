#include<stdio.h>
void main()
{
	int dd, mm, yy, yearcode, monthcode, centurycode, leapyearcode, i, noofdays, day, count;
	printf("Enter: dd mm yy: ");
	scanf("%d%d%d", &dd, &mm, &yy);
	yearcode = (yy + yy / 4) % 7;
	if(mm = 1 || 10)
		{
			monthcode = 0;
		}
	else if(mm = 2 || 3|| 11)
		{
			monthcode = 3;
		}
	else if(mm = 4 || 7)
		{
			monthcode = 6;
		}
	else if (mm = 5)
		{
			monthcode = 1;
		}
	else if (mm = 6)
		{
			monthcode = 4;
		}
	else if (mm = 8)
		{
			monthcode = 2;
		}
	else if (mm = 9 || 12)
		{
			monthcode = 5;
		}
	if (yy / 100 == 17 || 21)
		{
			centurycode = 4;
		}
	else if(yy / 100 == 18 || 22)
		{
			centurycode = 2;
		}
	else if (yy / 100 == 19 || 23)
		{
			centurycode = 0;
		}
	else if (yy / 100 == 20)
		{
			centurycode =6;
		}
	if (yy % 4 == 0)
	{
		leapyearcode = -1;
	}
	else 
	{
		leapyearcode = 0;
	}
	day = (yearcode + monthcode + centurycode + leapyearcode+1) % 7;
	if (mm = 1 || 3 || 5 || 7 || 8 || 10 ||12)
		{
			noofdays = 31;
		}
	else if (mm = 4 || 6 || 9 || 11)
		{
			noofdays = 30;
		}
	else if (mm = 2)
	{
		{
			if (yy % 4 == 0)
				{
					noofdays = 29;
				}
			else 
				{
					noofdays = 28;
				}
		}
	}
	printf("SUN MON TUE WED THU FRI SAT\n");
	for (i = 1; i <= day; i = i +1)
	{
		printf("    ");
	}
	for (count = 1; count <= noofdays; count = count + 1)
	{
		printf("%3d ",count);
		if ((count+day)%(7) == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}
