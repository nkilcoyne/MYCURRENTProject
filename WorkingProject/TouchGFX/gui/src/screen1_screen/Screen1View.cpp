#include <stdlib.h>
#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    textArea.setWildcard(txtBuffer); // textArea is the name of the text variable/box in touchgfx, refer to ViewBase files
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::alphabetClicked()  // Alphabet Button
{
	touchgfx_printf("alphabetClicked %s\n", alphabet);
	Unicode::fromUTF8((const uint8_t*)alphabet, txtBuffer, Unicode::strlen(alphabet)+1);
	textArea.invalidate();
}

void Screen1View::numberSymbolsClicked()  // Number and Symbols Button
{
	touchgfx_printf("numberSymbolsClicked %s\n", numberSymbols);
	Unicode::fromUTF8((const uint8_t*)numberSymbols, txtBuffer, Unicode::strlen(numberSymbols)+1);
	textArea.invalidate();
}
