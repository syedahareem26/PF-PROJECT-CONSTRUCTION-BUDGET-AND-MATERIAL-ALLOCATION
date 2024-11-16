#include<iostream>
using namespace std;

void printRooms(int n, double materialPerRoom, double bricksPerRoom, double cementPerRoom, double steelPerRoom) {
    for (int i = 1; i <= n; i++) {
        cout << "Room no: " << i << " - Material Quantity: " << materialPerRoom
             << " Bricks: " << bricksPerRoom << " units, Cement: " << cementPerRoom << " units, Steel: " << steelPerRoom << " units" << endl;
    }
}

int main() {
    int area, storey;
    cout << "Enter the area on which you want to build (consider the range of 3 to 20 marlas):" << endl;
    cin >> area;
    cout << "The area on which you want to build is: " << area << " marlas" << endl;

    if (area >= 3 && area <= 5) {
        cout << "Now choose the number of storeys for your building (max should be 2):" << endl;
        cin >> storey;
    } else if (area >= 6 && area <= 10) {
        cout << "Now choose the number of storeys for your building (max should be 3):" << endl;
        cin >> storey;
    } else if (area >= 11 && area <= 20) {
        cout << "Now choose the number of storeys for your building (max should be 4):" << endl;
        cin >> storey;
    } else {
        cout << "You entered the wrong value." << endl;
        return 1;
    }

    double budget;
    cout << "Enter your budget for construction: $";
    cin >> budget;

    const int maxRoomsPerFloor = 5;  // Maximum rooms per floor

    double materialCostPerFloor[4];   //Material cost for each floor
    double bricksCostPerFloor[4];    // Bricks cost for each floor
    double cementCostPerFloor[4];    // Cement cost for each floor
    double steelCostPerFloor[4];     // Steel cost for each floor
    int roomsPerFloor[4];            // Number of rooms on each floor

    // Measurement scale for materials
    const string bricksScale = "imperial";
    const string cementScale = "kgs";
    const string steelScale = "kg/m^3";

    switch (storey) {
        case 1: {
            cout << "Enter the number of rooms (consider the range of 0 to " << maxRoomsPerFloor << "):" << endl;
            cin >> roomsPerFloor[0];

            // Material calculation
            materialCostPerFloor[0] = budget / storey;
            bricksCostPerFloor[0] = materialCostPerFloor[0] * 0.4;
            cementCostPerFloor[0] = materialCostPerFloor[0] * 0.3;
            steelCostPerFloor[0] = materialCostPerFloor[0] * 0.2;

            // Display material details for each floor
            cout << "\nMaterial Details for Floor 1:\n";
            cout << "Material Cost For Flooring: $" << materialCostPerFloor[0] << "\n";
            cout << "Bricks Quantity: " << bricksCostPerFloor[0] << " " << bricksScale << "\n";
            cout << "Cement Quantity: " << cementCostPerFloor[0] << " " << cementScale << "\n";
            cout << "Steel Quantity: " << steelCostPerFloor[0] << " " << steelScale << "\n";

            // Divide material  among rooms
            double materialPerRoom = materialCostPerFloor[0] / roomsPerFloor[0];
            double bricksPerRoom = bricksCostPerFloor[0] / roomsPerFloor[0];
            double cementPerRoom = cementCostPerFloor[0] / roomsPerFloor[0];
            double steelPerRoom = steelCostPerFloor[0] / roomsPerFloor[0];
            printRooms(roomsPerFloor[0], materialPerRoom, bricksPerRoom, cementPerRoom, steelPerRoom);
            break;
        }

        case 2:
            for (int i = 0; i < storey; ++i) {
                cout << "Enter the number of rooms (consider the range of 0 to " << maxRoomsPerFloor << ") for floor " << i + 1 << ":" << endl;
                cin >> roomsPerFloor[i];

                // Material calculation
                materialCostPerFloor[i] = budget / storey;
                bricksCostPerFloor[i] = materialCostPerFloor[i] * 0.4;
                cementCostPerFloor[i] = materialCostPerFloor[i] * 0.3;
                steelCostPerFloor[i] = materialCostPerFloor[i] * 0.2;

                // Display material details for each floor
                cout << "\nMaterial Details for Floor " << i + 1 << ":\n";
                cout << "Material Cost For Flooring: $" << materialCostPerFloor[i] << "\n";
                cout << "Bricks Quantity: " << bricksCostPerFloor[i] << " " << bricksScale << "\n";
                cout << "Cement Quantity: " << cementCostPerFloor[i] << " " << cementScale << "\n";
                cout << "Steel Quantity: " << steelCostPerFloor[i] << " " << steelScale << "\n";

                // Divide material costs among rooms
                double materialPerRoom = materialCostPerFloor[i] / roomsPerFloor[i];
                double bricksPerRoom = bricksCostPerFloor[i] / roomsPerFloor[i];
                double cementPerRoom = cementCostPerFloor[i] / roomsPerFloor[i];
                double steelPerRoom = steelCostPerFloor[i] / roomsPerFloor[i];
                printRooms(roomsPerFloor[i], materialPerRoom, bricksPerRoom, cementPerRoom, steelPerRoom);
            }
            break;
		
		case 3:
			for (int i = 0; i < storey; ++i) {
                cout << "Enter the number of rooms (consider the range of 0 to " << maxRoomsPerFloor << ") for floor " << i + 1 << ":" << endl;
                cin >> roomsPerFloor[i];

                // Material calculation
                materialCostPerFloor[i] = budget / storey;
                bricksCostPerFloor[i] = materialCostPerFloor[i] * 0.4;
                cementCostPerFloor[i] = materialCostPerFloor[i] * 0.3;
                steelCostPerFloor[i] = materialCostPerFloor[i] * 0.2;

                // Display material details for each floor
                cout << "\nMaterial Details for Floor " << i + 1 << ":\n";
                cout << "Material Cost For Flooring: $" << materialCostPerFloor[i] << "\n";
                cout << "Bricks Quantity: " << bricksCostPerFloor[i] << " " << bricksScale << "\n";
                cout << "Cement Quantity: " << cementCostPerFloor[i] << " " << cementScale << "\n";
                cout << "Steel Quantity: " << steelCostPerFloor[i] << " " << steelScale << "\n";

                // Divide material costs among rooms
                double materialPerRoom = materialCostPerFloor[i] / roomsPerFloor[i];
                double bricksPerRoom = bricksCostPerFloor[i] / roomsPerFloor[i];
                double cementPerRoom = cementCostPerFloor[i] / roomsPerFloor[i];
                double steelPerRoom = steelCostPerFloor[i] / roomsPerFloor[i];
                printRooms(roomsPerFloor[i], materialPerRoom, bricksPerRoom, cementPerRoom, steelPerRoom);
            }
            break;
        
        case 4:
        	for (int i = 0; i < storey; ++i) {
                cout << "Enter the number of rooms (consider the range of 0 to " << maxRoomsPerFloor << ") for floor " << i + 1 << ":" << endl;
                cin >> roomsPerFloor[i];

                // Material calculation
                materialCostPerFloor[i] = budget / storey;
                bricksCostPerFloor[i] = materialCostPerFloor[i] * 0.4;
                cementCostPerFloor[i] = materialCostPerFloor[i] * 0.3;
                steelCostPerFloor[i] = materialCostPerFloor[i] * 0.2;

                // Display material details for each floor
                cout << "\nMaterial Details for Floor " << i + 1 << ":\n";
                cout << "Material Cost For Flooring: $" << materialCostPerFloor[i] << "\n";
                cout << "Bricks Quantity: " << bricksCostPerFloor[i] << " " << bricksScale << "\n";
                cout << "Cement Quantity: " << cementCostPerFloor[i] << " " << cementScale << "\n";
                cout << "Steel Quantity: " << steelCostPerFloor[i] << " " << steelScale << "\n";

                // Divide material costs among rooms
                double materialPerRoom = materialCostPerFloor[i] / roomsPerFloor[i];
                double bricksPerRoom = bricksCostPerFloor[i] / roomsPerFloor[i];
                double cementPerRoom = cementCostPerFloor[i] / roomsPerFloor[i];
                double steelPerRoom = steelCostPerFloor[i] / roomsPerFloor[i];
                printRooms(roomsPerFloor[i], materialPerRoom, bricksPerRoom, cementPerRoom, steelPerRoom);
            }
            break;

        default:
            cout << "Invalid number of storeys." << endl;
            return 1;
    }

    return 0;
}
