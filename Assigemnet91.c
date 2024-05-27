#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

/*In this program, the string entered by the user is stored in str.

Then, the user is asked to enter the character whose frequency is to be found. This is stored in variable ch.

Then, a for loop is used to iterate over characters of the string. In each iteration, if the character in the string is equal to the ch, count is increased by 1.

Finally, the frequency stored in the count variable is printed.*/
