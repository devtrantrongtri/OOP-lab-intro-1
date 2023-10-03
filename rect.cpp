#include "rect.h"
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
Rectangle::Rectangle()
{
    this->wid = 10;
    this->len = 10;
}

Rectangle::Rectangle(int len, int wid)
{
        if(len <= 20 && len >= 0 && wid >=0 && wid <= 20 ) 
        {
            this->len = len;
            this->wid = wid;
        }
        else {
            cerr<<"Invalid length or width. Using default values (10x10)"<<endl;
            this->wid = 10;
            this->len = 10;
        }
}

void Rectangle::setLength(int len)
{
    if(len <= 20 && len >= 0 ){
        this->len = len;
    }else{
        cerr<<"Invalid length.Using default value.(10)"<<endl;
        this->len = 10;
    }
}

void Rectangle::setWidth(int wid)
{
    if(wid <= 20 && wid >= 0 ){
        this->wid = wid;
    }else{
        cerr<<"Invalid width.Using default value.(10)"<<endl;
        this->wid = 10;
    }
}

int Rectangle::getLength()
{
    return this->len;
}

int Rectangle::getWidth()
{
    return this->wid;
}

double Rectangle::perimeter()
{
    return 2*(this->len+this->wid);
}

double Rectangle::area()
{
    return len*wid;
}

double Rectangle::diagonal()
{
    return sqrt(len*len + wid*wid);
}

bool Rectangle::isSquare()
{
    return len == wid;
}

void Rectangle::draw(char fillCharacter)
{
    for (int i = 0; i < wid; i++) {
        for (int j = 0; j < len; j++) {
            std::cout << fillCharacter;
        }
        std::cout << std::endl;
    }
}

void Rectangle::display()
{
    cout << "[" << len << "x" << wid << "]";
}

Rectangle::~Rectangle()
{

}


