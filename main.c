#include <stdio.h>

int main() {
    char text[] = "this is a test message";
    int key=24, n = 0,i=0;
    n = sizeof(text); // gets the amount of characters in original message
    char encrypt[n]; // creates array to store the encryped message
    printf("%d\n",n);
    while (i<n) {
        if (text[i]<123 && text[i]>96) { //changes lowercase into uppercase
            text[i]= text[i]-32;
        }

        if (text[i]<65 || text[i]>91) { //keeps value the same if it is not a letter
            encrypt[i] = text[i];
            i=i+1;
        }
        else {
    encrypt[i]= text[i] + key; 
}
        
 i=i+1;
}
printf("%s", encrypt);

    return 0;
}