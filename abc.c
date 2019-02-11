#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void decrypt(int n, char arr[])
{
      int i;
     // int n;
    for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = (arr[i] - n);
      }
}

void encrypt(int n, char arr[])
{
      int i;
    // int n;
      for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = (arr[i] + n);
      }
}

int main()
{
      char text[100];	
     // int ch;
      int n;
      printf("Enter the value of n:");
      scanf("%d",&n);
      printf("Enter a Plain text::\t");
      scanf("%s", text);
      printf("\nPassword:\t%s\n",text);
      encrypt(n, text);
      printf("\nEncrypted text:\t%s\n", text);
      decrypt(n, text);
      printf("\nDecrypted text:\t%s\n", text);
      return 0;
}
