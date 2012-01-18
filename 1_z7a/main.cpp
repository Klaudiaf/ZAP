#include <iostream>
#include <fstream>

using namespace std;

bool is_letter (char x)
{
    if (x>= 'A' && x <= 'Z')
    return true;
    else
    return false;
}

int main() {

    char x;

    cout << "WprowadŸ liczbe: ";
    cin >> x;

    cout << "Czy wprowadzono wielka litere? " << is_letter(x);

    return 0;
}
