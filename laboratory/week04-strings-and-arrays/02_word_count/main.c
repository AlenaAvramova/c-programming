//Write a program that finds the number of words in a string.
#include <stdio.h>
int countWords(char*str){
    int count = 0;
    int i = 0;
    int inWord = 0;

    while (str[i] != '\0'){
            if (str[i] == ' ' || str[i] == '\n' || str[i] =='\t'){
                inWord = 0;
            }
            else if(inWord == 0){
                    inWord = 1;
                count++;
            }
            i++;
    }
    return count;
}

int main()
{
    char text[200];

    printf("Enter a sentence: \n");

    fgets(text, sizeof(text), stdin);

    int words = countWords(text);
    printf("Number of words in the sentence are %d \n", words);

    return 0;
}
