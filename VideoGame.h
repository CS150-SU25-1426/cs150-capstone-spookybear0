#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <string>
#include <iostream>

class VideoGame {
private:
    static int nextId; // static variable to keep track of the next id

    int id;
    std::string title;
    std::string genre;
    std::string platform;

public:
    // constructors
    VideoGame();
    VideoGame(const std::string& title, const std::string& genre, const std::string& platform);
    VideoGame(const int id, const std::string& title, const std::string& genre, const std::string& platform);

    // getters
    int getId() const;
    std::string getTitle() const;
    std::string getGenre() const;
    std::string getPlatform() const;

    // setters
    void setId(int id);
    void setTitle(const std::string& title);
    void setGenre(const std::string& genre);
    void setPlatform(const std::string& platform);

    // operators
    bool operator==(const VideoGame& other) const;
    friend std::ostream& operator<<(std::ostream& out, const VideoGame& game);
};

#endif