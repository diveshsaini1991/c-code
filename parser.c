#include<stdio.h>
#include<string.h>

void parser(char str[70]){
    int p=0;
    int ind=0;
    int l=strlen(str);
    for (int i = 1; i < l; i++)
    {
        if (str[i]=='>')
        {
            p=1;
        }
        else if (str[i]=='<')
        {
            p=0;
            str[ind-1]=0;
            break;
        }
        if (p==1)
        {
            str[ind]=str[i+1];
            ind++;
        }
    }
    //removing starting spaces from the string 
    int i=0;
    p=1;
    while (str[i]==' ')
    {
        i++;
    }
    for (int j = 0; j < strlen(str); j++)
    {
        str[j]=str[i];
        i++;
    }
    
    //removing ending spaces 
    i=strlen(str);
    p=1;
    while (str[i-1]==' ')
    {
        i--;
    }
    str[i]=0;
    printf("Final string is --%s--",str);
    
    
    

}




// printing parsered string if spaces around is 1 only
// void parser2(char str[70]){
//     int p=0;
//     int f=strlen(str);
//     for (int i = 0; i < f; i++)
//     {
//         if (str[i]==' ')
//         {
//             p=1;
//         }
//         else if (str[i+2]=='<')
//         {
//             p=0;
//             break;
//         }
//         if (p==1)
//         {
//             printf("%c",str[i+1]);
//         }
        
        
        
//     }
    
// }



int main(){
    
    char str[70]="<h1>       how are you bro     </h1>";
    // parser2(str);
    parser(str);
    
}