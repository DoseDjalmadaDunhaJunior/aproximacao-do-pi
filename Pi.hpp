//
// Created by josé djalma da cunha júnior on 2019-06-26.
//

#ifndef OBTENCAO_PI_PI_HPP
#define OBTENCAO_PI_PI_HPP
#include <iostream>
#include <math.h>
using namespace std;

class Pi {
public:
    void passo(){
        float temp = an;
        an = (temp + bn)/2;
        float y = temp - an;
        bn = sqrt((temp*bn));
        tn = tn - (pn * (y*y));
    }

    float conta(){
        for (int i = 0; i < 10; i++) {
            passo();
        }
        resp = ((an + bn) * (an + bn)) / (4 * tn);
        return resp;
    }

private:
    float bn = 1/sqrt(2);
    float an = 1;
    float tn = 1.0/4;
    float pn = 1;
    float resp;

};


#endif //OBTENCAO_PI_PI_HPP
