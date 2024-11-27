//finding all the permutations
#include<stdio.h>
#include<string.h>

void my_new_line_char_remove(char string[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        if(string[i] == '\n') {
            string[i] = '\0';
        }
    }
}

void reverse(char string[], int start, int end) {
    while (start < end) {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}

void generate_permutations(char string[], int length) {
    int total_permutations = 1;
    int i;
    for ( i = 1; i <= length; i++) {
        total_permutations *= i;
    }

    printf("All permutations of the string \"%s\" are as follows:\n", string);

    for ( i = 0; i < total_permutations; i++) {
        printf("%s\n", string);

        int j = length - 2;
        while (j >= 0 && string[j] >= string[j + 1]) {
            j--;
        }

        if (j >= 0) {
            int k = length - 1;
            while (string[k] <= string[j]) {
                k--;
            }

            char temp = string[j];
            string[j] = string[k];
            string[k] = temp;

            reverse(string, j + 1, length - 1);
        } else {
            break;
        }
    }
}

int main() {
    char string[50];
    printf("Enter the string: ");
    fgets(string, 50, stdin);
    
    my_new_line_char_remove(string, strlen(string));
    
    int length = strlen(string);

    generate_permutations(string, length);
    
    return 0;
}