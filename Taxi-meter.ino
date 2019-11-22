//@DANILO PANADERO Y JAIRO ANDRES
//TAXIMETRO
//@25/10/2017
//@VERSION 1.0
  
  
  int var=0;//cambio de case
  int esperar=1000;//tiempo de espera
  int contador=0;
  int tiempo=0;
  bool centenas=false;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);//segmento g
  pinMode(3,OUTPUT);//segmento f
  pinMode(4,OUTPUT);//segmento a
  pinMode(5,OUTPUT);//segmento b
  pinMode(6,OUTPUT);//segmento e
  pinMode(7,OUTPUT);//segmento d
  pinMode(8,OUTPUT);//segmento c



  pinMode(9,OUTPUT);//segmento g
  pinMode(10,OUTPUT);//segmento f
  pinMode(11,OUTPUT);//segmento a
  pinMode(12,OUTPUT);//segmento b
  pinMode(13,OUTPUT);//segmento e
  pinMode(0,OUTPUT);//segmento d
  pinMode(1,OUTPUT);//segmento c
 
  digitalWrite(0,LOW); //segmento g pin 1 low
  
}

void loop() {
////
tiempo=random(200,2000);//tiempo aleatorio

//taximetro display

if(contador==0)//pone 5 en display 2
{
       digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c
}
      
 delay(tiempo);
  var=var+1;
  switch(var)//Cambio de cuenta numero

  {
  case 1: //numero 1
  // put your main code here, to run repeatedly:
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;
      
  case 2://numero 2

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,LOW); //segmento c
  break;

case 3://numero 3

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;


  case 4://numero 4

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;



  case 5://numero 5

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,LOW); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;




  case 6://numero 6

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,LOW); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;



  case 7://numero 7

      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;


   case 8://numero 8

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;



   case 9://numero 9

      digitalWrite(2,HIGH); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
  break;

  

  default:
      
      contador=contador+1;
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
      var=0;
///ACTIVAR CONTADOR 2 DECIMAS DE SEGUNDO
/*
      if(contador==1)// 5 segundo contador 7 seg
      {

      
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c
        
      }

      */
 if(contador==1)//6 segundo contador 7 seg
      {

      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c
        
      }

      if(contador==2)//7 segundo contador 7 seg
      {

      digitalWrite(9,LOW); //segmento g
      digitalWrite(10,LOW); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(0,LOW); //segmento d
      digitalWrite(1,HIGH); //segmento c
        
      }


      if(contador==3)//8 segundo contador 7 seg
      {

        digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,HIGH); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c
        
      }
      if(contador==4)//9 segundo contador 7 seg
      {

      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,HIGH); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c
     
        
      }
       if(contador==5)//segundo contador 7 seg
      {

      if(centenas=false)
      {
        //encender display 3 en 1
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c

        
      centenas=true; //se encendio Centenas
      contador=0;
      }
      else
      {
      //encender display 3 en 1
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,LOW); //segmento f
      digitalWrite(4,LOW); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,LOW); //segmento e
      digitalWrite(7,LOW); //segmento d
      digitalWrite(8,HIGH); //segmento c

      //encender display 2 en 5
      digitalWrite(9,HIGH); //segmento g
      digitalWrite(10,HIGH); //segmento f
      digitalWrite(11,HIGH); //segmento a
      digitalWrite(12,LOW); //segmento b
      digitalWrite(13,LOW); //segmento e
      digitalWrite(0,HIGH); //segmento d
      digitalWrite(1,HIGH); //segmento c

      //encender display 1 en 0
      digitalWrite(2,LOW); //segmento g
      digitalWrite(3,HIGH); //segmento f
      digitalWrite(4,HIGH); //segmento a
      digitalWrite(5,HIGH); //segmento b
      digitalWrite(6,HIGH); //segmento e
      digitalWrite(7,HIGH); //segmento d
      digitalWrite(8,HIGH); //segmento c
        
      }
        
      }

        

}
}
