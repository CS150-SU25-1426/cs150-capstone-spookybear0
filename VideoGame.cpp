#include "VideoGame.h"

int VideoGame::nextId = 1; // start ids from 1

// constructors
VideoGame::VideoGame() : id(0), title("Unknown"), genre("Unknown"), platform("Unknown") {}
VideoGame::VideoGame(const std::string& title, const std::string& genre, const std::string& platform)
    : id(0), title(title), genre(genre), platform(platform) {
    id = nextId++; // Assign the next available ID
}
VideoGame::VideoGame(const int id, const std::string& title, const std::string& genre, const std::string& platform)
    : id(id), title(title), genre(genre), platform(platform) {}

// getters
int VideoGame::getId() const { return id; }
std::string VideoGame::getTitle() const { return title; }
std::string VideoGame::getGenre() const { return genre; }
std::string VideoGame::getPlatform() const { return platform; }

// setters
void VideoGame::setTitle(const std::string& t) { title = t; }
void VideoGame::setGenre(const std::string& g) { genre = g; }
void VideoGame::setPlatform(const std::string& p) { platform = p; }

// == check if two VideoGame objects are equal
bool VideoGame::operator==(const VideoGame& other) const {
    return title == other.title &&
           genre == other.genre &&
           platform == other.platform;
}

// << output operator for VideoGame
std::ostream& operator<<(std::ostream& out, const VideoGame& game) {
    out << "VideoGame(id=" << game.id
        << ", title=\"" << game.title
        << "\", genre=\"" << game.genre
        << "\", platform=\"" << game.platform << "\")";
    return out;
}