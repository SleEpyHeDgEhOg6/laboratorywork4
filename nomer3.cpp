
#include <iostream>
#include <vector>
#include <random>
int ma(std::vector<int>& massive){
    int maxm = 0;
    for (int rt:massive){
        if (rt>maxm){
            maxm=rt;
        }
    }
    return maxm;
};





int argmax(std::vector<int>& massive){
    int m=ma(massive);
    int ind=0;
    for (int i=0;i<massive.size();++i){
        if(massive[i]==m){
            ind=i;
        }
    }
    return ind;
};

int main(){
    int mas=5;

    std::vector<int> l(mas);
    std::random_device rd;  // позволяет получить случайное целое число, которое мы использовали для выбора последовательности основного генератора mt19937
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<> dist(1, 100);  // диапазон случайных чисел от 1 до 100,uniform_int_distribution-озволяет генерировать равномерное целочисленное распределение

    // заполняем массив случайными числами
    for (int i = 0; i < mas; ++i) {
        l[i] = dist(gen);  
        std::cout << l[i] << " ";
    }
    std::cout<<" "<<std::endl;
    int len=l.size();
    if (len==0){
        std::cout<<"Массив пуст"<<-1<<std::endl;
    }
    else{
        int otvet=argmax(l);
        std::cout<<otvet<<std::endl;
    }
    return 0;
}
