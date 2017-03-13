//
//  HexClass.cpp
//  Htnl_v1
//
//  Created by Jonghong Park on 03/03/2017.
//
//

#include "HexClass.hpp"
HexClass::HexClass(){

}

void HexClass::setup(){


}

void HexClass::draw(){

  
    
}

void HexClass::Po(ofVec2f center, int size){

    for (int i = 0; i<=5; i++){
        
        float angle_deg = 60 * i + 30;
        float angle_rad = PI / 180 * angle_deg;
        P[i].set(center.x + size * cos(angle_rad), center.y + size * sin(angle_rad));
        //ofSetLineWidth(5);
        //ofSetColor(30,30,30);


          }

    ofBeginShape();
    ofSetColor(50);
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofVertex(P[0].x, P[0].y);
    ofVertex(P[1].x, P[1].y);
    ofVertex(P[2].x, P[2].y);
    ofVertex(P[3].x, P[3].y);
    ofVertex(P[4].x, P[4].y);
    ofVertex(P[5].x, P[5].y);
    ofEndShape();

    


}
