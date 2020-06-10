/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    boxWithBorder1.setPosition(0, 0, 480, 272);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);

    GamecockLogo.setBitmap(touchgfx::Bitmap(BITMAP_GAMECOCKLOGO_ID));
    GamecockLogo.setPosition(123, 3, 234, 266);
    GamecockLogo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    GamecockLogo.setAlpha(46);

    time.setPosition(349, 237, 119, 23);
    time.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    time.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    time.displayLeadingZeroForHourIndicator(true);
    time.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    time.setTime24Hour(10, 10, 0);

    holdFoot.setXY(113, 35);
    holdFoot.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    holdFoot.setLinespacing(0);
    holdFoot.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    TapButton.setXY(79, 81);
    TapButton.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TapButton.setLinespacing(0);
    TapButton.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));

    TimeLabel.setXY(374, 217);
    TimeLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    TimeLabel.setLinespacing(0);
    TimeLabel.setTypedText(touchgfx::TypedText(T_SINGLEUSEID6));

    buttonWithLabel1.setXY(6, 207);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID37));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    buttonWithLabel2.setXY(155, 123);
    buttonWithLabel2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID40));
    buttonWithLabel2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel2.setAction(buttonCallback);

    add(boxWithBorder1);
    add(GamecockLogo);
    add(time);
    add(holdFoot);
    add(TapButton);
    add(TimeLabel);
    add(buttonWithLabel1);
    add(buttonWithLabel2);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel2)
    {
        //Interaction1
        //When buttonWithLabel2 clicked change screen to Dashboard
        //Go to Dashboard with screen transition towards South
        application().gotoDashboardScreenCoverTransitionSouth();
    }
}
