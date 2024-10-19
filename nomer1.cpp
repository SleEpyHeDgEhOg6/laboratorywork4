#include <iostream>
#include <vector>
#include <random>
float mean(std::vector<float>& chisla){
    float summa=0;
    for (float& rt:chisla){
        summa+=rt;
    }
    return summa/chisla.size();
};
int main(){
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
	std::cout<<" "<<std::endl; 
    float otvet=mean(l);
    std::cout<<"Среднее арифметическое массива = "<<otvet<<std::endl;
    return 0;
    
}
