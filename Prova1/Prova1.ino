/*********************************************************************************
**                                                                              **
**                              Titol:                                          **
**                        Tipus de dades                                        **
**    Michael Caballero Delgado                                Data:   1/10/21  **
*********************************************************************************/

//********* Includes *************************************************************

//********** Variables ***********************************************************
int taula1 = 1;
int taula2 = 2;
int taula3 = 3;
int taula4 = 4;
int taula5 = 5;
int taula6 = 6;
int taula7 = 7;
int taula8 = 8;
int taula9 = 9;
int taula10 = 10;

//********** Setup ***************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula1);
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula1);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula1*i);    
  } 
  for (int i=0; i <= 10; i++)
   {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }
  
}

//********* Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}

//********* Funcions *************************************************************
