//Begin page main
//Begin2
float posA[2];
float posB[2];
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
    counter = counter + 1;
    if (counter < 10) {
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
