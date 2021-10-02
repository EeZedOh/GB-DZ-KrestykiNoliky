#include <iostream>

using namespace std;

char MatrixDraw[10] = { '0','1','2',
       '3','4','5',
       '6','7','8','9' };

int win();
void GamePole(string, string);

int win()
{
    if (MatrixDraw[1] == MatrixDraw[2] && MatrixDraw[2] == MatrixDraw[3])

        return 1;
    else if (MatrixDraw[4] == MatrixDraw[5] && MatrixDraw[5] == MatrixDraw[6])

        return 1;
    else if (MatrixDraw[7] == MatrixDraw[8] && MatrixDraw[8] == MatrixDraw[9])

        return 1;
    else if (MatrixDraw[1] == MatrixDraw[4] && MatrixDraw[4] == MatrixDraw[7])

        return 1;
    else if (MatrixDraw[2] == MatrixDraw[5] && MatrixDraw[5] == MatrixDraw[8])

        return 1;
    else if (MatrixDraw[3] == MatrixDraw[6] && MatrixDraw[6] == MatrixDraw[9])

        return 1;
    else if (MatrixDraw[1] == MatrixDraw[5] && MatrixDraw[5] == MatrixDraw[9])

        return 1;
    else if (MatrixDraw[3] == MatrixDraw[5] && MatrixDraw[5] == MatrixDraw[7])

        return 1;
    else if (MatrixDraw[1] != '1' && MatrixDraw[2] != '2' && MatrixDraw[3] != '3'
        && MatrixDraw[4] != '4' && MatrixDraw[5] != '5' && MatrixDraw[6] != '6'


        && MatrixDraw[7] != '7' && MatrixDraw[8] != '8' && MatrixDraw[9] != '9')

        return 0;
    else
        return -1;
}

void GamePole(string name1, string name2)
{
    system("cls");

    string n1 = name1;
    string n2 = name2;

    cout << n1 << "( X )" << "========" << n2 << " (O)\n\n";

    cout << "     ||     ||     \n";
    cout << "  " << MatrixDraw[1] << "  ||  " << MatrixDraw[2] << "  ||  " << MatrixDraw[3] << endl;

    cout << "=====||=====||=====\n";
    cout << "     ||     ||     \n";

    cout << "  " << MatrixDraw[4] << "  ||  " << MatrixDraw[5] << "  ||  " << MatrixDraw[6] << endl;

    cout << "=====||=====||=====\n";
    cout << "     ||     ||     \n";

    cout << "  " << MatrixDraw[7] << "  ||  " << MatrixDraw[8] << "  ||  " << MatrixDraw[9] << endl;

    cout << "     ||     ||     \n\n";
}

int main()
{
    int Player = 1, i, choice;
    string n1;
    string n2;

    cout << "First Gamer Name: ";
    cin >> n1;

    cout << "\nSecond Gamer Name: ";
    cin >> n2;

    char mark;

    do
    {
        GamePole(n1, n2);
        Player = (Player % 2) ? 1 : 2;

        if (Player == 1)
        {
            cout << n1 << " Your Turn, Enter a Number:  ";
            cin >> choice;
        }
        else
        {
            cout << n2 << " Your Turn, Enter a Number:  ";
            cin >> choice;
        }


        mark = (Player == 1) ? 'X' : 'O';

        if (choice == 1 && MatrixDraw[1] == '1')

            MatrixDraw[1] = mark;
        else if (choice == 2 && MatrixDraw[2] == '2')

            MatrixDraw[2] = mark;
        else if (choice == 3 && MatrixDraw[3] == '3')

            MatrixDraw[3] = mark;
        else if (choice == 4 && MatrixDraw[4] == '4')

            MatrixDraw[4] = mark;
        else if (choice == 5 && MatrixDraw[5] == '5')

            MatrixDraw[5] = mark;
        else if (choice == 6 && MatrixDraw[6] == '6')

            MatrixDraw[6] = mark;
        else if (choice == 7 && MatrixDraw[7] == '7')

            MatrixDraw[7] = mark;
        else if (choice == 8 && MatrixDraw[8] == '8')

            MatrixDraw[8] = mark;
        else if (choice == 9 && MatrixDraw[9] == '9')

            MatrixDraw[9] = mark;
        else
        {
            cout << "\nInvalid Choice Try Again ";
            Player--;
            cin.ignore();
            cin.get();
        }
        i = win();
        Player++;
    } while (i == -1);
    GamePole(n1, n2);
    if (i == 1)
    {
        cout << "\n=============================\n";
        cout << "\a" << n1 << " Winner \n";
        cout << "=============================\n";
    }
    else
    {
        cout << "\n=============================\n";
        cout << "\a Draw \n";
        cout << "=============================\n";
    }

    cin.ignore();
    cin.get();
    return 0;
}