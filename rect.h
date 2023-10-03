
#ifndef RECT_H
#define RECT_H

// #pragma once

class Rectangle
{
private:
    int len;
    int wid;
public:
    Rectangle();
    Rectangle(int len, int wid);
    
    void setLength(int len);
    void setWidth(int wid);
    int getLength();
    int getWidth();
    double perimeter();
    double area();
    double diagonal();
    bool isSquare();
    void draw(char fillCharacter);
    void display();
    ~Rectangle();


};

#endif