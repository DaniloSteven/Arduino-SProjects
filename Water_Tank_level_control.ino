  int var=0;//cambio de case
  int esperar=1000;//tiempo de espera
  int contador=0;
  int potencia=0;
  bool prender=false;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(2,OUTPUT);//segmento g
  pinMode(3,OUTPUT);//segmento f
  pinMode(4,OUTPUT);//segmento a
  pinMode(5,OUTPUT);//segmento b
  pinMode(6,OUTPUT);//segmento e
  pinMode(7,OUTPUT);//segmento d
  pinMode(8,OUTPUT);//segmento c
  pinMode(9,OUTPUT);//display 2
  pinMode(10,OUTPUT);//display 2
  pinMode(11,OUTPUT);//display 2
  pinMode(12,OUTPUT);//display 2
  pinMode(13,OUTPUT);//display 2
  pinMode(A2,OUTPUT);//display 2
  pinMode(A3,OUTPUT);//display 2
  pinMode(A3,OUTPUT);//Alarma 1 >80%
  pinMode(A3,OUTPUT);//Alamrma 2 <10%
 
}

void loop() {
////
    
  int valorpot=0;
  valorpot=analogRead(1);
  Serial.print("valor del potenciometro:");
  Serial.println(valorpot);
     
  delay(30);
  var=var+1;/*
  switch(var)//Cambio de cuenta numero

  
  {
 */
 if(valorpot<121)//numero 0 display 2
  {
      potencia=0;
      digitalWrite(9,LOW); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
      
      
  }

   if(valorpot<221&&valorpot>=121)//numero 1 display 2
  {
      potencia=100;
      digitalWrite(9,LOW); //segmento g
      digitalWrite(10,LOW); //segmento f
      digitalWrite(11,LOW); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,LOW); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

   if(valorpot<321&&valorpot>=221)//numero 2 display 2
  {
    potencia=200;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,LOW); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,LOW); //segmento c
      prender=true;
  }


   if(valorpot<421&&valorpot>=321)//numero 3 display 2
  {
    potencia=300;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,LOW); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

   if(valorpot<521&&valorpot>=421)//numero 4 display 2
  {
    potencia=400;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,LOW); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,LOW); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }



  if(valorpot<621&&valorpot>=521)//numero 5 display 2
  {
    potencia=500;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

       if(valorpot<721&&valorpot>=621)//numero 6 display 2
  {
    potencia=600;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

      if(valorpot<821&&valorpot>=721)//numero 7 display 2
  {
    potencia=700;
      digitalWrite(9,LOW); //segmento g
      digitalWrite(10,LOW); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,LOW); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }
     if(valorpot<921&&valorpot>=821)//numero 8 display 2
  {
    potencia=800;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

     if(valorpot<1021&&valorpot>=921)//numero 9 display 2
  {
    potencia=900;
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(A2,HIGH); //segmento d
      digitalWrite(A3,HIGH); //segmento c
      prender=true;
  }

      //LEDS DE ALARMA
      
      if(valorpot>=921)
      {
        digitalWrite(A4,HIGH); //alarma ON >80%
      }
      else
      {
        digitalWrite(A4,LOW); //alarma OFF >80%
      }
      /////
      if(valorpot<=131)
      {
        digitalWrite(A5,HIGH); //alarma ON <10%
     
      }
      else
      {
        digitalWrite(A5,LOW); //alarma OFF <10%
      }

//segundo display

if(prender)
{
 if(valorpot>0+potencia&&valorpot<31+potencia)//numero 0 display 1
  {
     digitalWrite(2,LOW); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c

  }
  if(valorpot>32+potencia&&valorpot<41+potencia)//numero 1 display 1
  {
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
  }
 
 if(valorpot>41+potencia&&valorpot<51+potencia)//numero 2 display 1
 {
      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,LOW); //segmento c
 }

if(valorpot>51+potencia&&valorpot<61+potencia)//numero 3 display 1
 {
      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }

 if(valorpot>61+potencia&&valorpot<71+potencia)//numero 4 display 1
 {
      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }
 if(valorpot>71+potencia&&valorpot<81+potencia)//numero 5 display 1
 {
      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,LOW); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }
 if(valorpot>81+potencia&&valorpot<91+potencia)//numero 6 display 1
 {
     digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,LOW); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }

 if(valorpot>91+potencia&&valorpot<101+potencia)//numero 7 display 1
 {
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }

 if(valorpot>101+potencia&&valorpot<111+potencia)//numero 8 display 1
 {
     digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }

  if(valorpot>111+potencia&&valorpot<121+potencia)//numero 9 display 1
 {
      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
 }

}
 
 
 
 

}



