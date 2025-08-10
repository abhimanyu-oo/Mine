#include <iostream>
using namespace std;
void New();
int main() {
    auto lang = "C++";
    cout << "Hello and welcome to " << lang << endl;

    for (int i = 1; i <= 5; i++)
        {
        cout << "i = " << i << endl;
    }
    cout<<endl;
    New();
    return 0;
}
