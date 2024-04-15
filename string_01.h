#ifndef CPP_STRING_H
#define CPP_STRING_H

#include <iostream>
#include <string>
namespace string_toys {
    
auto reverse(const std::string & str) {
    std::string reversedStr; 
for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    return reversedStr;
}

void printReversedString(const std::string &str) {
    std::cout << reverse(str) << std::endl;
}


auto first_to_upper(const std::string & str) {
    std::string result = str; 
    bool newWord = true; // czy na początku nowego słowa

    for (size_t i = 0; i < result.length(); ++i) {
        if (std::isspace(result[i])) {
            newWord = true; // Jeśli spację, to ustawia flagę na true, bo znaleziono nowe słowo
        } else if (newWord) {
            result[i] = std::toupper(result[i]); // Zamienia pierwszą literę nowego słowa na dużą literę
            newWord = false; // Ustawia flagę na false, aby kolejne litery w tym słowie nie były zamieniane
        }
    }

    return result;
}


auto count_vowels(const std::string & str) -> int {
    char vowels_lower[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    int counter = 0;
    for(char str_el : str) {
        for(char vowel_char : vowels_lower) {
            std::cout << str_el << std::endl;
            if(str_el == vowel_char || str_el == (vowel_char - 32)) {
                counter++;
            }
        }
    }
    return counter;
}

auto sum_digits(const std::string & str) {
    int sum = 0;

    for (char c : str) {
        if (std::isdigit(c)) {
            sum += c - '0';
        }
    }

    return sum;
}  

auto search_substr(const std::string & str, const std::string & substr) {
    size_t pos = str.find(substr); 

    if (pos != std::string::npos) {
      
        return static_cast<int>(pos);
    } else {
        // Jeśli podstring nie został znaleziony, zwraca -1
        return -1;
    }
}

auto custom_search(const char *str, const char *substr) -> int
    {
        int pos = -1;
        const char *p = str;
        const char *q = substr;
        while (*p != '\0')
        {
            if (*p == *q)
            {
                const char *temp_p = p;
                const char *temp_q = q;
                while (*temp_p == *temp_q && *temp_p != '\0' && *temp_q != '\0')
                {
                    temp_p++;
                    temp_q++;
                }
                if (*temp_q == '\0')
                {
                    pos = p - str;
                    break;
                }
            }
            p++;
        }
        return pos;
    }
}

#endif /* CPP_STRING_H */
