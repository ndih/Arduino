// ---------------------------------------------
// Contoh pembangkitan bilangan acak
// ---------------------------------------------

const int MAKS = 9;

void setup()
{
  Serial.begin(9600);
    
  // Tampilkan 3 bilangan acak tanpa randomSeed()
  Serial.println("Bilangan acak tanpa randomSeed()");
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  
  // Tampilkan 3 bilangan acak dengan randomSeed(67)
  Serial.println("Bilangan acak dengan randomSeed(67)");
  
  randomSeed(67);
  
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  
  // Tampilkan 3 bilangan acak dengan randomSeed(analogRead(0))
  Serial.println("Bilangan acak dengan randomSeed(analogRead(0))");
  
  randomSeed(analogRead(0));
  
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  Serial.println(random(MAKS));
  
}

void loop()
{
  
}
