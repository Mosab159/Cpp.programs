#include <iostream>

using namespace std;
void sayhello();
void sayhelloname(string name);
float half(int num);
string sayGG();

int main()
{

    int x;
    string ss;

    sayhello();
    sayhelloname(ss);
    cout << half(x) << endl;
    cout << sayGG() << endl;

    return 0;
}

void sayhello()
{
    cout << "Hello!\n"
         << endl;
}

void sayhelloname(string name)
{
    cout << "entre the name: ";
    cin >> name;
    cout << "\nHello " << name << "!\n"
         << endl;
}

float half(int num)
{
    cout << "entre the number: ";
    cin >> num;
    cout << "\nhalf of the number is: ";
    return num / 2.f;
}

string sayGG()
{
    return "\nGG!";
}