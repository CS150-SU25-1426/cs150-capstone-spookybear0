#ifndef VIDEOGAMELIST_H
#define VIDEOGAMELIST_H

#include <vector>
#include "VideoGame.h"

class VideoGameList {
private:
    std::vector<VideoGame> games;

public:
    void addGame(const VideoGame& game);
    VideoGame* getGameById(int id);
    bool editGame(int id, const VideoGame& updatedGame);
    bool deleteGame(int id);
    void displayGames() const;
};

#endif