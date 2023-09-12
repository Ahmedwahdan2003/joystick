#pragma once
#include<vector>
#include<map>
#include<string>

 

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
    void add_product(std::string name, int money) {
        productPrices[name] = money;
    }
    void delete_product(std::string name) {
        productPrices.erase(name);
   }

};


class Room {
public:
	int RoomId;
	float Total;
    std::vector<std::string>orders;
    








};

