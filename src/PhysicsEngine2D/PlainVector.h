//
// Created by admin on 24-5-1.
//

#ifndef BLACKCONSLECOMPETITION_PLAINVECTOR_H
#define BLACKCONSLECOMPETITION_PLAINVECTOR_H


/*this class repersent an 2dimension vector in a Plain which have two float
 * */

class PlainVector {
private:
    float const X;
    float const Y;
public:

    const static PlainVector zero();


    PlainVector() : X(0.0f) , Y(0.0f){}

    PlainVector(float x,float y) : X(x) ,Y(y){}


    float getY();
    float getX();

    PlainVector operator+(PlainVector p ){
        PlainVector result(this->X + p.X , this->Y + p.Y);
        return result;
    };

    PlainVector operator-(PlainVector p){
        PlainVector result(this->X - p.X , this->Y -p.Y);
        return result;
    }

    PlainVector operator*(float lamda){
        PlainVector result(lamda * this->X , lamda * this->Y);
        return result;
    }

    PlainVector operator*(PlainVector p){
        PlainVector result(this->X * p.X,this->Y * p.Y);
        return result;
    }

    PlainVector operator/(float lamda){
        if (lamda != 0) {
            PlainVector result(lamda / this->X, lamda / this->Y);
            return result;
        }
        else throw "illegal argument";
    }

    bool operator==(PlainVector p){
        if (this->X == p.X && this->Y == p.Y) {
            return true;
        } else {
            return false;
        }
    }
};


#endif //BLACKCONSLECOMPETITION_PLAINVECTOR_H
