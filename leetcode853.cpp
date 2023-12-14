class Solution {
    class Car{
      public:
      int pos;
      int speed;
    Car(int p,int s):pos(p), speed(s){}; 
       };
    static bool mycamp(Car&a,Car&b){
        return a.pos<b.pos;
    }

public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car>cars;
        for(int i=0;i<position.size();i++){
            Car Car(position[i],speed[i]);
            cars.push_back(Car);
        }
        sort(cars.begin(),cars.end(),mycamp);
        stack<float>st;
        for(auto Car:cars){
            float time=(target-Car.pos)/((float)Car.speed);
            while(!st.empty()&&time>=st.top()){
                st.pop();
            }
            st.push(time);
        }
        return st.size();
    }
};