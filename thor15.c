#include <stdio.h>
// WAP to enter a charcter & display wheather its a vowel or not
void main()
{
    char x;
    printf("Enter one charcter\n");
    scanf("%c", &x);
    void isUpper(char);
    void isVowel(char);
    isUpper(x);
    isVowel(x);
}

void isUpper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase Charcter\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase Charcter\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
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
