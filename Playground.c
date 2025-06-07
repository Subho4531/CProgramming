#include <stdio.h>

int main()
{
    FILE *fp = fopen("index.txt", "a");

    fprintf(fp, "hello world\n");
    fclose(fp);
}