#ifndef CHARGINGSCREENVIEW_HPP
#define CHARGINGSCREENVIEW_HPP

#include <gui_generated/chargingscreen_screen/ChargingScreenViewBase.hpp>
#include <gui/chargingscreen_screen/ChargingScreenPresenter.hpp>

class ChargingScreenView : public ChargingScreenViewBase
{
public:
    ChargingScreenView();
    virtual ~ChargingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CHARGINGSCREENVIEW_HPP
