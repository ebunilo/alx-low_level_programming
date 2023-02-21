#include <stdio.h>

/**
 * main - File processing operations
 * void: Does not take any parameter
 * Description: The steps for file processsing operations are
 * 1. Declare a file pointer variable
 * 2. Open a file using fopen()
 * 3. Process the file using the suitable function
 * 4. Close the file using fclose()
 * common file operations include: fopen, fclose, getc, putc,
 * getw (get integer), putw (put integer), fprintf, fgets,
 * fputs, feof.
 *
 * Return: Integer (0) if successful or negative number if failed
 */

int main(void)
{
	FILE *fp;

	fp = fopen("filename.txt", "w");

	fprintf(fp, "%s", "Hello World!");

	fclose(fp);

	return (0);
}

