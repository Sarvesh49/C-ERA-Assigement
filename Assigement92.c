#include <stdio.h>

int main() {
    char line[150];
    int vowels, consonant, digit, space;

    // Initialize all variables to 0
    vowels = consonant = digit = space = 0;

    // Get full line of string input
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    // Loop through each character of the string
    for (int i = 0; line[i] != '\0'; ++i) {
        // Convert character to lowercase
        line[i] = tolower(line[i]);

        // Check if the character is a vowel
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            ++vowels;
        }
        // If it is not a vowel and if it is an alphabet, it is a consonant
        else if ((line[i] >= 'a' && line[i] <= 'z')) {
            ++consonant;
        }
        // Check if the character is a digit
        else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        }
        // Check if the character is an empty space
        else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("White spaces: %d\n", space);

    return 0;
}
