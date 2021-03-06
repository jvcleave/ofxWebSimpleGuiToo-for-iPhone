#ifndef __OFXWEBSIMPLEGUITOO__
#define __OFXWEBSIMPLEGUITOO__

#include "ofMain.h"
#include "ofxSimpleGuiToo.h"
#include "ofxWebServer.h"

class ofxWebSimpleGuiToo: public ofxSimpleGuiToo, public ofxWSRequestHandler {
public:
	ofxWebSimpleGuiToo();
	void startServer(int port = 8910);
	void stopServer();
	
	void httpGet(string url);
	/*
	// pasted from ofxSimpleGuiToo
	ofxSimpleGuiPage		&addPage(string name = "");
	ofxSimpleGuiControl		&addControl(ofxSimpleGuiControl& control);
	ofxSimpleGuiContent		&addContent(string name, ofBaseDraws &content, float fixwidth = -1);
	ofxSimpleGuiButton		&addButton(string name, bool &value);
	ofxSimpleGuiFPSCounter	&addFPSCounter();
	//	ofxSimpleGuiMovieSlider	&addMovieSlider(string name, ofVideoPlayer& input);
	ofxSimpleGuiQuadWarp	&addQuadWarper(string name, ofPoint *pts);
	ofxSimpleGuiSliderInt	&addSlider(string name, int &value, int min, int max);
	ofxSimpleGuiSliderFloat	&addSlider(string name, float &value, float min, float max, float smoothing = 0);
	ofxSimpleGuiSlider2d	&addSlider2d(string name, ofPoint& value, float xmin, float xmax, float ymin, float ymax);
	ofxSimpleGuiTitle		&addTitle(string name);
	ofxSimpleGuiToggle		&addToggle(string name, bool &value);
*/
private:
	ofxWebServer server;
	string describePage(ofxSimpleGuiPage *page);
	string describeControl(ofxSimpleGuiControl *control);
//	ofxSimpleGuiControl *findControlByName(string name);
	ofxSimpleGuiControl * findControlByName(string name);

};
#endif // __OFXWEBSIMPLEGUITOO__
