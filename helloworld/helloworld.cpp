#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "HolyC", "World", "from", "VS Code", "and the HolyC extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
