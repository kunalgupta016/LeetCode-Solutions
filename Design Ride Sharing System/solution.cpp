class RideSharingSystem {
public:
    queue<int> rider;
    queue<int> driver;
    unordered_set<int> waiting;
    unordered_set<int> cancel;

    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        rider.push(riderId);
        waiting.insert(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(!rider.empty() && cancel.count(rider.front())){
            int rid = rider.front();
            rider.pop();
            cancel.erase(rid);
            waiting.erase(rid);

        }

        if(!rider.empty() && !driver.empty()){
            int d = driver.front();
            int r = rider.front();
            driver.pop();
            rider.pop();
            waiting.erase(r);
            return {d,r};
        }
        return {-1,-1};


    }
    
    void cancelRider(int riderId) {
        if(waiting.count(riderId)){
            cancel.insert(riderId);
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */