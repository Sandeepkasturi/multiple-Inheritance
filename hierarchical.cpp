/* Hierarchial Inheritance */
#include <iostream>
#include<cstring>

using namespace std;

/* Base class */
class redeem {
protected:
    char s[25];
public:
    void getdata(char[]);
};

/* Derived class 1 */
class tech : public redeem {
protected:
    char k[25];
public:
    void getdata1(char[]);
};

/* Derived class 2 */
class finance : public redeem {
protected:
    char j[25];
public:
    void getdata2(char[]);
};

void redeem::getdata(char x[25]) { 
    cout << "Enter Redeem Tech Projects:" << endl;
    cin >> x;
    strcpy(s, x);
}

void tech::getdata1(char y[25]) {
    cout << "Enter Redeem Tech Websites:" << endl;
    cin >> y;
    strcpy(k, y);
}

void finance::getdata2(char z[25]) {
    cout << "Enter Redeem Tech Financials:" << endl;
    cin >> z;
    strcpy(j, z);
}

int main() {
    tech t;
    finance f;
    char s[25], k[25], j[25];
    t.getdata(s);
    t.getdata1(k);
    f.getdata(j);
    f.display();
    return 0;
}
