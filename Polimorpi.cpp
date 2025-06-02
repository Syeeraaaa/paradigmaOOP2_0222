#include <iostream>
using namespace std;

class seseorang
{
    public:
    virtual void pesan()
    {
        cout << "Pesan dari seseoarang" << endl;
    }
};

class joko : public seseorang
{
   
};
