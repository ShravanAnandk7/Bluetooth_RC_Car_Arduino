
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);

pinMode(3,OUTPUT);

pinMode(4,OUTPUT);

pinMode(5,OUTPUT);
}

void loop() {
      if(Serial.available()>0){          
        char c=Serial.read();
        
        Serial.println("available c = ");
        Serial.println(c);
        switch(c)
        {
          case 'f':  
          break;
          }
        if((c=='f')||(c=='F'))
        {
          digitalWrite(2,1);
           digitalWrite(3,0);
             digitalWrite(4,1);
              digitalWrite(5,0);
              Serial.println("forward");
        }
         if((c=='b')||(c=='B'))
        {
          digitalWrite(2,0);
           digitalWrite(3,1);
             digitalWrite(4,0);
              digitalWrite(5,1);
                  Serial.println("back");
        }
         if((c=='l')||(c=='L'))
        {
          digitalWrite(2,0);
           digitalWrite(3,1);
             digitalWrite(4,1);
              digitalWrite(5,0);
                  Serial.println("left");
        }

   if((c=='r')||(c=='R'))
        {
          digitalWrite(2,1);
           digitalWrite(3,0);
             digitalWrite(4,0);
              digitalWrite(5,1);
            Serial.println("right");
        }
         if((c=='s')||(c=='S'))
        {
          digitalWrite(2,0);
          digitalWrite(3,0);
          digitalWrite(4,0);
          digitalWrite(5,0);
          Serial.println("stop");
        }
  if((c=='G')||(c=='g'))
        {
          digitalWrite(2,0);
          digitalWrite(3,0);
          digitalWrite(4,1);
          digitalWrite(5,0);
          Serial.println("left up");
        }
          if((c=='h')||(c=='H'))
        {
          digitalWrite(2,0);
           digitalWrite(3,0);
             digitalWrite(4,0);
              digitalWrite(5,1);
                  Serial.println("left down");
        }


          if((c=='I')||(c=='i'))
        {
          digitalWrite(2,1);
          digitalWrite(3,0);
          digitalWrite(4,0);
          digitalWrite(5,0);
          Serial.println("right up");
        }


          if((c=='J')||(c=='j'))
        {
          digitalWrite(2,0);
          digitalWrite(3,1);
          digitalWrite(4,0);
          digitalWrite(5,0);
          Serial.println("right down");
        }
        }
        else {
          digitalWrite(2,0);
          digitalWrite(3,0);
          digitalWrite(4,0);
          digitalWrite(5,0);
          Serial.println("stop");
          }
  
  
}
  


