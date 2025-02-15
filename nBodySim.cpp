// Evan Stark - February 14th, 2025 - ITCS 4145 001
// This program simulates a basic n body problem.
// I.e. simulating the movement of particles in 3 dimensions.
// Will track the particles force, position, mass, and velocity and use those variables to
// continously update most of those said variables.

// Importing all necessary libraries.
#include <iostream>
#include <cstdlib>
#include <random>
#include <chrono>
#include <vector>

// Global variables
double gravity = 0.000000000

using namespace std;

// Struct to hold particle's attributes.
struct particle {
    double mass;
    // 3 element arrays to hold the x, y, z components.
    double[] position = new double[3];
    double velocity[] = new double[3];
    double force[] = new double[3]; 
};

// Function for initializing a particles attributes.
