#include "VideoGameList.h"
#include <iostream>

void VideoGameList::addGame(const VideoGame& game) {
    games.push_back(game);
}

VideoGame* VideoGameList::getGameById(int id) {
    for (auto& game : games) {
        if (game.getId() == id) {
            return &game; // return a pointer to the found game
        }
    }
    return nullptr; // if nothing is found
}

bool VideoGameList::editGame(int id, const VideoGame& updatedGame) {
    for (auto& game : games) {
        if (game.getId() == id) {
            game = updatedGame;
            return true;
        }
    }
    return false;
}

bool VideoGameList::deleteGame(int id) {
    for (auto it = games.begin(); it != games.end(); ++it) {
        if (it->getId() == id) {
            games.erase(it);
            return true;
        }
    }
    return false;
}

void VideoGameList::displayGames() const {
    if (games.empty()) {
        std::cout << "No games in inventory.\n";
        return;
    }
    for (const auto& game : games) {
        std::cout << game << "\n";
    }
}