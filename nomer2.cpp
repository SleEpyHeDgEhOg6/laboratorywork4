#include <iostream>
#include <vector>
#include <random>

std::pair<float, float> minMax(std::vector<float>& massive){
    float masmax=0;
    float masmin=10000;
    for(float& rt:massive){
        if(rt>masmax){
            masmax=rt;
        }
        if (rt < masmin) {
            masmin = rt;
        }
    }
    return std::make_pair(masmin, masmax);
    
};
int main(){
    setlocale(LC_ALL, "RU");
    int mas=5;

    std::vector<float> l(mas);
    std::random_device rd;  // позволяет получить случайное целое число, которое мы использовали для выбора последовательности основного генератора mt19937
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);  // диапазон случайных чисел от 1 до 100,uniform_int_distribution-озволяет генерировать равномерное целочисленное распределение

    // заполняем массив случайными числами
    for (int i = 0; i < mas; ++i) {
        l[i] = dist(gen);
        std::cout << l[i] << " ";
    }

    auto ot = minMax(l); //auto-компилятор сам определяет тип переменной 
    std::cout << ot.first << " - минимальный элемент" << std::endl;
    std::cout << ot.second << " - максимальный элемент" << std::endl;
}
