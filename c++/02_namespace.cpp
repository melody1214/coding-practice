#include <iostream>
#include <string>

using namespace std;

namespace triangle
{
    double base;
    double height;

    double Area(double b, double h)
    {
        return b * h;
    }
}

namespace rectangle
{
    double width;
    double height;

    double Area(double w, double h)
    {
        return w * h;
    }
}

namespace square
{
    double length;

    double Area(double l)
    {
        return l * l;
    }
}

namespace circle
{
    const double PI = 3.14;
    double radius;

    double Area(double r)
    {
        return PI * r * r;
    }
}

using namespace triangle;
using namespace rectangle;
using namespace square;
using namespace circle;

int main()
{
    string shape;
    double area;

    cout << "면적을 구할 모양을 입력하세요." << endl;
    cout << "예) triangle, rectangle, sqaure, circle" << endl;
    cin >> shape;

    if (shape == "triangle") {
        cout << "밑변의 길이를 입력하세요: ";
        cin >> triangle::base;
        cout << "높이를 입력하세요: ";
        cin >> triangle::height;

        area = triangle::Area(triangle::base, triangle::height);

        cout << "삼각형의 면적은 " << area << " 입니다." << endl;
    }
    else if (shape == "rectangle") {
        cout << "너비를 입력하세요: ";
        cin >> rectangle::width;
        cout << "높이를 입력하세요: ";
        cin >> rectangle::height;

        area = rectangle::Area(rectangle::width, rectangle::height);

        cout << "직사각형의 면적은 " << area << " 입니다." << endl;
    }
    else if (shape == "square") {
        cout << "한 변의 길이를 입력하세요: ";
        cin >> square::length;

        area = square::Area(square::length);

        cout << "정사각형의 면적은 " << area << " 입니다." << endl;
    }
    else if (shape == "circle") {
        cout << "반지름의 길이를 입력하세요: ";
        cin >> circle::radius;

        area = circle::Area(circle::radius);

        cout << "원의 면적은 " << area << " 입니다." << endl;
    }
    else {
        cout << "잘못된 입력입니다." << endl;
    }

    return 0;
}