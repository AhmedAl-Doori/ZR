//Begin page main
//Declare any variables shared between functions here
float posA[3];
float posB[3];
float posC[3];
float myPos[3];
float midVector[3];
float distance;
int counter;
#define myPos (&myState[0])

void init(){
	//This function is called once when your code is first loaded.
	//IMPORTANT: make sure to set any variables that need an initial value.
	
	//Do not assume variables will be set to 0 automatically!
//	posA[0] = -0.4f;
  //  posA[1] = 0.6f;
//    posA[2] = 0.0f;
    posB[0] = 0.4f;
    posB[1] = 0.6f;
    posB[2] = 0.0f;
    counter = 0;
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
    float myState[12];
    api.getMyZRState(myState);
    mathVecSubtract(midVector,posA,myPos,3);
    distance = mathVecMagnitude(midVector, 3);
    // game.getItemLoc(posA, 3);
    game.getItemLoc(posA, 3);
    api.setPositionTarget(posA);
    if (distance < 0.1){
        counter ++;
    }
        if (counter > 0) {
        api.setPositionTarget(posB);
    }
        DEBUG(("Distance %f", distance));

}
// function that returns the distance between two points
//End page main
