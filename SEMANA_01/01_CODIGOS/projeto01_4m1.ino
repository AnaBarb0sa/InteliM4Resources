// C++ code
//

const int led1 = 2;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{
  
  for(int h=0; h<3; h++){
    digitalWrite(led1, HIGH);
    delay(600);
    digitalWrite(led1, LOW);
    
    digitalWrite(led2, HIGH);
    delay(600);
    digitalWrite(led2, LOW);
    
    digitalWrite(led3, HIGH);
    delay(600);
    digitalWrite(led3, LOW);
    
    digitalWrite(led4, HIGH);
    delay(600);
    digitalWrite(led4, LOW);
    
  }
    
  for(int h=0; h<3; h++){
    digitalWrite(led4, HIGH);
    delay(600);
    digitalWrite(led4, LOW);
    
    digitalWrite(led1, HIGH);
    delay(600);
    digitalWrite(led1, LOW);
        
    digitalWrite(led3, HIGH);
    delay(600);
    digitalWrite(led3, LOW);
    
    digitalWrite(led2, HIGH);
    delay(600);
    digitalWrite(led2, LOW);

  }
  
  
}