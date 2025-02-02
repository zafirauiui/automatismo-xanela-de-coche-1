-or de baixada apagado
       delay(70);                      // Wait for tempo millisecond(s)
       contador--;
    }
    else {
      digitalWrite(RELE_ARRIBA, LOW);  //Motor de subida apagado
      digitalWrite(RELE_ABAIXO, HIGH);  //Motor de baixada encendido
      delay(70);
      contador--;
    }
  }
  else {
     digitalWrite(RELE_ARRIBA, LOW);
     digitalWrite(RELE_ABAIXO, LOW);
     delay(100);
  }
 
 }       
            
               
