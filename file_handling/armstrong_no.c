#include <stdio.h>
#include <math.h>

int main()
{
    int no, no_of_digits = 0, org_no, remainder, mod_no = 0;

    printf("Enter the number ");

    scanf("%d", &no);
    org_no = no;

    while (no > 0)
    {
        no = no / 10;

        no_of_digits += 1;
    }
    no = org_no;
    while (no > 0)
    {
        remainder = no % 10;
        mod_no += (int)pow(remainder, no_of_digits);
        no /= 10;
    }

    if (org_no == mod_no)
    {
        printf("%d is an armstrong no", org_no);
    }

    else
    {
        printf("%d is not an armstrong number", org_no);
    }

    return 0;
}