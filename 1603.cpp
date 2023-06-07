class ParkingSystem {
public:
    int b=0,m=0,s=0;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        if(carType==1&&b==0 ||carType==2&&m==0 ||carType==3&&s==0 ) return false;
        if(carType==1) b=b-1;
        if(carType==2) m=m-1;
        if(carType==3) s=s-1;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
