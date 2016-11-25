#include<stdio.h>
#include<stdlib.h>
int main() {
	int mtx1_dimensions[2]; 
	int mtx2_dimensions[2];
	printf("Enter matrix 1 dimensions: ");
	if (scanf("%d %d", &mtx1_dimensions[0], &mtx1_dimensions[1]) == 2){
		printf("\n");
	}
	else{
		printf("Invalid Input");
		exit(-1);
	}
	while (mtx1_dimensions[1] != mtx2_dimensions[0]){

		printf("Enter matrix 2 dimensions: ");
		scanf("%d %d" , &mtx2_dimensions[0], &mtx2_dimensions[1]);
		if (mtx1_dimensions[1] != mtx2_dimensions[0]){
			printf("Dimensions Mismatch\n");
		}
	}
	int mtx1[mtx1_dimensions[0]][mtx1_dimensions[1]];
	int mtx2[mtx2_dimensions[0]][mtx2_dimensions[1]];
	printf("Please enter values for matrix 1: ");
	for (int i=0; i<mtx1_dimensions[0]; i=i+1){
		for (int j=0; j<mtx1_dimensions[1]; j=j+1){
			scanf("%d", &mtx1[i][j]);
		}
	} 
	printf("Please enter values for matrix 2: ");
	for (int i=0; i<mtx2_dimensions[0]; i=i+1){
		for (int j=0; j<mtx2_dimensions[1]; j =j+1){
			scanf("%d", &mtx2[i][j]);
		}
	}

	printf("\nMatrix 1:\n");
	for (int i=0; i<mtx1_dimensions[0]; i=i+1){
		for (int j=0; j<mtx1_dimensions[1]; j=j+1){
			printf("%d\t", mtx1[i][j]); 
		}
		printf("\n");
	}
	printf("\nMatrix 2:\n");
	for (int i=0; i<mtx2_dimensions[0]; i=i+1){
		for (int j=0; j<mtx2_dimensions[1]; j=j+1){
			printf("%d\t", mtx2[i][j]);
		}
		printf("\n");
	}
	int finalProduct[mtx1_dimensions[1]][mtx2_dimensions[1]];
	int product = 0;
	for (int i =0; i<mtx1_dimensions[0]; i = i+1){
		for (int j =0; j<mtx2_dimensions[1]; j =j+1){
			for (int k=0; k<mtx2_dimensions[0]; k = k+1){
				product = product + mtx1[i][k]*mtx2[k][j];
			}
			finalProduct[i][j] = product;
			product = 0;
		}
	}

	printf("\nFinal output: \n");
	
	for (int i=0; i<mtx1_dimensions[0]; i = i+1){
		for (int j=0; j<mtx2_dimensions[1]; j = j+1){
			printf("%d\t", finalProduct[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
<<<<<<< HEAD
=======

>>>>>>> 9487e4dac638a0375b91c2af74b81f043e1c84e5
