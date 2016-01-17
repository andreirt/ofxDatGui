#pragma once
#include "ofxDatGuiButton.h"
class ofxDatGuiImage :
	public ofxDatGuiButton
{
	string image;
	ofImage loadedImage;

public:

	ofxDatGuiImage(string label, string imagePath, ofxDatGuiTemplate* tmplt = nullptr)
		: ofxDatGuiButton(label, tmplt)
	{
		this->image = imagePath;		
	}


	~ofxDatGuiImage()
	{
	}

	void draw()
	{
		if (!mVisible) return;

		ofPushStyle();
		drawBkgd();
		ofxDatGuiComponent::drawLabel();
		ofxDatGuiComponent::drawStripe();

		if (this->image.size() > 0) {
			if (!this->loadedImage.isAllocated()) {
				this->loadedImage.load(this->image);
			}

			// calcula a propoção
			float scaleX = (this->getWidth() - 110) / this->loadedImage.getWidth();
			float scaleY = this->getHeight() / this->loadedImage.getHeight();
			float scale = min(scaleX, scaleY);

			float w = this->loadedImage.getWidth() * scale;
			float h = this->loadedImage.getHeight() * scale;

			ofSetColor(255, 255, 255);
			this->loadedImage.draw(x + 112, y, w, h);
		}

		ofPopStyle();
	}

	void setImage(string imagePath)
	{
		this->image = imagePath;
		if (this->loadedImage.isAllocated()) {
			this->loadedImage.clear();
		}
	}
};

