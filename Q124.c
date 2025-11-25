//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Read source and destination filenames
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open the source file for reading
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open the destination file for writing
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully.\n", sourceFilename, destFilename);
    return 0;
}