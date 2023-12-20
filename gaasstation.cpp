class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int kitnakam=0;
       int kitnajaada=0;
       int konseindex=0;
       for(int i=0;i<gas.size();i++){
           kitnajaada=kitnajaada+gas[i]-cost[i];
           if(kitnajaada<0){
               kitnakam +=abs(kitnajaada);
               konseindex=i+1;
               kitnajaada=0;
           }
       } 
       if(kitnajaada-kitnakam >=0){
           return konseindex;
       }
       else {
           return -1;
       }
    }
};