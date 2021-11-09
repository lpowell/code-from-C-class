#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//create the fullname structure
// typedef struct{}fullname; prevents the undefined error when not
// using struct fullname in the main function
typedef struct fullname {
    char first_name[21];
    char last_name[21];
    }fullname;

int main()
{
    // create file pointers and open a binary file to write to
    FILE *binary_file;
    FILE *binary_file_read;
    binary_file = fopen("name.bin", "wb");
    // check to see if the file opened correctly
    if(binary_file == NULL)
        printf("Cannot open file for input\n");

    // initialize fullname Name
    struct fullname Name;
    strcpy(Name.first_name, "Liam");
    strcpy(Name.last_name, "Powell");

    // write struct fullname Name to the opened binary file
    // and then close the file
    fwrite(&Name, sizeof(fullname),1,binary_file);
    fclose(binary_file);

    // open the file in read mode
    binary_file_read = fopen("name.bin", "rb");
    // check again for errors
    if(binary_file_read == NULL)
        printf("Cannot open file for output\n");

    // create an empty structure
    struct fullname Name_read;

    // read from the file into the empty structure
    fread(&Name_read, sizeof(struct fullname),1,binary_file_read);
    // close the file
    fclose(binary_file_read);

    // print the strings from the structure that was read to
    printf("%s %s",Name_read.first_name, Name_read.last_name);

    // exit
    return 0;
}
