#include "ofApp.h"

/*
    Simple example to demonstrate the Text Input Component.
    Type something into the component and see it displayed in the center of the screen
    https://github.com/braitsch/ofxDatGui @braitsch
*/

void ofApp::setup()
{
    ofSetWindowPosition(0, 0);
    
    input = new ofxDatGuiTextInput("TEXT INPUT", "Type Something Here");
    input->onTextInputEvent(this, &ofApp::onTextInputEvent);
    input->setPosition(100, 100);
    input->setWidth(800, .2);
    font.load("ofxdatgui_assets/font-verdana.ttf", 24);
}

void ofApp::onTextInputEvent(ofxDatGuiTextInputEvent e)
{
// text input events carry the text of the input field //
    cout << "From Event Object: " << e.text << endl;
// although you can also retrieve it from the event target //
    cout << "From Event Target: " << e.target->getText() << endl;
}

void ofApp::update()
{
    input->update();
}

void ofApp::draw()
{
    input->draw();
    string str = "Text Input: "+input->getText();
    ofRectangle bounds = font.getStringBoundingBox(str, ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(ofColor::black);
    font.drawString(str, bounds.x-bounds.width/2, bounds.y-bounds.height/2);
}

