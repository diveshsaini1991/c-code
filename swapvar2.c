#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;
    printf("Enter the alphabet:");
    scanf("%c", &alphabet);
    switch(alphabet)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("This alphabet is a vowel");
        break;
        default:
        printf("This alplabet is not a vowel");


    }

    return 0;
}