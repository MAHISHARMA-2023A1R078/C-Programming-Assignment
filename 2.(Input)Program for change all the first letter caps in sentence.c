//Title of program
//Program for change all the first letter caps in sentence
#include <stdio.h>
//function heading
int main() {
   //variable(str) declaration
   char str[100];
   //output statement
   printf("Enter a sentence:");
   //input statement 
   scanf("%[^\n]s",str);
   //condition for change all the first letter caps in sentence 
   for (int i = 0; str[i] != '\0'; i++) {
   if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] - 'A' + 'a';
            }
        }
    }
    //output statement 
    printf("Modified sentence: %s\n", str);
    return 0;
}
