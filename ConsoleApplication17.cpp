
#include <iostream>
void chekaem(int x) {
    if (x % 10 == 1) {
        std::cout << x << " " << "Copeyka" << std::endl;
    }
    if ((x % 10 == 2) || (x % 10 == 3) || (x % 10 == 4)) {
        if ((x != 11) && (x != 12) && (x != 13) && (x != 14)) {

            std::cout << x << " " << "Copeyki" << std::endl;
        }
        else {
            std::cout << x << " " << "Copeek" << std::endl;
        }
    }
    if ((x % 10 == 0) || (x % 10 == 5) || (x % 10 == 6) || (x % 10 == 7) || (x % 10 == 8) || (x % 10 == 9)) {
        std::cout << x << " " << "Copeek" << std::endl;
    }
}

int main(){
    int x;
    std::cout << "Vvedite kolichestvo kopeek\n";
    std::cin >> x;
    chekaem(x);
    return 0;

}

