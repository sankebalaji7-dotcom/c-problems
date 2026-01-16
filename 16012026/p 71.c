#include <stdio.h>
#include <string.h>
int main() {
    int i;
   char str1[]="lisent";
   char str2[]="silent";

   if(strlen(str1) != strlen(str2)){
    printf("Not anagram\n");
     return 0;

   } 
     int freq1[256]={0};
     int freq2[256]={0};

     for(i=0;str1[i] != '\0';i++){
        freq1[str1[i]]++;
        freq2[str2[i]]++;

     }
     for(int i=0;i < 256;i++){
        if(freq1[i] != freq2[i]){
        printf("Not anagarm\n");
        
     }
     }
     printf("strings are anagrams");
    return 0;
}