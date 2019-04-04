#include <stdio.h>
int main(){
    int a, b, c, d, i;
printf("Choose what you would like to do today:\n");
printf("1. Encrypt a message with the rotational cipher\n");
printf("2. Encrypt a message with the substitution cipher\n");
printf("3. Decrypt a message in rotational cipher\n");
printf("4. Decrypt a message in substitution cipher\n");
scanf("%d", &i);
 if(i==1){
     printf("You chose to encrypt with rotational\n");    
 }
 else if(i==2){
     printf("You chose to encrypt with sustitution\n");
 }
 else if(i==3){
     printf("You chose to decipher a rotation\n");
 }
 else if(i==4){
     printf("You chose to decrypt a substitution\n");
 }
return 0;
}
