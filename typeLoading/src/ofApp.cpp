#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("sailec.otf", 50, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);

//    ofTranslate(100, 100);
//    vector < ofPath > paths = font.getStringAsPoints("hello");
//    for (int i = 0 ; i < paths.size(); i++) {
//        vector < ofPolyline > lines = paths[i].getOutline();
//        for (int j = 0; j < lines.size(); j++){
//            lines[j].draw();
//        }
//    }
//    font.drawStringAsShapes
    
    // Easy cam makes 0, 0, the center
    // You can drag easy cam around for 3D
    // Double tap, goes back to normal
    
    // enable depth testing in open frameworks
    
    
    float amt = ofMap(mouseX, 0, ofGetWidth(), 0.1, 0.3);
    
    cam.begin();
    
    ofDrawAxis(300);
    ofSetColor(255, 0, 0);
    font.drawStringAsShapes("hello", 0, 0);
    
    ofPushMatrix();
    ofRotateY(90);
    ofSetColor(0, 0, 255);
    font.drawString("hello", 0, 0);
    ofPopMatrix();
    
    cam.end();
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
