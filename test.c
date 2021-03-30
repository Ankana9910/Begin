// C program for the above approach
#include <conio.h>
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
	
	FILE* fo = fopen("test.csv", "r");

	if (!fo)
		printf("Can't open file\n");

	else {
		// Here we have taken size of
		// array 1024 you can modify it
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,
					1024, fo)) {
			column = 0;
			row++;

			
			if (row == 1)
				continue;

			char* value = strtok(buffer, ", ");

			while (value) {
				
				if (column == 0) {
					printf("Name =");
                     
				}

				
				if (column == 1) {
					printf("Githublink =");
                     
                     
				}

				
				if (column == 2) {
					printf("Email =");
                      
                      
				}

				printf("%s", value);
                  printf("\n");
				value = strtok(NULL, ", ");
				column++;
			}

			printf("\n");
		}

		
		fclose(fo);
	}
	return 0;
}
