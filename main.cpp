#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
    int *b = new int[NELEMENTS]; // N_ELEMENTS helytelen

    std::cout << '1-100 ertekek duplazasa' // ; hiányzik, "-" helytelen
    for (int i = 0;) { // nincs befejezve a feltétel
        b[i] = i * 2;
    }

    for (int i = 0; i; i++) {   // range nincs megadva
        std::cout << "Ertek:"   // ; és érték hiányzik
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) { // , szerepel ; helyett
        atlag += b[i] // ; hiányzik
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
