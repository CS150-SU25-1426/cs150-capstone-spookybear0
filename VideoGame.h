#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <string>
#include <iostream>

class VideoGame {
private:
    std::string title;
    std::string genre;
    std::string platform;

public:
    // constructors
    VideoGame();
    VideoGame(const std::string& title, const std::string& genre, const std::string& platform);

    // getters
    std::string getTitle() const;
    std::string getGenre() const;
    std::string getPlatform() const;

    // setters
    void setTitle(const std::string& title);
    void setGenre(const std::string& genre);
    void setPlatform(const std::string& platform);

    // operators
    bool operator==(const VideoGame& other) const;
    friend std::ostream& operator<<(std::ostream& out, const VideoGame& game);
};

#endif