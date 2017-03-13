//
//  HexClass.hpp
//  Htnl_v1
//
//  Created by Jonghong Park on 03/03/2017.
//
//

#ifndef HexClass_hpp
#define HexClass_hpp

#include "ofMain.h"

class HexClass{
public:
    void setup();
    void draw();
    void Po(ofVec2f center, int size);
    void Po2(ofVec2f center, int size);
    
    
    ofPoint P[5];
    ofVec2f center;
    int size;

    HexClass();
    
};

#endif /* HexClass_hpp */
