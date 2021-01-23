#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int letters = 0;
    string plaintext;
    string key = argv[1];

    if (argc > 2 || argc < 2)
    {
        printf("Error!\n");
        return 1;
    }
    else
    {

        for (int i = 0, n = strlen(key); i < n; i++)
        {
            char c = key[i];
            if (isalpha(c))
            {
                letters++;
            }
        }
        if (letters > 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            // printf("Success!\n");
            // printf("%s\n", argv[1]);
            plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
        }
    }


    int key_int = atoi(key);
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char check = plaintext[i];

        //preserve lowercase
        if (islower(check))
        {
            //find alphabetical index
            int alph_index = (check - 97) + key_int;

            //calculate letter using cipher key
            int letter = (alph_index % 26) + 97;

            printf("%c", (char) letter);
        }
        else if (isupper(check))
        {
            //find alphabetical index
            int alph_index = (check - 65) + key_int;

            //calculate letter using cipher key
            int letter = (alph_index % 26) + 65;
            printf("%c", (char) letter);
        }
        else
        {
            printf("%c", check);
        }
    }
    printf("\n");
    return 0;
}