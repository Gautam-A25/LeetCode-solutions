class Solution {
public:
    bool isValid(string word) {
        int vowels = 0, consonants = 0;

        for (char c : word) {
            if (!isalnum(c)) return false;

            char lower = tolower(c);
            if (isdigit(c)) continue;
            else if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }

        return word.length() >= 3 && vowels > 0 && consonants > 0;
    }
};
