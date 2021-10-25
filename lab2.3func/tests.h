#pragma once
#include <cassert>
#include "functions.h"

void testMinElement1 () {
    int * arr = new int [6] {1, 0, 2, 3, 5, 4};
    int result = minElement( arr , 6);
    assert ( result == 0);
}

void testMinElement2 () {
    int * arr = new int [5] {-1, 0, -2, -3, -5};
    int result = minElement( arr , 5);
    assert ( result == 0);
}
void testMinElement3 () {
    int * arr = new int [4] {-1, 0, 2, -4};
    int result = minElement( arr , 4);
    assert ( result == 0);
}
void testMinElement4 () {
    int * arr = new int [4] {-1, -2, -3, -4};
    int result = minElement( arr , 4);
    assert ( result == -1);
}
void testMinElement5 () {
    int * arr = new int [4] {2, 3, 1, 4};
    int result = minElement( arr , 4);
    assert ( result == 1);
}
void testMinElement6 () {
    int * arr = new int [4] {-3, 5, 7, -4};
    int result = minElement( arr , 4);
    assert ( result == -3);
}
void testMinElement7 () {
    int * arr = new int [6] {-9, 1, 2, 3, -4, -5};
    int result = minElement( arr , 6);
    assert ( result == 1);
}
void testMinElement8 () {
    int * arr = new int [4] {-1, 2, 3, 1};
    int result = minElement( arr , 4);
    assert ( result == -1);
}

void testSum1 () {
    int * arr = new int [5] {1, 2, 3, 4, 7};
    int result = sumAfterLastNull( 5 , arr);
    assert ( result == 0);
}

void testSum2 (){
    int * arr = new int [4] {1, 1, 0, 2};
    int result = sumAfterLastNull( 4 , arr);
    assert ( result == 2);
}
void testSum3 (){
    int * arr = new int [5] {1, 1, 0, 2, 3};
    int result = sumAfterLastNull( 5 , arr);
    assert ( result == 5);
}
void testSum4 (){
    int * arr = new int [5] {1, 1, 0, -2, 3};
    int result = sumAfterLastNull( 5 , arr);
    assert ( result == 1);
}
void testSum5 (){
    int * arr = new int [5] {1, 1, 0, -2, -3};
    int result = sumAfterLastNull( 5 , arr);
    assert ( result == -5);
}
void testSum6 (){
    int * arr = new int [8] {1, 1, 0, 2, 3, 0, 5, 1};
    int result = sumAfterLastNull( 8 , arr);
    assert ( result == 6);
}
void testSum7 (){
    int * arr = new int [8] {1, 1, 0, 2, 3, 0, -5, 1};
    int result = sumAfterLastNull( 8, arr);
    assert ( result == -4);
}
void testSum8 (){
    int * arr = new int [8] {1, 1, 0, 2, 3, 0, -5, -1};
    int result = sumAfterLastNull( 8 , arr);
    assert ( result == -6);
}
void testSum9 (){
    int * arr = new int [8] {1, 1, 0, 0, 2, 3, 5, -1};
    int result = sumAfterLastNull( 8 , arr);
    assert ( result == 9);
}
void testSum10 (){
    int * arr = new int [11] {1, 0, 0, 1, 0, 0, 0, 0, 5, 6, -1 };
    int result = sumAfterLastNull( 11 , arr);
    assert ( result == 10);
}
void runTestMinElement() {
    testMinElement1 ();
    testMinElement2 ();
    testMinElement3 ();
    testMinElement4 ();
    testMinElement5 ();
    testMinElement6 ();
    testMinElement7 ();
    testMinElement8 ();
}
void runTestSum() {
    testSum1 ();
    testSum2 ();
    testSum3 ();
    testSum4 ();
    testSum5 ();
    testSum6 ();
    testSum7 ();
    testSum8 ();
    testSum9 ();
    testSum10 ();
}



