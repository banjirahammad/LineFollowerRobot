/*
 * Line Follower Robot
 */
 
 #define PWMmotor1 5 
 #define Motor11 6 //LEFT MOTOR
 #define Motor12 7
 #define Motor21 8 //RIGHT
 #define Motor22 9
 #define PWMmotor2 10
 
void setup() {
  
  pinMode(Motor11,OUTPUT);  //left motor
  pinMode(Motor12,OUTPUT);  //left motor
  pinMode(Motor21,OUTPUT);  //right motor
  pinMode(Motor22,OUTPUT);  //right motor
  pinMode(PWMmotor1,OUTPUT);   //left 
  pinMode(PWMmotor2,OUTPUT);   //right

  pinMode(12, INPUT); // initialize Right sensor as an inut
  pinMode(11, INPUT); // initialize Left sensor as as input

}

void loop() {

    int LEFT_SENSOR = digitalRead(11);
    int RIGHT_SENSOR = digitalRead(12);

    if(RIGHT_SENSOR==LOW && LEFT_SENSOR==LOW) //FORWARD
    {
            digitalWrite(Motor11, LOW);
            digitalWrite(Motor12, HIGH);
            digitalWrite(Motor21, LOW);
            digitalWrite(Motor22, HIGH);
            analogWrite(PWMmotor1, 250);
            analogWrite(PWMmotor2, 250);
    }

    else if(RIGHT_SENSOR==HIGH && LEFT_SENSOR==LOW) //LEFT
    {
            digitalWrite(Motor11, LOW);
            digitalWrite(Motor12, HIGH);
            digitalWrite(Motor21, LOW);
            digitalWrite(Motor22, LOW);
            analogWrite(PWMmotor1, 250);
            analogWrite(PWMmotor2, 0);
    }

    else if(RIGHT_SENSOR==LOW && LEFT_SENSOR==HIGH) //RIGHT
    {
              digitalWrite(Motor11, LOW);
              digitalWrite(Motor12, LOW);
              digitalWrite(Motor21, LOW);
              digitalWrite(Motor22, HIGH);
              analogWrite(PWMmotor1, 0);
              analogWrite(PWMmotor2, 250);
    }

    else if(RIGHT_SENSOR==HIGH && LEFT_SENSOR==HIGH) //STOP
    {
              digitalWrite(Motor11, LOW);
              digitalWrite(Motor12, LOW);
              digitalWrite(Motor21, LOW);
              digitalWrite(Motor22, LOW);
    }

    
}
