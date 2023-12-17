#include <stdio.h>

void printNumberInWords(int num);

int main() {
    int num=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number in words is: ");
    printNumberInWords(num);
    return 0;
}

void printNumberInWords(int num) {
    // Array to store words for each digit
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    if (num < 0) {
        printf("minus ");
        num = -num;
    }

    if (num == 0) {
        printf("zero");
    }

    if (num >= 10000000) {
        printNumberInWords(num / 10000000);
        printf(" Crore ");
        num = num % 10000000;
    }

    if (num >= 100000) {
        printNumberInWords(num / 100000);
        printf(" lakhs ");
        num = num % 100000;
    }

    if (num >= 1000) {
        printNumberInWords(num / 1000);
        printf(" thousand ");
        num = num % 1000;
    }

    if (num >= 100) {
        printf("%s hundred and ", ones[num / 100]);
        num = num % 100;
    }

    if (num >= 11 && num <= 19) {
        printf("%s ", teens[num % 10]);
    } else {
        if (num >= 10) {
            printf("%s ", tens[num / 10]);
            num = num % 10;
        }
        if (num >= 1) {
            printf("%s ", ones[num]);
        }
    }
}