#include <iostream>


class Shape {
public:
    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};


class Circle : public Shape {
public:
    void displayCircle() {
        std::cout << "This is a circle." << std::endl;
    }
};

int main() {
    Circle circle;

    circle.display();
    circle.displayCircle();

    return 0;
}

