#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usgae: ./substitution key\n");
        return 1;
    }
    
    
        if(strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }            
        
    for(int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
    }

    for(int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        for(int j = i + 1, len = strlen(argv[1]); j < len; j++) 
        {
            if(toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if(isupper(plaintext[i]))
        {
            int index = plaintext[i] - 'A';
            printf("%c", toupper(argv[1][index]));
        }
        else if(islower(plaintext[i]))
        {
            int index = plaintext[i] - 'a';
            printf("%c", tolower(argv[1][index]));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
        
    }
        printf("\n");
        return 0;

    
}