#include "ofApp.h"

ofApp::ofApp(){

    
}

void ofApp::setup(){

    ofBackground(255, 255, 255);

}

void ofApp::update(){
    
 
}

void ofApp::draw(){
    
    for (int i = 1; i<25; i++){
        y = ((s*3)/2) * i;
        c.y = y;

        if((i+1)%2==0)
            x_ = int(sqrt(3)*s);
        else
            x_ = int(s*sqrt(3)/2);
        for (int j = 1; j<25; j++) {
            x = x_ + (s*sqrt(3)) * j;
            c.x = x;
            if (mouseX >= c.x-s & mouseX <= c.x+s & mouseY >= c.y-s & mouseY <= c.y+s){
                ofFill();
            }
            else{
                ofNoFill();
            }

            ofSetLineWidth(2);
            hexa.Po(c,s);
            ofSetColor(200,0,0);
            //ofSetDrawBitmapMode();
            ofDrawBitmapString(ofToString(j)+","+ofToString(i),c.x-15,c.y);
            
            ofFill();
            ofSetColor(0,255,0);
            ofDrawCircle(ofGetMouseX(),ofGetMouseY(), 10,10);
            }
        }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
