#include "ofApp.h"

//--------------------------------------------------------------
ofColor *colors;
void ofApp::setup(){
    ofBackground(20, 45, 104);
    ofSetCircleResolution(100);
    ofSetLineWidth(2);
    
    // Setting the color palette
    colors = new ofColor[3];
    colors[0] = ofColor(131, 164, 242); // Blue
    colors[1] = ofColor(132, 127, 250); // Purple
    colors[2] = ofColor(52, 173, 113); // Green
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    int circleWidth = 32;
    int pageWidth = 1024;
    int pageHeight = 768;
    int dotSize = 2;

    
    for (int j = 15; j > -1; j--) {
        
        int randomColor = ofRandom(3);
        ofColor color = colors[randomColor];
        int numCircles = j * (j + 32);
        
        if ( j > 10 ) {
            int numCircles = j * j * 32;
        }
        
        for (int i = 0; i < numCircles; i++){
            
//            if (circleWidth < 48) {
//                circleWidth += ofGetElapsedTimef() * 0.1;
//            }
            
            float randomOpacity = ofRandom(0.25, 1) * 255;
            ofSetColor(color, randomOpacity);
        
//            float sinVal = sin( ofGetElapsedTimef()*2 + i);
            float sinVal = sin( ofGetElapsedTimef()*2 + ofMap(j, 0, numCircles, 1.5, 10) + i);
            float cosVal = cos( ofGetElapsedTimef()*0.8 + i);
            
            ofPushMatrix();
            int offsetX = ofRandom(-5, 5);
            int offsetY = ofRandom(-5, 5);
            
            ofDrawCircle(
                ofMap(sinVal / 1.1, -1, 1, j*circleWidth + offsetX, pageWidth - j*circleWidth + offsetX),
                ofMap(cosVal / 0.8, -1, 1, (pageHeight-pageWidth) + j*circleWidth + offsetY, pageWidth - j*circleWidth + offsetY),
                dotSize
            );
            
            ofPopMatrix();
        }
    }
    
//    drawCircles(circleWidth, pageHeight, pageWidth, dotSize, sinVal2, cosVal2);
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
