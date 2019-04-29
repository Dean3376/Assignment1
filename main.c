#include <stdio.h>
#include <stdlib.h>
char rotationencrypt(char letter1,int num1);
char rotationdecrypt(char letter1,int num1);
int main()  {
      int key=-24, n =0,i=0,option=3;
      int x=0;
      char text[] = "sdfdsfsfsdfsdfsdf";
      char subkey[]="qwertyuiopasdfghjklzxcvbnm";
    printf("Please select an option: \n 1-rotation encryption \n 2-rotation decryption ");
    n = sizeof(text); // gets the amount of characters in original message
    char message[n]; // creates array to store the encrypted message
        switch(option) {
        case 1:
            while (i<n) {
                message[i] = rotationencrypt( text[i], key);
                i=i+1;
            }
            printf("this is the encrypted string: %s", message); //prints the encrypted message
            i=0;
            break;
        case 2:
            while (i<n) {
                message[i] = rotationdecrypt( text[i], key);
                i=i+1;
            }
            printf("this is the encrypted string: %s", message); //prints the encrypted message
            i=0;
            break;
        case 3:
        printf("%s", message);
            while (i<n) {
                x=0;
                if((text[i]<123) && (text[i]>96)) { //changes lowercase into uppercase
           text[i]= text[i]-32;
                }
                if ((text[i]>64) && (text[i]<91)) {
                        while(x<26) {
                            if (text[i] ==x+65) {
                            message[i]=subkey[x];
                            x=27;
                            }
                        x=x+1;
                        }
            }

                else {
                    message[i]=text[i];
        
                }
                i=0;
                 printf("this is the encrypted string: %s", message);
        break;
            
        default:
            printf("invalid option \n");
    
            return 0;
        }
       
    }
}
char rotationencrypt(char letter1,int num1) {
    char letter;
        if ((letter1<123) && (letter1>96)) { //changes lowercase into uppercase
            letter1= letter1-32;
    }


        if ((letter1>64) && (letter1<91)) { //keeps value the same if it is not a letter
            letter= letter1 + num1;  
                if (letter>91) {
                    letter =  letter-26; // put letter to proper value the ascii value goes outside captial letters
                }

                else {
                        if (letter<65) {
                            letter= letter+26;
                        }
                            }
        }

            else {
                letter = letter1;
             }

  

      return letter;
    
}
char rotationdecrypt(char letter1,int num1) {
    char letter;
        if ((letter1<123) && (letter1>96)) { //changes lowercase into uppercase
            letter1= letter1-32;
        }


        if ((letter1>64) && (letter1<91)) { //keeps value the same if it is not a letter
            letter= letter1 - num1;  
                if (letter>91) {
                    letter =  letter-26; // put letter to proper value the ascii value goes outside captial letters
                }

                else {
                        if (letter<65) {
                            letter= letter+26;
                        }
                            }
        }

            else {
                letter = letter1;
             }

  

      return letter;
    
 }
