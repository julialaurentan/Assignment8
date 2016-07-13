#include <stdio.h>
#include <math.h>

int main(){
	FILE *file;
	float num = 0;
	float list[4];
	int listNum = 0;
	float total = 0;
	float mean = 0;
	file = fopen("fileIO.txt", "r");
	while (fscanf(file, "%f", &num) != EOF){
		printf("%.2f\n", num);
		list[listNum] = num;
		listNum ++;
	}
	printf("\n");
	for (int i = 1; i < 5; i ++){ // calculating total
		total += list[i];
	}
	mean = total / list[0]; // calculating mean
	printf("The mean is: %.2f.\n", mean);
	// calculating standard deviation
	total = 0;
	for (int i = 1; i < 5; i ++){
		float x = list[i]-mean;
		total += (x*x);
	}
	mean = total / list[0];
	printf("Standard deviation is: %.2f.\n",(mean));
	fclose(file);
	return 0;
}
