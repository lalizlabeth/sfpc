#include "ofApp.h"

//--------------------------------------------------------------
ofColor *colors;
void ofApp::setup(){
    ofBackground(43, 38, 35);
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
    // Operations, computer vision
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofSetLineWidth(2);
    ofSeedRandom(mouseX * 1000);
    
    int xpos = 0;
    int ypos = 0;
    int width = 125;
    int height = 125;
    
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
    
    for (int i = 0; i < 6; i++) {
        for (int k = 0; k < 6; k++) {
        ofPushMatrix();
        ofTranslate(125 + i*125, 125 + k*125);
        int color = ofRandom(0, 7);
        ofSetColor(colors[color]);
            
        for (int j = 0; j < 5; j++) {
            int width = ofRandom(100, 150);
            int height = ofRandom(100, 150);

//            ofPushMatrix();
            if (ofNoise(j * 0.2, j * 0.2) > .5){
                ofRotateZDeg(ofRandom(-60, 60));
            }
            ofDrawRectangle(0, 0, width, height);
//            ofPopMatrix();
        }
        ofPopMatrix();
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
