#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base Class";
    }
};

class derivedClass : public baseClass
{
    public:
    void perkenalan()
    {
        cout << "Hallo saya function dari drivedClass"
    }
};

int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}