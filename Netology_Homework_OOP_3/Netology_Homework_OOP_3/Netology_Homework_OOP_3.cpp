#include <iostream>

using namespace std;

class figure {
public:
    figure():sideCount(0), figureName("Фигура") {}
    
    int getSideCount() {
        return sideCount;
    }

    string getName() {
        return figureName;
    }
protected:
    int sideCount = 0;
    string figureName = "";

    figure(int _sideCount, string _figureName) : sideCount(_sideCount), figureName(_figureName) {}
};

class triangle : public figure {
public:
    triangle() : figure(3, "Треугольник"){}
};

class quadrangle : public figure {
public:
    quadrangle(): figure(4, "Квадрат") {}
};

int main(){
    setlocale(LC_ALL, "Russian");

    figure fig;
    triangle tri;
    quadrangle qua;

    cout << "Колличество сторон:\n";

    cout << fig.getName() << ": " << fig.getSideCount() << endl;
    cout << tri.getName() << ": " << tri.getSideCount() << endl;
    cout << qua.getName() << ": " << qua.getSideCount() << endl;
}