#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
//     ofSetColor(127 + 127 * sin(i * 0.01),)
    ofSetCircleResolution(100);
    float time = ofGetElapsedTimef();
    
    for (int i = 0; i< 500; i++) {
        ofDrawCircle(200 + i, 500 + 200 * sin(i * ofMap(mouseY, 0, ofGetHeight(), 1, 0) + time), 10);
    }
    
    // circle formula
    // x = xorig + r * cos(angle)
    // y = yorig + r * sin(angle)
    
//    for (int i = 0; i < 10; i++) {
//        float f = i*5;
//        float p = 0;
//        float a = 100 + 50 * sin(ofGetElapsedTimef());
//        
//        float x = 500 + a * cos( f * ofGetElapsedTimef() + p );
//        float y = 500 + a * sin( f * ofGetElapsedTimef() + p);
//        ofDrawCircle(x, y, 10);
//    }
//    
// Sin
//    float sinVal = sin(ofGetElapsedTimef());
//    ofDrawCircle( ofMap(sinVal, -1, 1, 200, 600), 150, 20);
//
//    float sinVal2 = sin(ofGetElapsedTimef()*2);
//    ofDrawCircle( ofMap(sinVal2, -1, 1, 200, 600), 150, 20);
    
//    for (int i = 0; i < 10; i++) {
//        float sinVal = sin(ofGetElapsedTimef() + i*0.8);
//        ofDrawCircle( ofMap(sinVal, -1, 1, 200, 600), 100+50*i, 20);
//    }
    
// amplitude * sin(time * freq + phase)
    
//    float amp = mouseX;
//    ofDrawCircle(amp * sin(ofGetElapsedTimef()), 500, 100);
    
    

    
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
