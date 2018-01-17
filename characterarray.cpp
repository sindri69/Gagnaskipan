#include "characterarray.h"

CharacterArray::CharacterArray()
{
    char* arr;
    arr = new char[INITIAL_CAPACITY + 1];
    NULL = '\0';
    size = 0;
    capacity = INITIAL_CAPACITY;
}

CharacterArray::CharacterArray(char* str, int length)
{
    capacity = INITIAL_CAPACITY;
    while(length > capacity) {
        capacity *= 2;
    }
    capacity += 1;
    size = length;

    char *arr;
    arr = new char[capacity];

    for(int i=0; i < size; i++) {
        arr[i] = str[i];
    }
    arr[size] = NULL;
}

CharacterArray::~CharacterArray()
{
    delete[] arr;
    delete[] str;
}

void CharacterArray::append(char c) { //1 parameter?
    arr[size] = c;
    size += 1;
    arr[size] = NULL;
}

void CharacterArray::insert(char c, int index) {
    size += 1;
    if(size > capacity) {
        capacity *= 2;
    }

    if (index = size-1) {
        arr[size] = c;
        size += 1;
        arr[size] = NULL;
        }
    else {
        for(int i=size-1; i >= 0; i--) {
            if(i == index) {
                arr[i] = c;
        }
            else if(i > index) {
                arr[i] = arr[i+1];
            }
        }
    }
}

void CharacterArray::setAt(char c, int index) {

    ///TODO: Implement
}

char CharacterArray::getAt(int index) {

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::pop_back() {

    //Example of throwing an exception
    if(isEmpty()) {
        throw EmptyException();
    }

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::removeAt(int index) {

    ///TODO: Implement
    return '\0'; //change or remove this line
}

void CharacterArray::clear() {

    ///TODO: Implement
}

int CharacterArray::length() {

    ///TODO: Implement
    return -1; //change or remove this line
}

bool CharacterArray::isEmpty() {

    ///TODO: Implement
    return true; //change or remove this line
}

char* CharacterArray::substring(int startIndex, int length) {

    ///TODO: Implement
    return NULL; //change or remove this line
}

ostream& operator <<(ostream& out, const CharacterArray& ca) {

    ///TODO: Implement
    return out; //change or remove this line
}


void reallocate_memmory(){

}
