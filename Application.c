#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=-1;
struct sys
{
int flightNumber,price;
char airlinesName[20],destination[20],source[20];
int dday,dmonth,dyear,aday,amonth,ayear;
int ahour,amin,dhour,dmin;
}a[15];

void insert()
{
char s[20];
i=i+1;int xy;
printf("INSERTING A NEW RECORD\n");
printf("Enter the Flight number:");
scanf("%d",&xy);
a[i].flightNumber=xy;
printf("Enter the airlines name: ");scanf("%s",s); strcpy(a[i].airlinesName,s);
printf("Enter the source of the flight: ");scanf("%s",s);strcpy(a[i].source,s);
printf("Enter the date of departure in dd mm yyyy format:  "); scanf("%d%d%d",&a[i].dday,&a[i].dmonth,&a[i].dyear);
printf("Enter the depature time in hh mm format :  ");scanf("%d%d",&a[i].dhour,&a[i].dmin);
printf("Enter the Destination of the flight: ");scanf("%s",s);strcpy(a[i].destination,s);
printf("Enter the date of arrival in dd mm yyyy format:  "); scanf("%d%d%d",&a[i].aday,&a[i].amonth,&a[i].ayear);
printf("Enter the arrival time in hh mm format :  ");scanf("%d%d",&a[i].ahour,&a[i].amin);
printf("Enter the fare of the flight :  "); scanf("%d",&a[i].price);
}

/*void filter()
{
int choice;
printf("Filter the flights by??\n");
printf("1.Price\n2.Source\n3.Destination\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Something");

}


}


*/

void display()
{
int x;
printf("FlightNumber\tairlines\tsource\tdate\ttime\tdestination\tdate\ttime\tFare\n");

for(x=0;x<=i;x++)
{
//printf("FlightNumber\tairlines\tsource\tdate\ttime\tdestination\tdate\ttime\tFare\n");
printf("%d \t\t%s\t\t %s\t %d %d %d\t",a[x].flightNumber,a[x].airlinesName,a[x].source,a[x].dday,a[x].dmonth,a[x].dyear);
printf("%d:%d\t %s\t",a[x].dhour,a[x].dmin,a[x].destination);
printf("\t%d %d %d\t",a[x].aday,a[x].amonth,a[x].ayear);
printf("%d:%d\t%d\n",a[x].ahour,a[x].amin,a[x].price);


}

}








void main()
{
	int choice;

	while(1)
	{
		printf("Enter a choice as specified below\n");
		printf("1. Add Flight Details \n2.Display the data\n3.Exit from the application\n");
		scanf("%d",&choice);



		switch(choice)
		{

			case 1: insert(); break;
			case 2: display(); break;
//			case 3: filter(); break;
			case 3: exit(1); break;
			default:printf("You have entered a wrong option\n");exit(1);
		}


	}
}





//write  functions above the main
