#include <iostream>
using namespace std;

class Account {
    private:
        int balance=0;
        int interest=0;
    public:
        Account() {}
        Account(int a): balance(a) 
        {
            interest += balance/10;
        }
        int getTotal() {
            return balance+interest;
        }
        //your code goes here
        Account operator+ (Account &obj) {
           int newTotal =  this->balance + obj.balance; 
           Account acc(newTotal);
           return acc;
        }

};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Account a(n1);
    Account b(n2);
    Account res = a+b;

    cout << res.getTotal();
}