#include <iostream>

constexpr int N_ELEMENTS = 100;

/*
 *  mivel az N_ELEMENTS értéke 100, a fn-ek pedig 0-100-ig, kizárólag működnek,
 *  így valójában nem 1-100-ig duplázza az értékeket, hanem 0-99-ig.
 */

int main() {
    int *b = new int[N_ELEMENTS];

    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++) { 
        b[i] = i * 2; // <~~~~~ a hibát itt fogom javítani
    }

    for (int i = 0; i < N_ELEMENTS; i++) {
        std::cout << "Ertek:" << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
