#include <cs50.h>
#include<ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
        if (argc != 2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        


        for(int i = 0, len = strlen(argv[1]); i < len; i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;           
            }

        }

        

        int key = atoi(argv[1]);
     

        string plaintext = get_string("Plaintext:  ");

        printf("Ciphertext: ");

        
        for (int i = 0, len = strlen(plaintext); i < len; i++)
        {

            if(islower(plaintext[i]))
            {
               
                char shifted = ((plaintext[i] - 'a') + key) % 26 + 'a';
                printf("%c", shifted);
            }
            else if(isupper(plaintext[i]))
            {
                char shifted = ((plaintext[i] - 'A') + key) % 26 + 'A';
                printf("%c", shifted);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");

        
}