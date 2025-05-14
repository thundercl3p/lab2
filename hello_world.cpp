// Простая программа, которая приветствует пользователя
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";  // Запрос ввода пользователя
    std::cin >> name;                  // Чтение ввода пользователя
    std::cout << "Hello world from " << name << std::endl;  // Вывод приветствия
    return 0;
}
