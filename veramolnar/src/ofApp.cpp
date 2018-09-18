#include "ofApp.h"

//--------------------------------------------------------------
ofColor *colors;
void ofApp::setup(){
    ofBackground(43, 38, 35);
    ofNoFill();
    ofSetLineWidth(3);
    
    // Setting the color palette
    colors = new ofColor[7];
    colors[0] = ofColor(180, 28, 43); // Red
    colors[1] = ofColor(135, 53, 127); // Red Purple
    colors[2] = ofColor(145, 196, 251); // Light Blue
    colors[3] = ofColor(255); // White
    colors[4] = ofColor(212, 198, 0); // Yellow
    colors[5] = ofColor(139, 68, 148); //Green
    colors[6] = ofColor(94, 173, 50); // Blue Purple
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int xpos = 0;
    int ypos = 0;
    int width = 125;
    int height = 125;
    
    // Setting seed
    ofSeedRandom(mouseX * 1000);
    
    // Defining points
    ofPoint v1(xpos, ypos);
    ofPoint v2(xpos + width, ypos);
    ofPoint v3(xpos + width, ypos + height);
    ofPoint v4(xpos, ypos + height);
    
    // Recursing columns
    for (int i = 0; i < 6; i++) {
        ofPushMatrix();
        ofTranslate(width, height);
        
        // Recursing rows
        for (int k = 0; k < 6; k++) {
        ofPushMatrix();
        ofTranslate(i*width, k*height);
            
        // Setting color
        int color = ofRandom(0, 7);
        ofSetColor(colors[color]);
            
            // Drawing overlaid squares
            for (int j = 0; j < 8; j++) {
                ofPushMatrix();
                int lowerBound = -10;
                int upperBound = 10;
                
                ofPoint r1(ofRandom(lowerBound, upperBound), ofRandom(lowerBound, upperBound));
                ofPoint r2(ofRandom(lowerBound, upperBound), ofRandom(lowerBound, upperBound));
                ofPoint r3(ofRandom(lowerBound, upperBound), ofRandom(lowerBound, upperBound));
                ofPoint r4(ofRandom(lowerBound, upperBound), ofRandom(lowerBound, upperBound));
                
                r1.normalize();
                r2.normalize();
                r3.normalize();
                r4.normalize();
                
                int multiplier = 45;
                
                r1 *= multiplier;
                r2 *= multiplier;
                r3 *= multiplier;
                r4 *= multiplier;
                
                ofDrawLine(v1 + r1, v2 + r2);
                ofDrawLine(v2 + r2, v3 + r3);
                ofDrawLine(v3 + r3, v4 + r4);
                ofDrawLine(v4 + r4, v1 + r1);
                
                ofPopMatrix();
            }
            ofPopMatrix();
        }
        ofPopMatrix();
        
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
