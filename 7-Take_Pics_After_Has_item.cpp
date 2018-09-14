//Begin page main
float posA[3];
float posB[3];
float posC[3];
float posD[3];

float myPos[3];
float enPos[3];

float att[3];
float att2[3];
float midVector[3];
float distance;

#define myPos (&myState[0])
#define enPos (&enState[0])

void init(){
posD[0]= -0.4f;
posD[1] = -0.6f;
posD[2]= -0.51f;
att2[0]= 0.0f;
att2[1]= 0.0f;
att2[2]= 1.0f;
}

void loop(){
    float enState[12];
    float myState[12];
    api.getMyZRState(myState);
    api.getOtherZRState(enState);
    game.getItemLoc(posA, 3);
    game.getItemLoc(posB, 4);
    game.getItemLoc(posC, 5);
    
    if (game.getEnergy() < 2.0f){
        api.setPositionTarget(myPos);
    }
    if (game.getMemoryFilled() == 2){
        api.setAttitudeTarget(att2);
        game.uploadPics();
    }
    api.setPositionTarget(posA);
    if (game.hasItem(3) == 0){
        api.setPositionTarget(posB);
    }
    
    if (game.hasItem(4) == 0){
        api.setPositionTarget(posC);
    }
    
    if (game.hasItem(5) == 0){
        api.setPositionTarget(posD);
        mathVecSubtract(att,enPos,myPos,3);
        api.setAttitudeTarget(att);
        
        mathVecSubtract(midVector,enPos,myPos,3);
        distance = mathVecMagnitude(midVector, 3);
        if (distance > 0.5f and game.isFacingOther() and game.getEnergy() >1.0f and game.posInLight(myPos)){
            game.takePic();
        }
    }


   //     DEBUG(("Distance %f", distance));
}
//End page main
