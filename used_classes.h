#pragma once
#include<vector>
#include<map>
#include<string>
#include <chrono>
#include <thread>
#include <windows.h>
 
using namespace System;
using namespace System::Collections::Generic;

public ref class SharedData {
private:
    static SharedData^ instance;
    Dictionary<String^, double>^ roomTimes; // Dictionary to store room times
    double totalAllRoomsCost;

public:
    static property SharedData^ Instance {
        SharedData^ get() {
            if (instance == nullptr) {
                instance = gcnew SharedData();
            }
            return instance;
        }
    }

    // Constructor
    SharedData() {
        roomTimes = gcnew Dictionary<String^, double>();
    }

    // Method to set room time
    void SetRoomTime(String^ roomName, double time) {
        roomTimes[roomName] = time;
    }

    // Method to get room time
    double GetRoomTime(String^ roomName) {
        if (roomTimes->ContainsKey(roomName)) {
            return roomTimes[roomName];
        }
        return 0.0; // Default value if room time is not found
    }

    // Property to get the total of all room costs
    property double TotalAllRoomsCost {
        double get() {
            return totalAllRoomsCost;
        }
        void set(double value) {
            totalAllRoomsCost = value;
        }
    }
    void AddHoursToRoomTime(String^ roomName, double hoursToAdd) {
        if (roomTimes->ContainsKey(roomName)) {
            // If the room already exists in the dictionary, add the hours to the existing value
            roomTimes[roomName] += hoursToAdd;
        }
        else {
            // If the room doesn't exist, create a new entry with the specified hours
            roomTimes->Add(roomName, hoursToAdd);
        }
    }
};