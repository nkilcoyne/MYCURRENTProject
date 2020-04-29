/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId LARGE = 1;
    static const touchgfx::FontId SMALL = 2;
    static const touchgfx::FontId TYPOGRAPHY_00 = 3;
    static const touchgfx::FontId TYPOGRAPHY_01 = 4;
    static const touchgfx::FontId TYPOGRAPHY_02 = 5;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;       // gadugib_20_4bpp
    static const touchgfx::FontId LARGE = 1;         // verdana_40_4bpp
    static const touchgfx::FontId SMALL = 2;         // verdana_10_4bpp
    static const touchgfx::FontId TYPOGRAPHY_00 = 3; // gadugib_15_4bpp
    static const touchgfx::FontId TYPOGRAPHY_01 = 4; // gadugib_12_4bpp
    static const touchgfx::FontId TYPOGRAPHY_02 = 5; // gadugib_100_4bpp
    static const uint16_t NUMBER_OF_FONTS = 6;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);
};

#endif // APPLICATIONFONTPROVIDER_HPP
