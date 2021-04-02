//read text from file1 and write it 2 times in file2
#include<stdio.h> 

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("file1.txt", "r");
    ptr2 = fopen("file2.txt", "w");

    char c = fgetc(ptr1);
    while (c!=EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}