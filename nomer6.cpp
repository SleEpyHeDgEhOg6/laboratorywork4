#include <iostream>
#include<string>
#include <vector>


std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    std::string newstring = str;
    int count = 0; 

    while ((count = newstring.find(old, count)) != std::string::npos) { //первый параметр,то что ищем,второй параметр - индекс в строке,с которого начинаем поиск 
        newstring.replace(count, old.length(), new_string); //count-откуда начать замену,old.length()-количество заменяемых символов,new_string-на что надо заменить
        count += new_string.length(); //проходим дальше по строке 
    }

    return newstring;
}

int main() {
    std::string original = "Can you can a can as a canner can can a can?";
    std::string newString = replace(original, "can", "cAN");

    std::cout << newString << std::endl; 
    return 0;
}
