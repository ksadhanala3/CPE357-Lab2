#include<stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp = fopen(argv[1], "r");
	int c;
	int i = 0;

	if (fp == NULL) {
		fprintf(stderr, "File not found.\n");
		return -1;
	}

	do {
		c = fgetc(fp);
		if (c == ' ' || c == '\t') {
			i++;
		}
		if (feof(fp)) {
			break;
		}
	} while(1);

	fclose(fp);
	printf("%d\n", i);
	return 0;
}
