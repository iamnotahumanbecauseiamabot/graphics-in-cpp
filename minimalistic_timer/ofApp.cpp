#include "ofApp.h"
#include <string> 

using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(0,0,0);
text = "";
text_0 = "";
cin >> timer_value;
//timer_value =0;
font.load("Caviar_Dreams_Bold.ttf", 300);
font_0.load("Caviar_Dreams_Bold.ttf", 125);
lastTime = ofGetElapsedTimef();
frameRateForCapture = 1; // 30 fps
//centre_of_width = ofGetWidth()/2;
//centre_of_height = ofGetHeight()/2;
mySound.load("tick.mp3");
mySound.setLoop(true); //Sound will loop
mySound.play();
}

//--------------------------------------------------------------
void ofApp::update(){
float timePerFrame = 1.0 / frameRateForCapture;  
float currentTime = ofGetElapsedTimef();
if (currentTime - lastTime > timePerFrame){  
  // DO SOMETHING HERE
  if(timer_value>=0){
  text = to_string(timer_value--);
  }
  else{
  mySound.stop();
  text = "";
  text_0="Bruh Stop.";
  }
  lastTime = currentTime;
}


}

//--------------------------------------------------------------
void ofApp::draw(){
font.drawString(text, ofGetWidth()/2 - font.stringWidth(text)/ 2,ofGetHeight()/2 + font.stringHeight(text)/ 2);
font_0.drawString(text_0, ofGetWidth()/2 - font_0.stringWidth(text_0)/ 2,ofGetHeight()/2 + font_0.stringHeight(text_0)/ 2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
