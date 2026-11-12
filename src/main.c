#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(void) {
    FILE* poam;
    char line[1000];
    char word[100] = "what";
    char* word2;
    char check = ' ';
    int count = 0;
    int check2= 0;
    int i;
    printf("%c",check);
    poam = fopen("src/APrayerformyDaughter.txt","r");
    printf("what word do you want to look for?\n");
    scanf("%s",&word);
    for(i = 0; word[i]; i++){
        word[i] = tolower(word[i]);
    }
    while (fgets(line,100,poam) != NULL) {
        i = 0;
        word2 = strtok(line,'a');
        printf("%s\n",line);
        printf("%s\n",word2);
        for(int i = 0; word2[i]; i++) 
        {
            word2[i] = tolower(word2[i]);
        }
        check2 = strcmp(word,word2);
        if (check2 == 0) 
        {
            count++;
        }
        while (line !=NULL) {
            while(i < strlen(word2))
            {
                word2[i] = tolower(word2[i]);
                i++;
                printf("%c",word2[i]);
            }
            check2 = strcmp(word,word2);
            printf("%d\n",check2);
            word2 = strtok(NULL,'a');
            if (check2 == 0) {
                count++;
            }
        }
    }
    printf("%s shows up %d times\n",word,count);
    return 0;
}

