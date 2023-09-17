#pragma once
#include<vector>
#include<map>
#include<string>
#include <chrono>
#include <thread>
#include <windows.h>
 


public:
    int RoomId;
    float Total;
    float Total_hours;
    bool available;
    std::chrono::steady_clock::time_point startTime;
    std::chrono::steady_clock::time_point endTime;
   

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
        //MessageBox(NULL, TEXT("Room rental is finished."), TEXT("Room Finished"), MB_ICONINFORMATION | MB_OK);
        //Beep(300, 20000);
    }
    }
};

