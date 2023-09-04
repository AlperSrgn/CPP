#include<stdio.h>
#include <stdlib.h>


int main() {

	int nrows = 5;
	int ncols = 10;
	int row;
	int** rowptr;
	rowptr = (int**)malloc(nrows * sizeof(int*));

	if (rowptr == NULL) {
		puts("\nPointer için satýr ayrýlmadý.\n");
		exit(0);
	}
	printf("\n\n\nIndex Pointer(hex) Pointer(dec) . (dec)");
	
	for (row = 0; row < nrows; row++)
	{
		rowptr[row] = (int*)malloc(ncols * sizeof(int));
		if (rowptr == NULL) {
			printf("\n satir icin yer ayrilamamasi [%d]\n", row);
			exit(0);
		}
		printf("\n %d %p %d", row, rowptr, row, rowptr[row]);
		if (row > 0)
		{
			printf(" %d", (int)(rowptr[row] - rowptr[row - 1]));
		}
	}

	return 0;
}