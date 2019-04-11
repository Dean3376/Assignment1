#include <stdio.h>

int main() {
    char text[] = "zzzzzzzzz";
    int key=4, n = 0,i=0;
    n = sizeof(text); // gets the amount of characters in original message  
    char encrypt[n]; // creates array to store the encryped message
    printf("%d\n",n);
    while (i<n) {
        if ((text[i]<123) && (text[i]>96)) { //changes lowercase into uppercase
            text[i]= text[i]-32;
        }

        if ((text[i]>64) && (text[i]<91)) { //keeps value the same if it is not a letter
            encrypt[i]= text[i] + key; 
            if (encrypt[i]>91) {
            encrypt[i]=encrypt[i]-26; // put letter to proper value the ascii value goes outside captial letters
            }

        }
        else {
    encrypt[i] = text[i];
             }
        
 i=i+1;
}
printf("this is the encrypted string: %s", encrypt); //prints the encrypted message

    return 0;
}