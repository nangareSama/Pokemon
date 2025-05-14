#include <iostream>
#include <string> // include for to_string
using namespace std;

void castSpell(int magicLevel)
{
    cout << "Casting spell with magic level: " << to_string(magicLevel) << endl;
}

void brewElixer(int &magicLevel){
    magicLevel += 10;
    castSpell(magicLevel);
}

void brewPotion(int magicLevel){
    magicLevel += 50;
    castSpell(magicLevel);
}

int main()
{
    int magicLevel = 30;
    brewElixer(magicLevel);  // Pass by reference: modifies original
    brewPotion(magicLevel);  // Pass by value: does not modify original
    cout << magicLevel;
    return 0;
}
