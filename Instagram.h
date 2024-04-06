#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "SocialMediaAccount.h"

template <class T>
class Instagram : public SocialMediaAccount <T>
{
public:
    void setLikeCount(int likes){this->likeCount = likes;}
    int getLikeCount(){return this->likeCount;}

    void Like(){this->likeCount++;}
private:
    int likeCount; //to keep track total number of posts that account owner liked. Please define get and set functions.
};

#endif // INSTAGRAM_H
