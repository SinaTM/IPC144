// A program that concatenate any number of files to a new file
// The program gets the number of files and their names from the user
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define SZ 30

void clearInputBuffer(void)
{
    while (getchar() != '\n')
    {
    }
}

int main(void)
{
    FILE* fp1 = NULL, * fp2 = NULL;
    char nameInput[SZ] = { 0 };
    char nameOutput[SZ] = { 0 }, ch;
    int nFiles, i;

    printf("Enter number of files that you want to concatenate:\n");
    do
    {
        scanf("%d", &nFiles);
        clearInputBuffer();
        if (nFiles < 2)
        {
            printf("Please enter a valid number!\n");
        }
        
    } while (nFiles < 2);

    printf("Enter output file name: ");
    scanf("%30[^\n]", nameOutput);
    clearInputBuffer();
    printf("The file name entered: %s\n", nameOutput);
    fp2 = fopen(nameOutput, "w");
    if (fp2 == NULL)
    {
        printf("ERROR: Could not open file for writing!");
    }
    else
    {


        for (i = 1; i <= nFiles; i++)
        {
            do
            {
                printf("Enter file number %d name: ", i);
                scanf("%30[^\n]", nameInput);
                clearInputBuffer();
                printf("The file name entered: %s\n", nameInput);
                fp1 = fopen(nameInput, "r");
                if (fp1 != NULL)
                {
                    //Append the file:
                    while ((ch = fgetc(fp1)) != EOF)
                    {
                        fputc(ch, fp2);
                    }

                }
                else
                {
                    printf("Please enter a valid file name!\n");
                }

            } while (fp1 == NULL);

            fclose(fp1);
            fp1 = NULL;
        }

        fclose(fp2);
        fp2 = NULL;
    }
    return 0;
}
