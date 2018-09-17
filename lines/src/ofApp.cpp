#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int xpos = 0;
    int ypos = 0;
    int width = 100;
    int height = 100;
    
    ofSeedRandom(1000);
    
    ofPoint v1(xpos, ypos);
    ofPoint v2(xpos + width, ypos);
    ofPoint v3(xpos + width, ypos + height);
    ofPoint v4(xpos, ypos + height);
    
    ofPoint r1(ofRandom(-10, 10), ofRandom(-10, 10));
    ofPoint r2(ofRandom(-10, 10), ofRandom(-10, 10));
    ofPoint r3(ofRandom(-10, 10), ofRandom(-10, 10));
    ofPoint r4(ofRandom(-10, 10), ofRandom(-10, 10));
    
    r1.normalize();
    r2.normalize();
    r3.normalize();
    r4.normalize();
    
    r1 *= 20;
    r2 *= 20;
    r3 *= 20;
    r4 *= 20;
    
    ofDrawLine(v1 + r1, v2 + r2);
    ofDrawLine(v2 + r2, v3 + r3);
    ofDrawLine(v3 + r3, v4 + r4);
    ofDrawLine(v4 + r4, v1 + r1);
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
