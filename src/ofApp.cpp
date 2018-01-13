#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1187, 840);
    ofBackground(255, 255, 255);
    font.load("AndaleMono", size);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (j=0; j<27; j++) {
        ofSetColor(255, 0, 0);
        font.drawString("R", 250, 6+size+size*j*3.3);
        ofSetColor(0, 255, 0);
        font.drawString("G", 250, 6+size*2+size*j*3.3);
        ofSetColor(0, 0, 255);
        font.drawString("B", 250, 6+size*3+size*j*3.3);
        for (i=0; i<27; i++) {
            ofSetColor(j*255/26, 127, i*255/26);
            
            if (i*255/26<10) {
                font.drawString("00"+ofToString(i*255/26), 268+size*3.4*i, ofGetHeight()-(size+size*j*3.3-4));
            }else if (i*255/26<100){
                font.drawString("0"+ofToString(i*255/26), 268+size*3.4*i, ofGetHeight()-(size+size*j*3.3-4));
            }else{
                font.drawString(ofToString(i*255/26), 268+size*3.4*i, ofGetHeight()-(size+size*j*3.3-4));
            }
            
            if (i>=0) {
                font.drawString(ofToString(127), 268+size*3.4*i, ofGetHeight()-(size*2+size*j*3.3-4));
            }else if (i*255/26<100){
                font.drawString("0"+ofToString(i*255/26), 268+size*3.4*i, ofGetHeight()-(size*2+size*j*3.3-4));
            }else{
                font.drawString(ofToString(i*255/26), 268+size*3.4*i, ofGetHeight()-(size*2+size*j*3.3-4));
            }
            
            if (j*255/26<10) {
                font.drawString("00"+ofToString(j*255/26), 268+size*3.4*i, ofGetHeight()-(size*3+size*j*3.3-4));
            }else if (j*255/26<100){
                font.drawString("0"+ofToString(j*255/26), 268+size*3.4*i, ofGetHeight()-(size*3+size*j*3.3-4));
            }else{
                font.drawString(ofToString(j*255/26), 268+size*3.4*i, ofGetHeight()-(size*3+size*j*3.3-4));
            }
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
