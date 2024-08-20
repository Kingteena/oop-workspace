#include "Orchestra.h"

Orchestra::Orchestra(){
    Orchestra(0);
    
}

Orchestra::Orchestra(int size){
    max_size = size;
    num_current_members = 0;
    members = new Musician[max_size];
}

int Orchestra::get_current_number_of_members(){
    return num_current_members;
}

bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < num_current_members; i++)
    {
        if (instrument == members[i].get_instrument()){
            return true;
        }
    }
    return false;
}

Musician *Orchestra::get_members(){
    return members;
}

bool Orchestra::add_musician(Musician new_musician){
    if (num_current_members == max_size)
    {
        return false;
    }
    members[num_current_members] = new_musician;
    num_current_members += 1;
    return true;
}

Orchestra::~Orchestra(){
    delete[] members;
}