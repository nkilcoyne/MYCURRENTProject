/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <touchgfx/TypedText.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

extern touchgfx::GeneratedFont& getFont_malgunbd_20_4bpp();
extern touchgfx::GeneratedFont& getFont_verdana_40_4bpp();
extern touchgfx::GeneratedFont& getFont_verdana_10_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_15_4bpp();
extern touchgfx::GeneratedFont& getFont_gadugib_100_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_19_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_90_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_13_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_16_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_12_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_22_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_18_4bpp();
extern touchgfx::GeneratedFont& getFont_malgunbd_24_4bpp();

const touchgfx::Font* _fonts[] =
{
    &(getFont_malgunbd_20_4bpp()),
    &(getFont_verdana_40_4bpp()),
    &(getFont_verdana_10_4bpp()),
    &(getFont_malgunbd_15_4bpp()),
    &(getFont_gadugib_100_4bpp()),
    &(getFont_malgunbd_19_4bpp()),
    &(getFont_malgunbd_90_4bpp()),
    &(getFont_malgunbd_13_4bpp()),
    &(getFont_malgunbd_16_4bpp()),
    &(getFont_malgunbd_12_4bpp()),
    &(getFont_malgunbd_22_4bpp()),
    &(getFont_malgunbd_18_4bpp()),
    &(getFont_malgunbd_24_4bpp())
};

extern const touchgfx::TypedText::TypedTextData typedText_database_DEFAULT[];
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData typedText_database_DEFAULT[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    { 0, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 0, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 10, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 7, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 11, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 8, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 9, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 9, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 0, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 11, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 7, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 7, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 12, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR }
};

TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    typedText_database_DEFAULT
};

namespace TypedTextDatabase
{
const touchgfx::TypedText::TypedTextData* getInstance(touchgfx::LanguageId id)
{
    return typedTextDatabaseArray[id];
}

uint16_t getInstanceSize()
{
    return sizeof(typedText_database_DEFAULT) / sizeof(touchgfx::TypedText::TypedTextData);
}

const touchgfx::Font** getFonts()
{
    return _fonts;
}

const touchgfx::Font* setFont(touchgfx::FontId fontId, const touchgfx::Font* font)
{
    const touchgfx::Font* old = _fonts[fontId];
    _fonts[fontId] = font;
    return old;
}

void resetFont(touchgfx::FontId fontId)
{
    switch (fontId)
    {
    case 0:
        _fonts[0] = &(getFont_malgunbd_20_4bpp());
        break;
    case 1:
        _fonts[1] = &(getFont_verdana_40_4bpp());
        break;
    case 2:
        _fonts[2] = &(getFont_verdana_10_4bpp());
        break;
    case 3:
        _fonts[3] = &(getFont_malgunbd_15_4bpp());
        break;
    case 4:
        _fonts[4] = &(getFont_gadugib_100_4bpp());
        break;
    case 5:
        _fonts[5] = &(getFont_malgunbd_19_4bpp());
        break;
    case 6:
        _fonts[6] = &(getFont_malgunbd_90_4bpp());
        break;
    case 7:
        _fonts[7] = &(getFont_malgunbd_13_4bpp());
        break;
    case 8:
        _fonts[8] = &(getFont_malgunbd_16_4bpp());
        break;
    case 9:
        _fonts[9] = &(getFont_malgunbd_12_4bpp());
        break;
    case 10:
        _fonts[10] = &(getFont_malgunbd_22_4bpp());
        break;
    case 11:
        _fonts[11] = &(getFont_malgunbd_18_4bpp());
        break;
    case 12:
        _fonts[12] = &(getFont_malgunbd_24_4bpp());
        break;
    }
}
}  // namespace TypedTextDatabase
