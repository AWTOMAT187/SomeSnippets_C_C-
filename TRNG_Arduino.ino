
void PRNGseed(){
  int temp=0;
  for(int i =0; i<32;i++){
      temp ^= (analogRead(A0)&0x1); 
      temp<<i;
}
randomSeed(temp);
}


void setup() {
Serial.begin(9600);
 
 Serial.println("Initializing PRNG...");
 pinMode(A0,INPUT);//PORT.A &=(~10000000);
 PRNGseed();
 
 Serial.print("Zufallszahl: ");
 Serial.println(random(65535));
 Serial.println("");
}

void loop() {
  PRNGseed();
   Serial.println(random(65535));
delay(1000);
Serial.print(analogRead(A0));
Serial.println(" Volt");
}


