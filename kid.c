#include<stdio.h>
int main(){
    char a;
    printf("Enter a alphabet: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        
    case 'A':
        printf("Alpha");
        break;
    case 'b':
        
    case 'B':
        printf("Beta");
        break;
    case 'c':
        
    case 'C':
        printf("Character");
        break;
    case 'd':
        
    case 'D':
        printf("Digit");
        break;
    case 'e':
        
    case 'E':
        printf("Enter");
        break;
    case 'f':
        
    case 'F':
        printf("Find");
        break;
    case 'g':
        
    case 'G':
        printf("Gamma");
        break;
    
    default:
        printf("Its only upto G \nso enter a valid input");
    }
}