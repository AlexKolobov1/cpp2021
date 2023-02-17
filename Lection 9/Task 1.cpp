#include <iostream>
#include <cstring>

using namespace std;
class Str10
{
public:
    string name;

    char content[10] = "qwertyuio";

   void operator++();

};

void Str10::operator++ ()
{
   
    int l = strlen(content);
    char output[10]= "000000000";
    for (int i = 0; i < l; i++)
    {
        output[i] = char(int(content[i]) - 1);

    }
    strcpy_s(content, output);
}

int main()
{
    Str10 string1;
    cout << string1.content << "\n";
    ++string1;
    cout << string1.content << "\n";

}