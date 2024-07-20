#include <iostream>
#include <vector>
using namespace std;

// Base class for drone operations
class DroneOperation {
public:
    virtual void execute() = 0;
};

// Drone operation to takeoff
class TakeoffOperation : public DroneOperation {
public:
    void execute() override {
        cout << "Drone is taking off." << endl; // O(1)
    }
};

// Drone operation for surveys
class SurveyOperation : public DroneOperation {
public:
    void execute() override {
        cout << "Drone is surveying." << endl; // O(1)
    }
};

// Drone operation for returning to home
class ReturnToHomeOperation : public DroneOperation {
public:
    void execute() override {
        cout << "Drone is returning to home." << endl; // O(1)
    }
};

// Drone operation for landing
class LandOperation : public DroneOperation {
public:
    void execute() override {
        cout << "Drone is landing." << endl; // O(1)
    }
};

// Class for mission planning
class MissionPlanning {
public:
    void planRoute(int source, int destination) {
        cout << "Planning route from node " << source << " to node " << destination << "." << endl; // O(1)
        // implementingg Dijkstra's algorithm 
        //  time complexity would be O(V + E log V), V is the number of nodes and E is the number of edges
        cout << "Drone's path: ";
        
        cout << "Edge1 -> Edge2 -> Edge3 -> .. -> EdgeN" << endl; // O(1)
    }
};

// Class for survey operation
class Survey {
public:
    void startSurvey() {
        cout << "Survey operation started" << endl; // O(1)
    }
};

int main() {
    DroneOperation* takeoff = new TakeoffOperation();
    DroneOperation* returnToHome = new ReturnToHomeOperation();
    DroneOperation* land = new LandOperation();
    MissionPlanning missionPlanning;
    Survey survey;

    takeoff->execute();

    missionPlanning.planRoute(1, 100); 

    survey.startSurvey(); 

    returnToHome->execute(); 

    land->execute(); 

    delete takeoff; 
    delete returnToHome; 
    delete land; 

    return 0;
}
