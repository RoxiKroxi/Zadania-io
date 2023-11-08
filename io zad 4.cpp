#include <iostream>
#include <string>
#include <algorithm>

struct Produkt {
    std::string nazwa;
    float cena;
};

bool porownaj(const Produkt& produkt1, const Produkt& produkt2) {
    return produkt1.cena > produkt2.cena;
}

int main() {
    Produkt produkty[10];

    for (int i = 0; i < 10; ++i) {
        std::cout << "Podaj nazwe produktu " << i + 1 << ": ";
        std::cin >> produkty[i].nazwa;
        std::cout << "Podaj cene produktu " << i + 1 << ": ";
        std::cin >> produkty[i].cena;
    }

    std::sort(produkty, produkty + 10, porownaj);

    std::cout << "Produkty od najdrozszych do najtanszych:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "Nazwa: " << produkty[i].nazwa << ", Cena: " << produkty[i].cena << std::endl;
    }

    return 0;
}

