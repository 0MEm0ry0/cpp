#include <iostream>

int n;

int main()
{
    std::cout << "������� �����:" << std::endl;
    std::cin >> n;
    // 0-� ���� ����� 0, 1-� - �������
    long int f0 = 0;
    long int f1 = 1;
    long int t;
    if (n < 0) {
        std::cout << "������������ ��������";
        return 0;
    }
    else if (n == 0) {
        std::cout << f0;
        return 0;
    }
    else if (n == 1) {
        std::cout << f1;
        return 0;
    }
    else {
        while (n > 1) {
            t = f0 + f1;
            f0 = f1;
            f1 = t;
            n -= 1;
        }
        std::cout << f1;
        return 0;
    }
}
