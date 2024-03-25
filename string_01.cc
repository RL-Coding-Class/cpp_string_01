#include "string_01.h"

auto main() {
    std::string input;

    std::cout << "Podaj dowolny string: ";
    std::getline(std::cin, input);

    std::cout << "String od tyłu: " << reverse(input) << std::endl;

    std::cout << "String z pierwszymi literami słów zamienionymi na duże: " << first_to_upper(input) << std::endl;

    std::cout << "Liczba samogłosek w stringu: " << count_vowels(input) << std::endl;

    std::cout << "Suma cyfr w stringu: " << sum_digits(input) << std::endl;

    std::cout << "Podaj substring do wyszukania w stringu: ";
    std::string substr;
    std::cin >> substr;
    int position = search_substr(input, substr);
    if (position != -1) {
        std::cout << "Podstring '" << substr << "' znaleziony na pozycji " << position << " w stringu." << std::endl;
    } else {
        std::cout << "Podstring '" << substr << "' nie został znaleziony w stringu." << std::endl;
    }

    return 0;
}


