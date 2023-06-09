#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2, *mergedFile;
    char ch;

    // Open first file
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        printf("Unable to open file1\n");
        exit(1);
    }

    // Open second file
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL)
    {
        printf("Unable to open file2\n");
        exit(1);
    }

    // Create merged file
    mergedFile = fopen("mergedFile.txt", "w");
    if (mergedFile == NULL)
    {
        printf("Unable to create mergedFile\n");
        exit(1);
    }

    // Copy contents of first file to merged file
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, mergedFile);
    }

    // Copy contents of second file to merged file
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, mergedFile);
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully!\n");

    return 0;
}