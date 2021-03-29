//Encrypt and Decrypt string
#include<stdio.h> 

// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }

void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Nsvobol";
    decrypt(c);
    // encrypt(c);
    // printf("Encrypted string is : %s\n", c);
    printf("Decrypted string is : %s\n", c);
    return 0;
}