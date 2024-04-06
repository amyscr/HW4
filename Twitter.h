#ifndef TWITTER_H
#define TWITTER_H
#include "SocialMediaAccount.h"

class Twitter: public SocialMediaAccount
{
public:
    void setRetweetCount(int rt){this->retweetCount = rt;}
    int getRetweetCount(){return this->retweetCount;}

    void RT(){this->retweetCount++;}
private:
    int retweetCount; //to keep track total number of tweets the account owner retweeted. Please define get and set functions
};

#endif // TWITTER_H
