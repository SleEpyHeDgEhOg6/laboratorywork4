#include <iostream>
#include <vector>
#include <random>

void sort(std::vector<float>& massive) { //Пузырьковая сортировка
    int len = massive.size();
    for (int i = 0; i < len - 1; ++i) {
        bool newmassive = false;
        for (int p = 0; p < len - 1 - i; ++p) {
            if (massive[p] < massive[p + 1]) {
                float rt = massive[p];
                massive[p] = massive[p + 1];
                massive[p + 1] = rt;
                newmassive = true;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int mas = 5;

    std::vector<float> l(mas);
    std::random_device rd;  // позволяет получить случайное целое число, которое мы использовали для выбора последовательности основного генератора mt19937
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);  // диапазон случайных чисел от 1 до 100,uniform_int_distribution-озволяет генерировать равномерное целочисленное распределение

    // заполняем массив случайными числами
    for (int i = 0; i < mas; ++i) {
        l[i] = dist(gen);
        std::cout << l[i] << " ";
    }
    std::cout << " " << std::endl;
    sort(l);
    
    for (float i : l) {
        std::cout << i << " ";
    }
    std::cout << " Отсортированный массив " << std::endl;
    return 0;
}
