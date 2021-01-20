## 3.1 Código

<p align="center">
  <img src="https://github.com/GiganteDev/Arduino/blob/main/.github/img-arduino-logo.png" width="120">
</p>

```cpp
int valorpot = 0; //Armazena valor lido do potenciometro, entre 0 e 1023

float luminosidade = 0; //Valor de luminosidade do led

void setup() {
    pinMode(10, OUTPUT); //Define o pino do led como saída
    pinMode(A5, INPUT); //Define o pino do potenciometro como entrada
}
 
void loop() {
    // Le o valor do pino do potenciometro
    valorpot = analogRead(A5);

    // Converte e atribui para a variavel "luminosidade" o
    // valor lido do potenciometro
    luminosidade = map(valorpot, 0, 1023, 0, 255);

    // Mostra o valor da luminosidade no monitor serial
    Serial.println(luminosidade);  

    // Envia sinal analogico para a saída do led, com luminosidade variavel
    analogWrite(10, luminosidade);  
}
```

Em uma rápida interpretação, este código fará com que o LED receba o valor lido do potenciometro, estado o qual é totalmente variável de acordo com a posição.

O potenciômetro está conectado a um pino analógico e o mesmo possui resolução de 10 bits, ou seja, 2^10(2 elevado a 10) que resulta em 1024,onde você tem uma faixa de 0 a 1023, sendo 0 o valor mínimo e 1023 o valor máximo.

O LED está conectado ao pino digital 10 e o mesmo possui PWM. A resolução do PWM do Arduino é de 8 bits, ou seja, 2^8(2 elevado a 8) que resulta em 256, onde você tem uma faixa de 0 a 255, sendo 0 o valor mínimo e 255 o valor máximo.

Neste caso, temos uma conversão, onde 0 a 1023 (analógico) terá uma proporção na faixa de 0 a 255 (digital PWM) para controlar a luminosidade do LED. A variável recebe o resultado do cálculo na função map e em seguida através da função “analogWrite” escreve no pino digital 10 qual será o valor de tensão disponível para o LED.
---

<a  href="https://github.com/GiganteDev/Arduino/"><img src="https://img.shields.io/badge/%E2%9E%94%20-Projetos-fff"/></a>