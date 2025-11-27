#include <iostream>
#include <windows.h>

using namespace std;

struct product {
    char name[40];
    float price;
    int amount;
};

void show_product(product p)
{
    cout << "Назва товару: " << p.name << endl;
    cout << "Вартість: " << p.price << endl;
    cout << "Кількість: " << p.amount << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    SetConsoleOutputCP(1251);

    product shop[4] = {
        {"Хліб", 25.5, 10},
        {"Молоко", 38.0, 3},
        {"Цукор", 52.3, 2},
        {"Кава", 199.9, 1}
    };

    int X;
    cout << "Введіть X (граничну кількість): ";
    cin >> X;

    cout << "\n=== Нові дані про товари ===\n";

    for (int i = 0; i < 4; i++) {
        if (shop[i].amount <= X) {
            shop[i].price /= 2;
        }
        show_product(shop[i]);
    }

    system("pause");
    return 0;
}
