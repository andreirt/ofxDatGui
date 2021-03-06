/*
    Copyright (C) 2015 Stephen Braitsch [http://braitsch.io]

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#pragma once

static const string OFXDG_ASSET_DIR = "ofxdatgui_assets";

enum class ofxDatGuiAnchor
{
    NO_ANCHOR = 0,
    TOP_LEFT = 1,
    TOP_RIGHT = 2
};

enum class ofxDatGuiGraph
{
    LINES = 0,
    FILLED,
    POINTS,
    OUTLINE,
};

enum class ofxDatGuiAlignment
{
    LEFT = 1,
    CENTER = 2,
    RIGHT = 3
};

enum class ofxDatGuiType
{
    LABEL = 0,
    BREAK,
    BUTTON,
    TOGGLE,
    PAD2D,
    HEADER,
    FOOTER,
    DROPDOWN,
    MATRIX,
    SLIDER,
    FOLDER,
    TEXT_INPUT,
    FRAME_RATE,
    COLOR_PICKER,
    WAVE_MONITOR,
    VALUE_PLOTTER,
	IMAGE_MATRIX
};




