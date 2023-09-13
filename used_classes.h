#pragma once
#include<vector>
#include<map>
#include<string>
#include <chrono>
#include <thread>
#include <windows.h>
 
class Products {
private:
    std::map<std::string, double> productPrices;

public:
    // Constructor to initialize the map
    Products() {
        productPrices = {
            {"Product1", 10.99},
            {"Product2", 5.99},
            {"Product3", 8.49},
            {"Product4", 12.99},
            {"Product5", 7.29}
        };
    }

    // Function to add product
    void add_product(std::string& name, int money) {
        productPrices[name] = money;
    }
    void delete_product(std::string& name) {
        productPrices.erase(name);
   }
    void edit_prices(std::string& name, int newprice) {
        productPrices[name] = newprice;

    }

};


class GameRoom {
public:
    int RoomId;
    float Total;
    std::vector<std::string> orders;
    std::chrono::steady_clock::time_point startTime;
    std::chrono::steady_clock::time_point endTime;
    std::map<std::string, double> orderedProducts;

    GameRoom(int roomId) : RoomId(roomId), Total(0) {}

    void startTimer() {
        startTime = std::chrono::steady_clock::now();
    }

    void stopTimer() {
        endTime = std::chrono::steady_clock::now();
    }

    void rentForFixedTime(double hours) {
        startTimer();
        std::this_thread::sleep_for(std::chrono::hours(static_cast<int>(hours)));
        stopTimer();

        // Display a notification message box
        MessageBox(NULL, TEXT("Room rental is finished."), TEXT("Room Finished"), MB_ICONINFORMATION | MB_OK);
        //Beep(300, 20000);
    }

    

    void calculateCost() {
        std::chrono::duration<double> elapsed = endTime - startTime;
        double timeInHours = elapsed.count() / 3600.0;

        double roomCost = timeInHours * 50.0;

        for (const auto& order : orders) {
            if (orderedProducts.find(order) != orderedProducts.end()) {
                roomCost += orderedProducts[order];
            }
        }

        Total = static_cast<float>(roomCost);
        //return roomCost;
    }
};

