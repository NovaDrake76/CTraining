#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{ 
 
int order, row, col, i, j, k;
int arr2D[10][10], * arr1D;

scanf("%d", &order);
scanf("%d", &row);
scanf("%d", &col);

for (i = 0; i < row; ++i) {
		for (j = 0; j < col; ++j) {
			scanf("%d", &arr2D[i][j]);
		}
	}

if(order == 0){
    arr1D = (int*)malloc(row * col * sizeof(int));

	for (i = 0; i < row; ++i) {
		for (j = 0; j < col; ++j) {
			arr1D[i * col + j] = arr2D[i][j];
		}
	}

    for (i = 0; i < row * col; ++i) {
		printf("%d ", arr1D[i]);
	}


}else{
    arr1D = (int*)malloc(row * col * sizeof(int));

	for (j = 0; j < col; ++j) {
		for (i = 0; i < row; ++i) {
			arr1D[j * row + i] = arr2D[i][j];
		}
	}

	for (i = 0; i < row * col; ++i) {
		printf("%d ", arr1D[i]);
	}
}

}