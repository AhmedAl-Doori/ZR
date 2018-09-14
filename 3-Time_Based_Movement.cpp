//Begin page main
//Declare any variables shared between functions here
float posA[3];
float posB[3];
int counter;
void init(){
	//This function is called once when your code is first loaded.
	//IMPORTANT: make sure to set any variables that need an initial value.
	
	//Do not assume variables will be set to 0 automatically!
	posA[0] = 0.1f;
    posA[1] = 0.2f;
    posA[2] = -0.2f;
    
    posB[0] = -0.2f;
    posB[1] = -0.3f;
    posB[2] = 0.5f;
	
	counter =0;
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
    float getMyZRState[12];
    float mathVecSubtract()
    float mathVecMagnitude()
    api.setPositionTarget(posA);
       DEBUG(("Going to point A"));
    }
    else {
        api.setPositionTarget(posB);
        DEBUG(("Going to point B"));
    }
}
// function that returns the distance between two points
//End page main
