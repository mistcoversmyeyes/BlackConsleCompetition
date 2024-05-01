//
// Created by admin on 24-5-1.
//

#ifndef BLACKCONSLECOMPETITION_PLAINVECTOR_H
#define BLACKCONSLECOMPETITION_PLAINVECTOR_H


class PlainVector {
private:
    float X;
    float Y;
public:

    PlainVector() : X(0.0f) , Y(0.0f){}

    PlainVector(float x,float y){
        X = x , Y = y;
    }

    float getX();

    float getY();
};


#endif //BLACKCONSLECOMPETITION_PLAINVECTOR_H
