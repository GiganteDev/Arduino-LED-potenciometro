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
