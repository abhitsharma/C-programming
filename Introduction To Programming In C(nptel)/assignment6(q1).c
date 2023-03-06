#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char s[MAX_LEN + 1], t[MAX_LEN + 1];
    int count[26] = {0}, i, match_count = 0;
    scanf("%s %s", s, t);
    
    if (strlen(s) != strlen(t)) { // If the lengths are not equal, they cannot be anagrams
        printf("-1");
        return 0;
    }

    // Count the frequency of characters in s
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Check if each character in t matches with s and decrease the count accordingly
    for (i = 0; t[i] != '\0'; i++) {
        if (count[t[i] - 'a'] == 0) { // If the character is not present in s, they cannot be anagrams
            printf("-1");
            return 0;
        }
        count[t[i] - 'a']--;
        if (s[i] == t[i]) { // If the characters match, increase the match count
            match_count++;
        }
    }

    printf("%d", match_count);
    return 0;
}

