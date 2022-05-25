void delayDev(unsigned long int time ,void (*fun_ptr)(int)  )
{
  unsigned long int timenow = millis();
  
  while((millis() - timenow) < time){
      (*fun_ptr)(NULL); 
  }

}

void task_1(void){
    Serial.println("inLop");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
}

void loop() {
  // put your main code here, to run repeatedly:
 delayDev(1000,task_1);
 delay(10000);
}
