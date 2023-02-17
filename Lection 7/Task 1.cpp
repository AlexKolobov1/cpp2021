#include <iostream>
#include <cstring>

using namespace std;
class Bucket 
{
public:
    void flush() {
        used = 0;
    }

    void fill(float v) {
        if (v < (volume - used))
        {
            used = used + v;
        }
        else { cout << "Error: bucket " << name << "can't hold this volume.\n"; }
    }

    float check() {
        float res = volume - used;
        return res;
    }

    string name;
    float volume = 0;
    float used = 0;

};

int main()
{
    Bucket vedro1;
    vedro1.volume = 12;
    vedro1.fill(3.6);
    cout << vedro1.check()<<"\n";
    vedro1.fill(9);
    cout << vedro1.check() << "\n";

}
}