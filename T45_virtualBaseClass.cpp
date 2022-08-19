#include <iostream>
using namespace std;
/*
Inheritance:
    student -->test
    student --> sportsd
    test --> result
    sports --> result
*/

class Student
{
protected:
    int rollNo;

public:
    void setNumber(int a)
    {
        rollNo = a;
    }
    void printNumber(void)
    {
        cout << "Your roll number is: " << rollNo << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks(void)
    {
        cout << "Your result is here" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : public virtual Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result harry;
    harry.setNumber(12);
    harry.setMarks(79.5, 98.5);
    harry.setScore(9);
    harry.display();
    return 0;
}