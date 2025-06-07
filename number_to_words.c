#include <stdio.h>
#include <string.h>

void convertToWords(long long n);

char *single_digits[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
char *two_digits[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
char *powers[] = { "", "thousand", "million", "billion", "trillion" };

void convertToWords(long long n) {
    if (n == 0) {
        printf("zero\n");
        return;
    }
    
    long long num_parts[5] = {0};
    int i = 0;
    while (n > 0) {
        num_parts[i++] = n % 1000;
        n /= 1000;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        if (num_parts[j] == 0) continue;
        
        if (num_parts[j] / 100 > 0) {
            printf("%s hundred ", single_digits[num_parts[j] / 100]);
        }
        
        int remainder = num_parts[j] % 100;
        if (remainder > 0) {
            if (remainder < 10)
                printf("%s ", single_digits[remainder]);
            else if (remainder < 20)
                printf("%s ", two_digits[remainder - 10]);
            else {
                printf("%s", tens_multiple[remainder / 10]);
                if (remainder % 10 > 0)
                    printf("-%s", single_digits[remainder % 10]);
                printf(" ");
            }
        }
        
        if (j > 0) {
            printf("%s ", powers[j]);
        }
    }
    printf("\n");
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    convertToWords(num);
    return 0;
}
