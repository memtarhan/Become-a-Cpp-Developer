#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // ifstream inputFileA;
    // ifstream inputFileB;
    // string supply[10];
    // int qty[10];

    // inputFileA.open("sample_1.txt");
    // if (!inputFileA.fail())
    // {
    //     int i = 0;
    //     while (inputFileA >> supply[i] >> qty[i])
    //     {
    //         cout << supply[i] << " " << qty[i] << endl;
    //         i++;
    //     }
    // }

    // inputFileA.close();

    ifstream inStream;
    inStream.open("passphrase.txt");

    string passphrase;

    if (!inStream.fail())
    {
        while (inStream >> passphrase)
        {
            cout << "The pass phrase is: " << passphrase << endl;
        }
    }
    inStream.close();

    return 0;
}