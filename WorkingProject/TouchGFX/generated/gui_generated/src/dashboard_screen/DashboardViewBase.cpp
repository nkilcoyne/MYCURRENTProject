/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/dashboard_screen/DashboardViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

DashboardViewBase::DashboardViewBase() :
    flexButtonCallback(this, &DashboardViewBase::flexButtonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    boxWithBorder1.setPosition(0, 0, 480, 272);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(153, 153, 153));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);

    StopVehicle.setBoxWithBorderPosition(0, 0, 104, 52);
    StopVehicle.setBorderSize(3);
    StopVehicle.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0), touchgfx::Color::getColorFrom24BitRGB(75, 0, 0), touchgfx::Color::getColorFrom24BitRGB(37, 37, 37), touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    StopVehicle.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_POWER_32_ID), Bitmap(BITMAP_BLUE_ICONS_POWER_32_ID));
    StopVehicle.setIconXY(37, 4);
    StopVehicle.setText(TypedText(T_SINGLEUSEID20));
    StopVehicle.setTextPosition(0, 32, 104, 52);
    StopVehicle.setTextColors(touchgfx::Color::getColorFrom24BitRGB(10, 10, 10), touchgfx::Color::getColorFrom24BitRGB(10, 10, 10));
    StopVehicle.setPosition(361, 9, 104, 52);
    StopVehicle.setAction(flexButtonCallback);

    boxWithBorder1_1.setPosition(129, 0, 223, 116);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1_1.setBorderSize(5);

    CurrentSpeed.setXY(137, -9);
    CurrentSpeed.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    CurrentSpeed.setLinespacing(0);
    CurrentSpeed.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));

    mph.setXY(290, 62);
    mph.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    mph.setLinespacing(0);
    mph.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));

    circleProgress1.setXY(15, 10);
    circleProgress1.setProgressIndicatorPosition(0, 0, 104, 104);
    circleProgress1.setRange(0, 100);
    circleProgress1.setCenter(52, 52);
    circleProgress1.setRadius(50);
    circleProgress1.setLineWidth(0);
    circleProgress1.setStartEndAngle(0, 360);
    circleProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_CIRCLE_INDICATOR_BG_FULL_ID));
    circleProgress1Painter.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_MEDIUM_CIRCLE_INDICATOR_FILL_LINE_FULL_ID));
    circleProgress1.setPainter(circleProgress1Painter);
    circleProgress1.setValue(100);

    BatteryStatus.setXY(42, 61);
    BatteryStatus.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    BatteryStatus.setLinespacing(0);
    BatteryStatus.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));

    boxProgress1.setXY(306, 142);
    boxProgress1.setProgressIndicatorPosition(2, 2, 10, 100);
    boxProgress1.setRange(0, 100);
    boxProgress1.setDirection(touchgfx::AbstractDirectionProgress::UP);
    boxProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_90_DEGREES_ID));
    boxProgress1.setColor(touchgfx::Color::getColorFrom24BitRGB(2, 177, 34));
    boxProgress1.setValue(60);

    RPM.setXY(188, 145);
    RPM.setProgressIndicatorPosition(0, 0, 104, 104);
    RPM.setRange(0, 6500);
    RPM.setCenter(52, 52);
    RPM.setRadius(50);
    RPM.setLineWidth(0);
    RPM.setStartEndAngle(0, 360);
    RPM.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_CIRCLE_INDICATOR_BG_FULL_ID));
    RPMPainter.setBitmap(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_FILL_MEDIUM_CIRCLE_INDICATOR_FILL_LINE_FULL_ID));
    RPM.setPainter(RPMPainter);
    RPM.setValue(6500);

    BrakeProgress.setXY(159, 142);
    BrakeProgress.setProgressIndicatorPosition(2, 2, 10, 100);
    BrakeProgress.setRange(0, 100);
    BrakeProgress.setDirection(touchgfx::AbstractDirectionProgress::UP);
    BrakeProgress.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_90_DEGREES_ID));
    BrakeProgress.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    BrakeProgress.setValue(60);

    rpmLabel.setXY(215, 175);
    rpmLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    rpmLabel.setLinespacing(0);
    rpmLabel.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    textArea1.setXY(13, 121);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));

    boxWithBorder1_1_1.setPosition(16, 144, 104, 40);
    boxWithBorder1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    boxWithBorder1_1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1_1_1.setBorderSize(0);

    Current.setXY(38, 150);
    Current.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    Current.setLinespacing(0);
    Current.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    time.setPosition(356, 90, 114, 26);
    time.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    time.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));
    time.displayLeadingZeroForHourIndicator(true);
    time.setDisplayMode(touchgfx::DigitalClock::DISPLAY_12_HOUR);
    time.setTime12Hour(10, 10, 0, true);

    StopwatchLabel.setXY(375, 128);
    StopwatchLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    StopwatchLabel.setLinespacing(0);
    StopwatchLabel.setTypedText(touchgfx::TypedText(T_SINGLEUSEID24));

    MotorTemperature.setXY(16, 208);
    MotorTemperature.setProgressIndicatorPosition(2, 2, 100, 10);
    MotorTemperature.setRange(0, 100);
    MotorTemperature.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    MotorTemperature.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    MotorTemperature.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_THIN_HORIZONTAL_ID);
    MotorTemperature.setValue(60);
    MotorTemperature.setAnchorAtZero(false);

    CellTemperature.setXY(16, 241);
    CellTemperature.setProgressIndicatorPosition(2, 2, 100, 10);
    CellTemperature.setRange(0, 100);
    CellTemperature.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    CellTemperature.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    CellTemperature.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_THIN_HORIZONTAL_ID);
    CellTemperature.setValue(60);
    CellTemperature.setAnchorAtZero(false);

    MotorTempLabel.setXY(12, 187);
    MotorTempLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    MotorTempLabel.setLinespacing(0);
    MotorTempLabel.setTypedText(touchgfx::TypedText(T_SINGLEUSEID26));

    CellTempLabel.setXY(19, 222);
    CellTempLabel.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    CellTempLabel.setLinespacing(0);
    CellTempLabel.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));

    textArea2.setXY(42, 38);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID28));

    rpmLabel2.setXY(226, 195);
    rpmLabel2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    rpmLabel2.setLinespacing(0);
    rpmLabel2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID29));

    textArea3.setXY(357, 69);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    radioButton1.setXY(367, 212);
    radioButton1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton1.setSelected(false);
    radioButton1.setDeselectionEnabled(false);

    radioButton1_1.setXY(425, 212);
    radioButton1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID), touchgfx::Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton1_1.setSelected(false);
    radioButton1_1.setDeselectionEnabled(false);

    startText.setXY(357, 194);
    startText.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    startText.setLinespacing(0);
    startText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID31));

    resetText.setXY(430, 194);
    resetText.setColor(touchgfx::Color::getColorFrom24BitRGB(124, 0, 0));
    resetText.setLinespacing(0);
    resetText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID32));

    boxWithBorder1_1_1_1.setPosition(356, 150, 113, 40);
    boxWithBorder1_1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    boxWithBorder1_1_1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1_1_1_1.setBorderSize(0);

    stopwatchTime.setXY(365, 153);
    stopwatchTime.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    stopwatchTime.setLinespacing(0);
    stopwatchTime.setTypedText(touchgfx::TypedText(T_SINGLEUSEID33));

    add(boxWithBorder1);
    add(StopVehicle);
    add(boxWithBorder1_1);
    add(CurrentSpeed);
    add(mph);
    add(circleProgress1);
    add(BatteryStatus);
    add(boxProgress1);
    add(RPM);
    add(BrakeProgress);
    add(rpmLabel);
    add(textArea1);
    add(boxWithBorder1_1_1);
    add(Current);
    add(time);
    add(StopwatchLabel);
    add(MotorTemperature);
    add(CellTemperature);
    add(MotorTempLabel);
    add(CellTempLabel);
    add(textArea2);
    add(rpmLabel2);
    add(textArea3);
    add(radioButton1);
    add(radioButton1_1);
    add(startText);
    add(resetText);
    add(boxWithBorder1_1_1_1);
    add(stopwatchTime);
    radioButtonGroup1.add(radioButton1);
    radioButtonGroup1.add(radioButton1_1);
}

void DashboardViewBase::setupScreen()
{

}

void DashboardViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &StopVehicle)
    {
        //Interaction1
        //When StopVehicle clicked change screen to Screen1
        //Go to Screen1 with screen transition towards North
        application().gotoScreen1ScreenCoverTransitionNorth();
    }
}
