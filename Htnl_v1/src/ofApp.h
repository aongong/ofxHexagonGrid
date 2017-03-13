#pragma once

#include "ofMain.h"
#include "HexClass.hpp"
//#include "vector"


class ofApp : public ofBaseApp{

	public:
    ofApp();
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    ofVec2f c;


    int s = 27;
    int serial = 0;
    
    int x_;

    int x;// = int(sqrt(3)*s);
    int y;// = int(s);
    
    HexClass hexa;
    


    
};
