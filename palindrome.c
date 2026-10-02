#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1; // Get the index of the last character

    // Loop until the two pointers meet in the middle
    while (left < right) {
        // If characters don't match, it's not a palindrome
        if (str[left] != str[right]) {
            return 0; // Return 0 (False)
        }
        
        // Move pointers inward
        left++;
        right--;
    }
    
    return 1; // Return 1 (True) if the loop finishes without a mismatch
}

int main() {
    // Create a character array (string) to store the user's input
    // We set the size to 100 to safely hold a word up to 99 characters long
    char word[100];

    // 1. Prompt the user
    printf("Enter a word to check if it is a palindrome: ");

    // 2. Take the input
    // %99s ensures we don't read more characters than our array can hold
    scanf("%99s", word);

    // 3. Call our function and check the result
    if (isPalindrome(word)) {
        printf("\"%s\" is a palindrome.\n", word);
    } else {
        printf("\"%s\" is not a palindrome.\n", word);
    }

    return 0;
}