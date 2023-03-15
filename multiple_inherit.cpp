/* Multiple Inheritance */

#include <iostream>
#include <cstring>

using namespace std;

class redeem {
protected:
    char s[25];
public:
    void getdata(char[]);
};

class tech {
protected:
    char k[25];
public:
    void getdata1(char[]);
};

class name : public redeem, public tech {
public:
    void display();
};

void redeem::getdata(char x[25]) { 
    cout << "Enter Redeem Tech Projects:" << endl;
    cin >> x;
    strcpy(s, x); /* strcpy string copy s and x values */
}

void tech::getdata1(char y[25]) {
    cout << "Enter Redeem Tech Websites:" << endl;
    cin >> y;
    strcpy(k, y); /* strcpy string copy k and y values */
}

void name::display() {
    cout << "Redeem Tech Websites are: " << k << endl;
    cout << "Redeem Tech Projects are: " << s << endl;
}

int main() {
    name n;
    char s[25], k[25];
    n.redeem::getdata(s);
    n.tech::getdata1(k);
    n.display();
    return 0;
}

/* For more information visit my website and leave a comment */
/* WEBSITE : https://sandeepkasturi.blogspot.com */
/* to install my softwares and Projects Visit my Store */
/* STORE LINK : "https://redeemstore.w3spaces.com" */
