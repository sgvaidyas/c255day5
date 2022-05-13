#include <conio.h>
#include <iostream>
int main()
{
    int rowSize;
    int colSize;
    int index;
    int area;
    std::cin >> rowSize >> colSize >> index;
    area = rowSize * colSize;
    int c = 0;
    do {
        std::cout << "index: " << index << std::endl;
        for (int i = 0; i < area; i++) {
            if (i % rowSize == 0) {
                std::cout << std::endl;
            }
            if (i == index) {
                std::cout << "X";
            }
            else {
                std::cout << "O";
            }
        }
        std::cout << std::endl;
        c = _getch();
        if (c == 0xE0)
            c = _getch();
        switch (c) {
        case 72:
            if (index - rowSize >= 0) {
                std::cout << "Up\n";
                index -= rowSize;
            }
            else {
                std::cout << "Cant go up\n";
            }
            break;
        case 80:
            if (index + rowSize < area) {
                std::cout << "Down\n";
                index += rowSize;
            }
            else {
                std::cout << "Can't go down\n";
            }
            break;
        case 75:
            if (index % rowSize == 0) {
                std::cout << "Can't go left\n";
            }
            else {
                std::cout << "Left\n";
                index--;
            }
            break;
        case 77:
            if ((index + 1) % rowSize == 0) {
                std::cout << "Can't go right\n";
            }
            else {
                std::cout << "Right\n";
                index++;
            }
            break;
        default:
            std::cout << "null\n";
            break;
        }
    } while (c != 0x1B /* esc */);
}




