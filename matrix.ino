 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
}

void loop() {
  int x, y;
int matrix1[4][4];
  //if(Serial.available() > 0){
   // Serial.print("enter a width value"); 
   // x = Serial.read();
    //Serial.print("enter a length value"); 
   // y = Serial.read(); 

  
    if(Serial.available() > 0){
    
      
      for(int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
          
        int value = random(11); 
     
        matrix1[i][j] = value; 
      }
    }
    }
   // if(x.length() ==1 && y.length() ==1 ){
     // int solved = matrix1[0][0] * matrix1[1][1] - matrix1[0][1] * matrix[1][0]; 
      //Serial.print(solved); 

//}
//else if(x.length() == 2 && y.length() == 2){
  int solved1 = matrix1[0][0]*(matrix1[0][1] * matrix1[2][2] - matrix1[1][2] * matrix1[1][0]);
  int solved2 = matrix1[0][1]*(matrix1[1][0] * matrix1[2][2] - matrix1[1][2] * matrix1[2][0]);
  int solved3 = matrix1[0][2]*(matrix1[1][0] * matrix1[2][1] - matrix1[1][1] * matrix1[2][0]);
  solved1 = solved1-solved2; 
  solved1 = solved1+solved3; 


}
