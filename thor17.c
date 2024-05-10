#include <stdio.h>


void main()
{
    char x;
    printf("Enter one charcter\n");
    scanf("%c", &x);
    void isVowel(char);
    isVowel(x);
}

void isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel\n", ch);
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);
}
