#ifndef CPP_STRING_H
#define CPP_STRING_H


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


auto count_vowels(const std::string & str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
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

auto custom_serach(const char * str, const char * substr) {
    const char *strPtr = str.c_str(); // wskaźnik na pierwszy znak w stringu
    const char *substrPtr = substr.c_str(); // wskaźnik na pierwszy znak w podstringu
    int index = 0; // indeks aktualnie sprawdzanego znaku w stringu

    while (*strPtr != '\0') { 
        const char *tempStrPtr = strPtr; 
        while (*tempStrPtr == *substrPtr && *substrPtr != '\0') { 
            tempStrPtr++;
            substrPtr++; 
        }
        if (*substrPtr == '\0') { 
            return index;
        }
        substrPtr = substr.c_str(); 
        strPtr++; 
        index++; 
    }
    return -1; 
}


}

#endif /* CPP_STRING_H */
