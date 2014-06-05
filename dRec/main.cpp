//
//  main.cpp
//  dRec
//
//  Author: Yi Hua & Zhenyu Guo
//  Copyright (c) 2014 Rice University. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    
    const int CAMNUM = 3;           // Number of cameras in total
    const int FRAMEWINDOW = 15;     // Windowsize in frames for segmentation & tracking
    
    /* SETUP PHASE */
    /* Read views from cameras; camera 0 is taken as the reference view */
    
    /* Synchronize camera 1,...,CAMNUM to camera 0 */
    
    /* Learn background for each camera */
    
    /* Obtain homography from camera 1,...,CAMNUM to camera 0 */
    
    
    /* PREDICTION PHASE */
    // for every FRAMEWINDOW
    /*   Compute foreground probability from each camera */
    
    //   For each plane (parallel to the ground plane) do ...
    
    /*     Update homographies if needed for camera 1,...,CAMNUM */
    
    /*     Using homographies; wrap camera 1,...,CAMNUM to reference view */
    
    /*     Obtain synergy map of this plane and put it on the stack */
    
    /* Segmentation to count number of people */
    
    
    
    
    std::cout << "Hello, World!\n" << CAMNUM << "\n" << FRAMEWINDOW <<"\n";
    return 0;
}

