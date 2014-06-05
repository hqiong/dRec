//
//  main.cpp
//  dRec
//
//  Author: Yi Hua & Zhenyu Guo
//  Copyright (c) 2014 Rice University. All rights reserved.
//
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace cv;
using namespace std;

// Function declarations
int readCameras();

// Global variables
const int CAMNUM = 1;           // Number of cameras in total
Mat im[CAMNUM];                 // Array of images taken from each camera

string BASH_SCRIPT_DIR = "/Users/hawaii/Code/dRec/dRec/";

const bool debug = true;        // Display debug info if true

//
// Main routine for counting number of people in the scene
//
int main(int argc, const char * argv[])
{
    int error = 0;
    
    /* SETUP PHASE */
    /* Read views from cameras; camera 0 is taken as the reference view */
    if ((error = readCameras()) != 0){
        return error;
    }
    // Display images for debug purpose
    
    
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
    
    
    
    
    cout << "Hello, World!\n" << "\n";
    return 0;
}

//
//  Read an image from each camera by running a bash script
//
//  Requires: cam_num - number of cameras in total: a positive number
//  Effects: Saves an image from each camera locally then read into global variable im
//
int readCameras(){
    // Run bash script to save captures from cameras to local
    string bash_script = BASH_SCRIPT_DIR + "imFromCams1.sh";
    system(bash_script.c_str());
    
    if (debug){
        cout << "Finished running bash script.\n";
        //waitKey(0);
    }
    
    // Read in the local pictures
    for (int i = 0; i < CAMNUM; i++){
        string imname = to_string(i) + ".jpg";
        im[i] = imread(imname, CV_LOAD_IMAGE_COLOR);
    }
    
    // Check for invalid input
    for (int i = 0; i < CAMNUM; i++){
        if(!im[i].data ){
            cout <<  "Could not open or find the image" << i <<"; check number of cameras CAMNUM " << std::endl;
            return -1;
        } else {
            if (debug){
                // Display image for debug purpose
                namedWindow( "Display window", WINDOW_AUTOSIZE );   // Create a window for display.
                imshow( "Display window", im[i] );                  // Show our image inside it.
                
                waitKey(0);                                         // Wait for a keystroke in the window
            }
        }
        
    }

    return 0;
}

