#include<iostream>
using namespace std;

class Student
{
    private:
        int roll_no;
    
    public:
        void getData()
        {
            cout << "Enter Student Roll Number: ";
            cin >> roll_no;
        }
        
        void display()
        {
            cout << "\n=== Student Details ===" << endl;
            cout << "Roll Number: " << roll_no << endl;
        }
};

int main()
{
    Student s;        // object created
    
    s.getData();      // input roll number
    s.display();      // display roll number
    
    return 0;
}