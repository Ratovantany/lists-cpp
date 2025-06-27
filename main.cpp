#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> virkne1;
    vector<int> virkne2;
    int x, y;

    // pirmas virknes ievade jajajajaja
    while (true) {
        cin >> x;
        // cikls tiek apturēts uzreiz kā lietotājs ievada 1
        if (x == 0)
            break;

        if (count(begin(virkne1), end(virkne1), x) == 0)
            virkne1.push_back(x);
    }

    //otras virknes ievade
    while (true) {
        cin >> y;
        // cikls tiek apturēts uzreiz kā lietotājs ievada 1
        if (y == 0)
            break;

        if (count(begin(virkne2), end(virkne2), y) == 0)
            virkne2.push_back(y);
    }

    //Elementi, kas nav otrajā virknē
    for (auto n : virkne1) { // dinamiska masiva elementu parcilasanai - auto
        bool found = false; //nepieciesams elementu atrašanai

            // cikls kurs ņem vērā virknes 2 vērtības salīdzinot tās ar virkne1
        for (const auto& element : virkne2) {
            if (element == n) { //pārbauda vai elements ir vienāds ar virknes elementa vērtību
                found = true;
                break;
            }
        }

        if (!found) {
            cout << n << "\n";
        }
    }

    return 0;
}
