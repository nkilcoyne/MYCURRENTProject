#include <gui/dashboard_screen/DashboardView.hpp>

DashboardView::DashboardView()
{

}

void DashboardView::setupScreen()
{
    DashboardViewBase::setupScreen();
}

void DashboardView::tearDownScreen()
{
    DashboardViewBase::tearDownScreen();
}

void DashboardView::handleTickEvent()
{
	tickCounter++;
	if(tickCounter >= 15)
	{
		seconds++;
		if(seconds >= 60)
		{
			minutes++;
			if(minutes >= 60)
			{
				hours++;
				if(hours >= 24)
				{
					hours = 0;
					ampm = !ampm;
				}
				minutes = 0;
			}
			seconds = 0;
		}
		tickCounter = 0;
		time.setTime12Hour(hours, minutes, seconds, ampm);
	}
}
