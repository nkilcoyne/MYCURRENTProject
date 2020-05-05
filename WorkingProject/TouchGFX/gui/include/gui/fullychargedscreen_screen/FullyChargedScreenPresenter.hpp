#ifndef FULLYCHARGEDSCREENPRESENTER_HPP
#define FULLYCHARGEDSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class FullyChargedScreenView;

class FullyChargedScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    FullyChargedScreenPresenter(FullyChargedScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~FullyChargedScreenPresenter() {};

private:
    FullyChargedScreenPresenter();

    FullyChargedScreenView& view;
};

#endif // FULLYCHARGEDSCREENPRESENTER_HPP
