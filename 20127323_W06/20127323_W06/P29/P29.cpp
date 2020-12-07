#include <iostream>

using namespace std;

int main()
{
    char a, b;
    cout << "Moi nguoi thu nhat nhap: "; cin >> a; a = toupper(a);
    cout << "Moi nguoi thu hai nhap: "; cin >> b; b = toupper(b);

    switch (a) {
    case 'R':
        if (b == 'S') cout << "Player 1 Wins"; 
        if (b == 'P') cout << "Player 2 Wins";
        if (b == 'R') cout << "Draw";
        break;
    case 'S':
        if (b == 'P') cout << "Player 1 Wins";
        if (b == 'R') cout << "Player 2 Wins";
        if (b == 'S') cout << "Draw";
        break;
    case 'P':
        if (b == 'R') cout << "Player 1 Wins";
        if (b == 'S') cout << "Player 2 Wins";
        if (b == 'P') cout << "Draw";
        break;

    }

}
