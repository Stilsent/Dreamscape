//Найти все элементы, содержащие цифруу 5 и вывести их
#include  <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    int a[8];

    cout << "Введите 8 чисел:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    cout << "\nЧисла, содержащие цифру 5: \n";
    for (int i = 0; i < 8; i++) {
        if (((((a[i] % 10 == 5) || ((a[i] / 10) % 10 == 5) || ((a[i] / 100) % 10 == 5) || ((a[i] / 1000) % 10 == 5) || ((a[i] / 10000) % 10 == 5))))) {
            cout << a[i] << " ";
        }
    }
    system("pause");
    return 0;
}