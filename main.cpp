#include <iostream>

using namespace std;

int main()
{
    string texto;
    cout << "========================================" <<endl;
    cout << "| INGRESE UN NUEVO TEXTO PARA CIFRARLO: |" << endl;
    cout << "========================================" <<endl;

    getline(cin, texto);
    for(int i = 0; i < texto.length(); i++)
    {
        if (texto[i] == ' ')
        {
            texto[i] = ' ';
        }
        else if (texto[i] == 'x')
        {
            texto[i] = 'a';
        }
        else if (texto[i] == 'X')
        {
            texto[i] = 'A';
        }
        else if (texto[i] == 'y')
        {
            texto[i] = 'b';
        }
        else if (texto[i] == 'Y')
        {
            texto[i] = 'B';
        }
        else if (texto[i] == 'z')
        {
            texto[i] = 'c';
        }
        else if (texto[i] == 'Z')
        {
            texto[i] = 'C';
        }
        else
        {
        texto[i] = texto[i] + 1;
        }
    }
    cout<<endl;
    cout << "============================" <<endl;
    cout << "|      MENSAJE CIFRADO     |" <<"--------->  " <<texto<<endl;
    cout << "============================" <<endl;
    return 0;
}
