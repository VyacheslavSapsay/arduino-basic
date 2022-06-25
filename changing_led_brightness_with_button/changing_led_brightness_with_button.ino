//LED brightness changing using WPM & button / змінення яскравості світлодіоду за допомогою ШІМ і використання кнопки.
const int LED=9; //LED pin/пін світлодіода
const int BUTTON=2;//Button pin/пін кнопки
int led_brightness = 30; //Default LED brightness/яскравість світлодіода за замовчуванням
int brightnesst_step = 30;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  analogWrite(LED, led_brightness);
  if (digitalRead(BUTTON) == HIGH)
   {
    led_brightness = led_brightness + brightnesst_step;
   }
   delay(100);
}

