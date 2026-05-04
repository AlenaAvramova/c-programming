//Write a function that finds the length of a string without using built-in functions
#include <stdio.h>


int stringLength(char*str)
{
    int count = 0;

    while(str[count] != '\0'){
            count ++;
    }
    return count;

}

int main()
{
    char myText[100];

    printf("Enter text: ");
    fgets(myText,sizeof(myText), stdin);

    int len = stringLength(myText);

        if (myText[len - 1] == '\n') {
        myText[len - 1] = '\0';
        len--;
        }

    printf("The length of the text is %d symbols", len);
    return 0;
}
