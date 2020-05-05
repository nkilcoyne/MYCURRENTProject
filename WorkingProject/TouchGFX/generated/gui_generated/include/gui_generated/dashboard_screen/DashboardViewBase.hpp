/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DASHBOARDVIEWBASE_HPP
#define DASHBOARDVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/dashboard_screen/DashboardPresenter.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888Bitmap.hpp>
#include <touchgfx/containers/progress_indicators/BoxProgress.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/containers/progress_indicators/ImageProgress.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class DashboardViewBase : public touchgfx::View<DashboardPresenter>
{
public:
    DashboardViewBase();
    virtual ~DashboardViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextButtonStyle< touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > > > StopVehicle;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::TextArea CurrentSpeed;
    touchgfx::TextArea mph;
    touchgfx::CircleProgress circleProgress1;
    touchgfx::PainterRGB888Bitmap circleProgress1Painter;
    touchgfx::TextArea BatteryStatus;
    touchgfx::BoxProgress boxProgress1;
    touchgfx::CircleProgress RPM;
    touchgfx::PainterRGB888Bitmap RPMPainter;
    touchgfx::BoxProgress BrakeProgress;
    touchgfx::TextArea rpmLabel;
    touchgfx::TextArea textArea1;
    touchgfx::BoxWithBorder boxWithBorder1_1_1;
    touchgfx::TextArea Current;
    touchgfx::DigitalClock time;
    touchgfx::TextArea StopwatchLabel;
    touchgfx::ImageProgress MotorTemperature;
    touchgfx::ImageProgress CellTemperature;
    touchgfx::TextArea MotorTempLabel;
    touchgfx::TextArea CellTempLabel;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea rpmLabel2;
    touchgfx::TextArea textArea3;
    touchgfx::RadioButton radioButton1;
    touchgfx::RadioButton radioButton1_1;
    touchgfx::TextArea startText;
    touchgfx::TextArea resetText;
    touchgfx::BoxWithBorder boxWithBorder1_1_1_1;
    touchgfx::TextArea stopwatchTime;
    touchgfx::RadioButtonGroup<2> radioButtonGroup1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DashboardViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // DASHBOARDVIEWBASE_HPP
