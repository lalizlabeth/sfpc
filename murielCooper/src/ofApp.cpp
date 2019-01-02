#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Loading in Brandon Text
    font.load("brandon-text-black.otf", 200, true, true, true);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);

    ofSetColor(red);
//    font.drawString("&", 100,100);
    
    vector < ofPath > paths = font.getStringAsPoints("&");
    for (int i = 0; i < paths.size(); i++){

        vector < ofPolyline > lines = paths[i].getOutline();

        ofSetColor(red);
        for (int j = 0; j < lines.size(); j++){
            ofPolyline lineTemp = lines[j];
            lineTemp = lineTemp.getResampledBySpacing(1);
            lineTemp = lineTemp.getSmoothed( MAX(0, mouseX));
                for (int k = 0; k < lineTemp.size(); k++){
                    ofDrawCircle(lineTemp[k], 2);
                }
            lineTemp.draw();
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
