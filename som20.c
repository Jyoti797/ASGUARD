#include <stdio.h>
#include <string.h>

void main()
{
    char s1[] = "Abhiram";
    char s2[] = "Riteek";
    char s3[] = "Jashobanta";
    char s4[] = "Abhiram";
    printf("After comparing s1 and s2 returned is %d\n", strcmp(s1, s2));
    printf("After comparing s2 and s3 returned is %d\n", strcmp(s2, s3));
    printf("After comparing s1 and s4 returned is %d\n", strcmp(s1, s4));
}
// Here ASCII value of 'A of s1 is less than ASCII value of 'R' of s2,Hence strcmp() returned negative value
// ASCII value of 'R' of s2 is greater than ASCII value of 'J' of s2,Hence strcmp() returned a positive value
// Since ASCII values of all the charcters of s1 and s4 is same,Hence strcmp() returned 0