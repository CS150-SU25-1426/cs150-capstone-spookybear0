#include "VideoGame.h"

// constructors
VideoGame::VideoGame() : title("Unknown"), genre("Unknown"), platform("Unknown") {}
VideoGame::VideoGame(const std::string& title, const std::string& genre, const std::string& platform)
    : title(title), genre(genre), platform(platform) {}

// getters
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
    out << "VideoGame(title=\"" << game.title
        << "\", genre=\"" << game.genre
        << "\", platform=\"" << game.platform << "\")";
    return out;
}