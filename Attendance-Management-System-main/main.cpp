#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

// For keeping the program simple we will work with the assumption of only three subjects existing

class Attendance
{
    string reg_no;
    string name;
    float sub_1;
    float sub_2;
    float sub_3;
    float tot_attd;

public:
    void create_student();
    void check_student();
    void update_student();
    void delete_student();
};



int main()
{
    cout << "/* Attendance Management System */" << endl;
    bool flag = true;
    while(true)
    {
        cout << "Services Available: " << endl;
        cout << "1. Create Student in System" << endl;
        cout << "2. Check Student in System" << endl;
        cout << "3. Update Student in System" << endl;
        cout << "4. Delete Student in System" << endl << endl;

        int option;

        cout << "Enter Service Option: " << endl;
        cin >> option;

        switch(option)
        {

        }
    }

    return 0;
}
