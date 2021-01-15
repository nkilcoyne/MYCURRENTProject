#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void alphabetClicked();
    virtual void numberSymbolsClicked();
protected:
    Unicode::UnicodeChar txtBuffer[50]; // variable that stores the actual text data
	const char* alphabet = "abcdefgh"; // can establish this as anything that can fit into text box!
	const char* numberSymbols = "1234%$#!"; // can establish this as anything that can fit into text box!
};

#endif // SCREEN1VIEW_HPP
