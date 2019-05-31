#include "beer_song.h"

std::string beer::verse(const short bottles)
{
    switch (bottles)
    {
    case 0:
        return "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
    case 1:
        return "1 bottle of beer on the wall, 1 bottle of beer.\n"
            "Take it down and pass it around, no more bottles of beer on the wall.\n";
    case 2:
        return "2 bottles of beer on the wall, 2 bottles of beer.\n"
            "Take one down and pass it around, 1 bottle of beer on the wall.\n";

    default:
        return std::to_string(bottles) + " bottles of beer on the wall, "
                + std::to_string(bottles) + " bottles of beer.\n"
                + "Take one down and pass it around, "
                + std::to_string(bottles - 1) + " bottles of beer on the wall.\n";
    }
}

std::string beer::sing(const short start, const short end)
{
    std::string song {};
    for (auto it = start; it >= end; --it)
    {
        song += verse(it);
        if (it != end) song += "\n";
    }
    return song;
}