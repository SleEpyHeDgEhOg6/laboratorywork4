#include <iostream>
#include <vector>
#include <random>

bool remove_first_negative_element(std::vector<int>& vec, int& removed_element) {
    int len = vec.size();
    for (int i = 0; i < len; ++i) {
        if (vec[i] < 0) {
            removed_element = vec[i];

            std::vector<int>newvec;
            for (int p = 0; p < len; ++p) {
                if (p != i) {
                    newvec.push_back(vec[p]);
                }
            }
            return true;
        }
    }
    removed_element = 0;
    return false;
}
    

    int main() {
        setlocale(LC_ALL, "RU");
        int mas = 5;
        int removed_element = 0;
        std::vector<int> l(mas);
        std::random_device rd;  // позволяет получить случайное целое число, которое мы использовали для выбора последовательности основного генератора mt19937
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(-56, 56);  // диапазон случайных чисел от 1 до 100,uniform_int_distribution-озволяет генерировать равномерное целочисленное распределение

        // заполняем массив случайными числами
        for (int i = 0; i < mas; ++i) {
            l[i] = dist(gen);
            std::cout << l[i] << " ";
        }
        std::cout << " " << std::endl;
        bool ot = remove_first_negative_element(l, removed_element);
        if (ot == true) {
            std::cout << "Удаленный элемент - " << removed_element << std::endl;
        }
        if (ot == false) {
            std::cout << "В массиве не было отрицательного элемента " << removed_element << std::endl;
        }
        return 0;
    }
