/*
*************************************************************************
** Author : Amy Scripture
** Program : hw4, q1
** Date Created : apr 5, 2024
** Date Last Modified : apr 5, 2024
** Usage : No command line arguments
**
** Problem:
Accept the following information from the user (keyboard):
- Hw1, hw2 and hw3 (out of 100)
- Midterm (out of 100)
- Final exam (out of 100)
Calculate the total grade out of 100 based on the following grading scale:
Hws --> 30% (10% each)
Midterm --> 30%
Final Exam --> 40%
*************************************************************************/

#include <iostream>

using namespace std;
#include "SocialMediaAccount.h"
#include "Twitter.h"

#include "Instagram.h"

//above goes in .h file

struct Profile
{
    int userId;
    string username;
};

int main()
{
    cout << "Starting program." << endl;
    Twitter<string> TS;
    Twitter<Profile> TP;
    Instagram<string> IS;
    Instagram<Profile> IP;

    return 0;
}
