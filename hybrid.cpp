/* Hybrid Inheritance */

#include <iostream>
#include <cstring>

using namespace std;

/* Base class */
class redeem {
protected:
    char s[25];
public:
    void getdata(char[]);
};

/* Derived class 1 using virtual inheritance */
class tech : virtual public redeem {
protected:
    char k[25];
public:
    void getdata1(char[]);
};

/* Derived class 2 using normal inheritance */
class name : public redeem {
protected:
    char n[25];
public:
    void getdata2(char[]);
    void display();
};

/* Derived class 3 using both virtual and normal inheritance */
class sales : virtual public redeem {
protected:
   
int price;
public:
void getdata3(int);
void display();
};

void redeem::getdata(char str[]) {
strcpy(s, str);
}

void tech::getdata1(char str[]) {
strcpy(k, str);
}

void name::getdata2(char str[]) {
strcpy(n, str);
}

void sales::getdata3(int p) {
price = p;
}

void name::display() {
cout << "Name: " << n << endl;
cout << "Coupon Code: " << s << endl;
}

void sales::display() {
cout << "Price: " << price << endl;
cout << "Coupon Code: " << s << endl;
}

int main() {
name obj1;
tech obj2;
sales obj3;
obj1.getdata("RedeemStore");
obj1.getdata2("SandeepKasturi");
obj1.display();

obj2.getdata("RedeemTech");
obj2.getdata1("sandeepkasturi.blogspot.com");
obj1.display();

obj3.getdata("RT");
obj3.getdata3(500);
obj3.display();

return 0;
}
