#pragma once
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
#include <vcclr.h>
using namespace System;
using namespace System::Windows::Forms;
public ref class SharedData
{
private:
    static DateTime sharedDateTime;

public:
    // Property to access the shared DateTime object
    static property DateTime SharedDateTime
    {
        DateTime get()
        {
            if (sharedDateTime == DateTime::MinValue)
            {
                sharedDateTime = DateTime::Now; // Initialize on first access
            }
            return sharedDateTime;
        }

        void set(DateTime value)
        {
            sharedDateTime = value;
        }
    }

    // Method to increment the DateTime by a day
    static void AddDay()
    {
        sharedDateTime = sharedDateTime.AddDays(1);
    }
};