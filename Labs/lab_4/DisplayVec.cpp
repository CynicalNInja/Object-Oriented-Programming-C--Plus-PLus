//DisplayVec.cpp 
#include "DisplayVec.h" 

/**
 * @brief construct a new display vec :: display Vec object 
 * 
 */
 DisplayVec:: DisplayVec(){

 }

 /**
  * @brief prints the integers in vec   
  * 
  * @param v 
  */
void DisplayVec::printVector(const vector<int> v){
for(int i = 0; i < v.size(); i++){
    cout << v[i]<< endl;
}
}

/**
 * @brief returns the memory size of vec 
 * 
 * @param v 
 * @return int 
 */
int DisplayVec::getVectMemSize(const vector<int> v){
    int mem_size = 0; 
    for(int i = 0; i < v.size(); i++){
        mem_size += size(v[i]); //mem_size = mem_size + sizeof(v[i])
    }
    return mem_size;
}
DisplayVec::printMetaVector(const vector<int> v){

}
const int * DisplayVec::getAddress(vector<int> v, int index){

}