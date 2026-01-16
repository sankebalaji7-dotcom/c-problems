#include <stdio.h>
#include<string.h>

 int main(){
     char str[]="c is fun";
     char* word=strtok(str," ");

           
     
         char smallest[20],largest[20];

         strcpy(smallest,word);
           strcpy(largest,word);

         while(word !=NULL){
         if ( strlen(word) < strlen(smallest)){
            strcpy(smallest,word);
       }
         if (strlen(word)>strlen(largest)){
            strcpy(largest,word);
        }
          word=strtok(NULL," ");
       }
         printf("%s\n",smallest);
         printf("%s\n",largest);
          return 0;

 }