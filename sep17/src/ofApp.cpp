#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSeedRandom(0);
//    // When you seed the random number generator,
//    // you start the counter from the same place.
//    for (int i = 0; i < 100; i++) {
//        cout << ofRandom(0,100) << endl;
//    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofBackground(0);
//    ofSeedRandom(mouseX * 1000); // (Super hack!) Every time, the "random" will be the same
//    for (int i = 0; i < 10; i++){
//        ofDrawCircle(100 + i * 50, 400, ofRandom(5, 25));
//    }

    ofBackground(255);
    ofSetColor(0);
    ofSeedRandom(mouseX * 1000);
    
    for (int i = 0; i < 40; i++){
        for (int j = 0; j < 40; j++){
            ofPushMatrix();
            ofTranslate(100 + i*20, 100 + j*20);
            ofRotateZDeg(ofRandom(0, 360));
            
            if (ofNoise(i*0.1, j*0.1) > .15){
                ofDrawLine(0-15, 0, 0+15, 0);
            }
            ofPopMatrix();
//            ofDrawLine(100+i*20, 100+j*20, 100+i*20, 100+j*20+5);
        }
    }
    
    
    // Recreating Molnar's Interruptions
    
    // It looks like the lines all have the same length
    // Rotated around their sentence points
    // They're all pinwheels spinning from their center
    // Going to try picking a random angle and rotating it
    // Rotate command in OF is always Top Left corner
    
    // Translate to where I want to draw the line, rotate as if it's at 0, 0
    // Take a snapshot of the current world, do some sort of transformation
    // Push, pop, translate, rotate
    
    // Maybe half the time, the line is random a small amount
    // Her's doesn't seem completely random. There are a lot of vertical lines
    
    // Perlin Noise: a natural form of randomness
    // A continous function: If you pass in smaller numbers, less change
    // Fluid Noise Generator app
    
    // ofNoise(float x, float y): 0, 1
    // ofSinNoise: -1, 1
    
    // ofGetElapsedTimef()
    
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
