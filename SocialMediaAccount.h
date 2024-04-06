#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H
using namespace std;
#include <iostream>


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
        if(this->followerCount < maxFollowers)
        {
            followers[followerCount] = user;
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
    void displayFollowers()
    {
        if(!this->priv)
        {
            cout<<"Followers: "<<endl;
            for(int i = 0; i < this->followerCount; i++)
            {
                cout<<followers[i]<<endl;
            }
        }
        else{cout<<"Account is private, cannot view followers."<<endl;}
    }
    void displayFollowed()
    {
        if(!this->priv)
        {
            cout<<"Following: "<<endl;
            for(int i = 0; i < this->followedCount; i++)
            {
                cout<<followed[i]<<endl;
            }
        }
        else{cout<<"Account is private, cannot view following."<<endl;}
    }

private:
    T handler; //(this represents the account owner)
    T* followers; //to make arrays later
    T* followed;
    int followerCount;//Count to keep track of your current number of followers.
    int followedCount;//Count to keep track of your current number of followed accounts.
    bool priv; //which is a flag to indicate whether an account is private or public. Make all accounts private true by default when you create an object. This means user doesn’t want to expose his/her information publicly. We’re going to use this for the display function below
};
#endif // SOCIALMEDIAACCOUNT_H
