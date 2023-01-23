#include <iostream>
using namespace std;
int main()
{
    int i, x;
    char str[100];

    cout << "Please enter a String:" << endl;
    cin >> str;

    cout << "\n Please Choose the option given below:" << endl;
    cout << "1 = Encrypt the text string" << endl;
    cout << "2 = Decrypt the text string" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        for (i = 0; (i <= 100 && str[i] != '\0'); i++)
        {
            str[i] = str[i] + 4;
        }

        cout << "\nEncrypted string: " << str << endl;
        break;

    case 2:
        for (i = 0; (i <= 100 && str[i] != '\0'); i++)
        {
            str[i] = str[i] - 4;
        }

        cout << "\nDecrypted string: " << str << endl;
        break;

    default:
        cout << "\nInvalid Input !!!\n";
        break;
    }
    return 0;
}
