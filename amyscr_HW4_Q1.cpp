/*
*************************************************************************
** Author : Halil Bisgin
** Program : hw1, q1
** Date Created : January 15, 2017
** Date Last Modified : January 20, 2017
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

const int maxFollowers = 5000;
const int maxFollowed = 5000;

template <class T>
class SocialMediaAccount
{
public:
    SocialMediaAccount();
    SocialMediaAccount(T handler)
    {
        this->handler = handler;
        this->priv = true;
        this->followerCount = 0;//Count to keep track of your current number of followers.
        this->followedCount = 0;
        followed = new T[maxFollowed];
        followers = new T[maxFollowers];//for new array
    }
    
    T getHandler(){return this->handler;}
    int getFollowerCount(){return this->followerCount;}
    int getFollowedCount(){return this->followedCount;}
    bool getPrivate(){return this->priv;}
    
    void setHandler(T user){this->handler = user;}
    void setFollowers(int num){this->follower = num;}
    void setFollowed(int num){this->followed = num;}
    void setPrivate(bool priv){this->priv = priv;}
    
    void addFollower (T user)
    {
        if(this->followerCount < maxFollower)
        {
            follower[followerCount] = user;
            this->followerCount++;
        }
    }
    void addFollowed (T user)
    {
        if(this->followedCount < maxFollowed)
        {
            followed[followedCount] = user;
            this->followedCount++;
        }
    }
    void displayFollowers(){}
    void displayFollowed(){}
    
private:
    T handler; //(this represents the account owner)
    T* followers; //to make arrays later
    T* followed;
    int followerCount;//Count to keep track of your current number of followers.
    int followedCount;//Count to keep track of your current number of followed accounts.
    bool priv; //which is a flag to indicate whether an account is private or public. Make all accounts private true by default when you create an object. This means user doesn’t want to expose his/her information publicly. We’re going to use this for the display function below
};



//above goes in .h file

struct Profile
{
    int userId;
    string username;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
