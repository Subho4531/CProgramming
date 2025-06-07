/*
Structure practice
*/

#include <stdio.h>

struct dict
{
    int page;
    char word[256];
    char meaning[256];
};

int main()
{
    FILE *fp;
    fp = fopen("libary.txt", "w");

    if (!fp)
    {
        printf("file is not opeaned ");
        return 1;
    }

    


}