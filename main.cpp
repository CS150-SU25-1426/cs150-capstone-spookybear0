#include <iostream>
#include "VideoGameList.h"

int main() {
    VideoGameList inventory;
    int choice = 0;

    while (choice != 5) {
        std::cout << "\nVideo Game Inventory Menu\n"
                  << "1. Add Game\n"
                  << "2. Edit Game\n"
                  << "3. Delete Game\n"
                  << "4. Show All Games\n"
                  << "5. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title, platform, genre;

            std::cin.ignore(); // Clear the newline character from the input buffer

            std::cout << "Enter Title: ";
            std::getline(std::cin, title);

            std::cout << "Enter Genre: ";
            std::getline(std::cin, genre);

            std::cout << "Enter Platform: ";
            std::getline(std::cin, platform);

            VideoGame newGame(title, genre, platform);
            inventory.addGame(newGame);

            std::cout << "Game added successfully: id = " << newGame.getId() << std::endl;
        }
        else if (choice == 2) {
            int id;
            std::string title, platform, genre;

            std::cout << std::endl << "Game Inventory:" << std::endl;
            inventory.displayGames();

            std::cout << std::endl << "Enter ID of game to edit: ";
            std::cin >> id;
            std::cin.ignore();

            VideoGame* game = inventory.getGameById(id);

            if (game == nullptr) {
                std::cout << "Game not found.\n";
                continue;
            }

            std::cout << "Enter New Title (leave blank if unchanged): ";
            std::getline(std::cin, title);

            std::cout << "Enter New Genre (leave blank if unchanged): ";
            std::getline(std::cin, genre);

            std::cout << "Enter New Platform (leave blank if unchanged): ";
            std::getline(std::cin, platform);

            if (title.empty()) {
                std::cout << game << std::endl;
                title = game->getTitle();
            }
            if (genre.empty()) {
                genre = game->getGenre();
            }
            if (platform.empty()) {
                platform = game->getPlatform();
            }

            VideoGame updatedGame(id, title, genre, platform);
            if (inventory.editGame(id, updatedGame)) {
                std::cout << std::endl << "Game updated successfully." << std::endl;
            }
            else {
                std::cout << std::endl << "Game not found." << std::endl;
            }
        }
        else if (choice == 3) {
            std::cout << std::endl << "Game Inventory:" << std::endl;
            inventory.displayGames();

            int id;
            std::cout << std::endl << "Enter ID of game to delete: ";
            std::cin >> id;
            if (!inventory.deleteGame(id)) {
                std::cout << "Game not found.\n";
            }
        }
        else if (choice == 4) {
            std::cout << std::endl << "Game Inventory:" << std::endl;
            inventory.displayGames();
        }
        else if (choice != 5) {
            std::cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}