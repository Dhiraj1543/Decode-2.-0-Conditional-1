// 1.Take 2 integers input and print the greatest of them
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number 1 :";
    int n1;
    cin >> n1;
    cout << "Enter the number 2 :";
    int n2;
    cin >> n2;
    if (n1 > n2)
    {
        cout << n1 << "Number is greatest Number" << endl;
    }
    else
    {
        cout << n2 << " Number is greatest Number" << endl;
    }
    return 0;
}

// 2.Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Radius :";
    int r;
    cin >> r;
    float Area, circumference;
    Area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    if (Area > circumference)
    {
        cout << "Area Is Greater than circumference";
    }
    else
    {
        cout << "Circumference is Greater";
    }
    return 0;
}

// 3.Any year is input through the keyboard. Write a program to determine whether the year is a leap year or
// not. (Considering leap year occurs after every 4 years)
// Solution:-
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Year:";
    int year;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

// 4.Given the length and breadth of a rectangle, write a program to find whether numerically the area of the
// rectangle is greater than its perimeter.
// Solution:-
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Length :";
    int length;
    cin >> length;
    cout << "Enter the Breadth:";
    int breadth;
    cin >> breadth;
    float Area, perimeter;
    Area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (Area > perimeter)
    {
        cout << "Area is greater than perimeter";
    }
    else
    {
        cout << "Perimeter is Greater :";
    }
}

// 5.Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Solution:-
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Sides of triangle:";
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "The triangle is an equilateral triangle:";
    }
    else if (a == b || b == c)
    {
        cout << "The triangle is an isosceles triangle:";
    }
    else
    {
        cout << " The triangle is an Scalene triangle:";
    }
    return 0;
}

// 6. If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Solution:-
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Marks A:";
    int A;
    cin >> A;
    cout << "Enter the Marks B:";
    int B;
    cin >> B;
    cout << "Enter the Marks C:";
    int C;
    cin >> C;
    if (A < B && A < C)
    {
        cout << "A has the least marks";
    }
    else if (B < A && B < C)
    {
        cout << "B has the least marks";
    }
    else
    {
        cout << "C has the least marks";
    }
    return 0;
}

// 7.Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0)
// Solution:-
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the x value:";
    int x;
    cin >> x;
    cout << "Enter the y value:";
    int y;
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "Point lies on the origin";
    }
    else if (x > 0 && y >= 0)
    {
        cout << "Point lies on the x-axis";
    }
    else
    {
        cout << "Point lies on y-axis";
    }
}

// 8.Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.
// Solution;-
#include <iostream>
using namespace std;
int main()
{
    float x1, y1, x2, y2, x3, y3, slope1, slope2;
    cout << "Enter points (x1, y1)" << endl;
    cin >> x1 >> y1;
    cout << "Enter points (x2, y2)" << endl;
    cin >> x2 >> y2;
    cout << "Enter points (x3, y3)" << endl;
    cin >> x3 >> y3;
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2)
    {
        cout << "All 3 points lie on the same line";
    }
    else
    {
        cout << "All 3 points do not lie on the same line";
    }
    return 0;
}

// 9.Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an Alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a Digit";
    }
    else
    {
        cout << ch << " is a Special Character";
    }
    return 0;
}

// 10.Predict the output of the below code:

#include <iostream>
using namespace std;
int main()
{
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    cout << "value of b and c are respectively " << b << " and " << c;
    return 0;
}

SOLUTION : -300 200