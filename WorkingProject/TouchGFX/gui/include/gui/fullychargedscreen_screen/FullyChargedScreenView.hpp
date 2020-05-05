#ifndef FULLYCHARGEDSCREENVIEW_HPP
#define FULLYCHARGEDSCREENVIEW_HPP

#include <gui_generated/fullychargedscreen_screen/FullyChargedScreenViewBase.hpp>
#include <gui/fullychargedscreen_screen/FullyChargedScreenPresenter.hpp>

class FullyChargedScreenView : public FullyChargedScreenViewBase
{
public:
    FullyChargedScreenView();
    virtual ~FullyChargedScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FULLYCHARGEDSCREENVIEW_HPP
