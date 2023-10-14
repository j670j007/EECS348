#include <stdio.h>

int main()   {


//float sales[12] = {23458.01,40112.00, 56011.85,37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
float sales[12];
FILE *file = fopen("sales.csv", "r");

for (int myint = 0; myint < 12; myint++) {
	fscanf(file, "%f,",  &sales[myint]);
	//printf("%f\n", sales[myint]);
	}

fclose(file);

char month[12][10] = {"January", 
                     "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
float max = 0;
float min = 100000.0;
float sum = 0;
char* minmonth = "this";
char* maxmonth = "this";
printf("Month                    Sales");
printf("\n");
for (int i = 0; i < 12; i++)
{	
	if (sales[i] > max){
		max = sales[i];
		maxmonth = month[i];
	}
	if (sales[i] < min){
		min = sales[i];
		minmonth = month[i];
	}
	sum = sum + sales[i];
	printf("%-15s          %-8f\n", month[i], sales[i]);
	
}
printf("\n\n\n");
float avg = sum/12;
printf("Average Sales:  %0.2f\n", avg);
printf("Max Sales(%s):  %0.2f\n", maxmonth, max);
printf("Min Sales(%s):  %0.2f\n", minmonth, min); 
printf("\n");
printf("Rolling Sales Averages");
printf("\n");
printf("\n");
float sixmo_sum = 0.0;
for (int i = 0; i <= 6; i++){
	for(int j = i; j<=i+5; j++){
		sixmo_sum = sixmo_sum + sales[j];
 }

printf("%-12s - %-12s:  %-8f", month[i], month[i+5], sixmo_sum/6);
sixmo_sum = 0.0;
printf("\n");


}

int index[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

for (int i = 0; i <= 11; i++){
	for(int j = 0; j<=10; j++){
		if(sales[j] < sales[j+1]) {
			float temp = sales[j];
			int tempindex = index[j];
			sales[j] = sales[j+1];
			index[j] = index[j+1];
			sales[j+1] = temp;
			index[j+1] = tempindex;
		}
	}

}

printf("\n");
printf("Sales by Month from Highest to Lowest:");
printf("\n");
printf("\n");

for (int i = 0; i <=11; i++)
{
	printf("%10s %0.2f\n", month[index[i]], sales[i]);

}




return 0; 

}
