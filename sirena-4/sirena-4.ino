/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(xiulet, 350, valPot0);    // xiulet de durada valPot0
  delay(20);              // esperar valPot0 del xiulet + valPot0 silenci


  
  tone(xiulet, 8000, valPot0);    // xiulet de durada valPot0
  delay(20);              // esperar valPot0 del xiulet + valPot0 
}

//********** Funcions *************************************************************




