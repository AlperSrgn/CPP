#include <iostream>
using namespace std;

int main() {
	int** rptr;
	int* aptr;
	int* testptr;
	int k;
	int nrows = 5; /*Hem nrows hem de ncols degerlendirilebilir*/
	int ncols = 8;
	int row, col;

	/*dizi icin hafizadan yer ayrilmasi*/
	aptr = (int*)malloc(nrows * ncols * sizeof(int));
	if (aptr == NULL)
	{
		puts("\nDizi icin yer ayrilmadi");
		exit(0);
	}

	/*pointerlar icin satirlara yer ayrilir*/
	rptr = (int**)malloc(nrows*(sizeof(int*)));
	if (rptr == NULL)
	{
		puts("\nPointerlar icin yer ayrilmadi");
		exit(0);
	}

	/*pointler isaretlenir*/
	for (k = 0; k < nrows; k++)
	{
		rptr[k] = aptr + (k * ncols);
	}

	/*satir pointerlarinin nasil arttirildigi gosterilir*/
	printf("\n\npointerlarin arttirilmasi");
	printf("\n\nIndex Pointer(hex) .(dec)");
	for (row = 0; row < nrows; row++)
	{
		printf("\n%d %p", row, rptr[row]);
		if (row > 0)
			printf("% d", (rptr[row] - rptr[row - 1]));
	}
	printf("\n\nDizinin yazdirilmasi\n");
	for (row = 0; row < nrows; row++)
	{
		for (col = 0; col < ncols; col++)
		{
			rptr[row][col] = row + col;
			printf("%d ", rptr[row][col]);
		}
		putchar('\n');
	}
	puts("\n");
	/*Burada bitisik bir bellek blogunda 2 boyutlu bir dizi ile ugrasildigi gosterilir*/
	printf("Ve simdi bellekte bitisik olduklari gosterilir\n");
	testptr = aptr;

	for (row = 0; row < nrows; row++)
	{
	for (col = 0; col < ncols; col++)
	{			
	printf("%d ", *(testptr++));
	}
	putchar('\n');
	}
	return 0;
	
}