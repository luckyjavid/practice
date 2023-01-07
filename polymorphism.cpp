#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw() {
            cout << "Drawing...";
        }
};
//inherit from Shape
class Rectangle: public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {
            cout <<w<<"x"<<h<<endl;
        };
};

int main() {
    int x, y;
    cin>>x>>y;
    Rectangle d(x, y);
    //call the draw() method
    d.draw();
}
