

#define BLINKER_WIFI
#include <FastLED.h>
#include <Blinker.h>

#define NUM_LEDS 120
#define LED_PIN  2
CRGB leds[NUM_LEDS];

char auth[] = "7d3ac0568d86";
char ssid[] = "rabbit";
char pswd[] = "12345678wei";

BlinkerButton Button1("btn-abc");
BlinkerRGB RGB1("RGB_1");

uint8_t refreash=0;
uint8_t sec = 0, minu = 0, hou = 0;
int8_t set_hou, set_minu, set_sec;
uint8_t background_colorR = 255 , background_colorG = 0, background_colorB = 0;

///////////////////////////////
void button1_callback(const String & state)
{

}

void rgb1_callback(uint8_t r_value, uint8_t g_value, uint8_t b_value, uint8_t bright_value)
{
  BLINKER_LOG("R value: ", r_value);
  BLINKER_LOG("G value: ", g_value);
  BLINKER_LOG("B value: ", b_value);
  BLINKER_LOG("Rrightness value: ", bright_value);

   background_colorR = map(r_value, 0, 255, 0, bright_value);
    background_colorG = map(g_value, 0, 255, 0, bright_value);
    background_colorB = map(b_value, 0, 255, 0, bright_value);
}

////////////////////////////////




void huiguang_display()
{
  delay(100);
//  sec++;
//  if (sec == 60)
//  {
//    sec = 0;
//    minu++;
//    if (minu == 60)
//    {
//      minu = 0;
//      hou++;
//      if (hou == 12)
//      {
//        hou = 0;
//      }
//    }
//  }
  set_hou = Blinker.hour() - 12;
  set_minu = Blinker.minute();
  set_sec = Blinker.second();

  if(set_hou != -1)
  {
    hou=set_hou;
  }
  if(set_minu != -1)
  {
    minu=set_minu;
  }
  if(set_sec != -1)
  {
    sec=set_sec;
  }

  
  switch (hou / 10)
  {
    case 0:
      leds[100] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[110] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[119] = CRGB(0, 0, 0);
      leds[109] = CRGB(0, 0, 0);
      break;
    case 1:

      leds[105] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[115] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[100] = CRGB(0, 0, 0);
      leds[110] = CRGB(0, 0, 0);
      break;
    case 2:

      leds[101] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[111] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[105] = CRGB(0, 0, 0);
      leds[115] = CRGB(0, 0, 0);
      break;
  }
  switch (hou % 10)
  {
    case 0:
      leds[80] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[90] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[89] = CRGB(0, 0, 0);
      leds[99] = CRGB(0, 0, 0);
      break;
    case 1:
      leds[85] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[95] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[80] = CRGB(0, 0, 0);
      leds[90] = CRGB(0, 0, 0);
      break;
    case 2:
      leds[81] =CRGB(background_colorR, background_colorG, background_colorB);
      leds[91] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[95] = CRGB(0, 0, 0);
      leds[85] = CRGB(0, 0, 0);
      break;
    case 3:
      leds[86] =CRGB(background_colorR, background_colorG, background_colorB);
      leds[96] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[81] = CRGB(0, 0, 0);
      leds[91] = CRGB(0, 0, 0);
      break;
    case 4: 
      leds[82] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[92] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[86] = CRGB(0, 0, 0);
      leds[96] = CRGB(0, 0, 0);
      break;
    case 5: 
      leds[87] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[97] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[82] = CRGB(0, 0, 0);
      leds[92] = CRGB(0, 0, 0);
      break;
    case 6: 
      leds[83] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[93] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[87] = CRGB(0, 0, 0);
      leds[97] = CRGB(0, 0, 0);
      break;
    case 7: 
      leds[88] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[98] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[83] = CRGB(0, 0, 0);
      leds[93] = CRGB(0, 0, 0);
      break;
    case 8: 
      leds[84] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[94] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[88] = CRGB(0, 0, 0);
      leds[98] = CRGB(0, 0, 0);
      break;
    case 9: 
      leds[89] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[99] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[84] = CRGB(0, 0, 0);
      leds[94] = CRGB(0, 0, 0);
      break;
  }

  switch (minu / 10)
  {
    case 0: 
      leds[60] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[70] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[69] = CRGB(0, 0, 0);
      leds[79] = CRGB(0, 0, 0);
      break;
    case 1:
      leds[65] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[75] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[60] = CRGB(0, 0, 0);
      leds[70] = CRGB(0, 0, 0);
      break;
    case 2: 
      leds[61] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[71] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[65] = CRGB(0, 0, 0);
      leds[75] = CRGB(0, 0, 0);
      break;
    case 3: 
      leds[66] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[76] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[61] = CRGB(0, 0, 0);
      leds[71] = CRGB(0, 0, 0);
      break;
    case 4: 
      leds[62] =CRGB(background_colorR, background_colorG, background_colorB);
      leds[72] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[66] = CRGB(0, 0, 0);
      leds[76] = CRGB(0, 0, 0); 
      break;
    case 5: 
      leds[67] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[77] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[62] = CRGB(0, 0, 0);
      leds[72] = CRGB(0, 0, 0);
      break;
  }

  switch (minu % 10)
  {
    case 0: 
      leds[40] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[50] =CRGB(background_colorR, background_colorG, background_colorB);

      leds[49] = CRGB(0, 0, 0);
      leds[59] = CRGB(0, 0, 0);
      break;
    case 1: 
      leds[45] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[55] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[50] = CRGB(0, 0, 0);
      leds[40] = CRGB(0, 0, 0);
      break;
    case 2: 
      leds[41] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[51] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[55] = CRGB(0, 0, 0);
      leds[45] = CRGB(0, 0, 0);
      break;
    case 3:  
      leds[46] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[56] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[41] = CRGB(0, 0, 0);
      leds[51] = CRGB(0, 0, 0);
      break;
    case 4: 
      leds[42] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[52] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[46] = CRGB(0, 0, 0);
      leds[56] = CRGB(0, 0, 0);
      break;
    case 5: 
      leds[47] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[57] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[52] = CRGB(0, 0, 0);
      leds[42] = CRGB(0, 0, 0);
      break;
    case 6: 
      leds[43] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[53] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[47] = CRGB(0, 0, 0);
      leds[57] = CRGB(0, 0, 0);
      break;
    case 7: 
      leds[48] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[58] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[43] = CRGB(0, 0, 0);
      leds[53] = CRGB(0, 0, 0);
      break;
    case 8: 
      leds[44] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[54] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[48] = CRGB(0, 0, 0);
      leds[58] = CRGB(0, 0, 0);
      break;
    case 9: 
      leds[49] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[59] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[44] = CRGB(0, 0, 0);
      leds[54] = CRGB(0, 0, 0);
      break;
  }


  switch (sec / 10)
  {
    case 0:  
      leds[20] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[30] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[29] = CRGB(0, 0, 0);
      leds[39] = CRGB(0, 0, 0);
      break;
    case 1: 
      leds[25] =CRGB(background_colorR, background_colorG, background_colorB);
      leds[35] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[20] = CRGB(0, 0, 0);
      leds[30] = CRGB(0, 0, 0);
      break;
    case 2: 
      leds[31] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[21] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[25] = CRGB(0, 0, 0);
      leds[35] = CRGB(0, 0, 0);
      break;
    case 3:  
      leds[26] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[36] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[21] = CRGB(0, 0, 0);
      leds[31] = CRGB(0, 0, 0);
      break;
    case 4:  
      leds[22] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[32] =CRGB(background_colorR, background_colorG, background_colorB);

      leds[26] = CRGB(0, 0, 0);
      leds[36] = CRGB(0, 0, 0);
      break;
    case 5: 
      leds[37] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[27] =CRGB(background_colorR, background_colorG, background_colorB);

      leds[32] = CRGB(0, 0, 0);
      leds[22] = CRGB(0, 0, 0);
      break;
  }

  switch (sec % 10)
  {
   case 0:  
      leds[0] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[10] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[9] = CRGB(0, 0, 0);
      leds[19] = CRGB(0, 0, 0);
      break;
    case 1: 
      leds[5] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[15] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[0] = CRGB(0, 0, 0);
      leds[10] = CRGB(0, 0, 0);
      break;
    case 2: 
      leds[1] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[11] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[5] = CRGB(0, 0, 0);
      leds[15] = CRGB(0, 0, 0);
      break;
    case 3:  
      leds[6] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[16] =CRGB(background_colorR, background_colorG, background_colorB);

      leds[1] = CRGB(0, 0, 0);
      leds[11] = CRGB(0, 0, 0);
      break;
    case 4:  
      leds[2] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[12] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[6] = CRGB(0, 0, 0);
      leds[16] = CRGB(0, 0, 0);
      break;
    case 5: 
      leds[7] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[17] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[2] = CRGB(0, 0, 0);
      leds[12] = CRGB(0, 0, 0);
      break;
    case 6:  
       leds[3] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[13] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[7] = CRGB(0, 0, 0);
      leds[17] = CRGB(0, 0, 0);
      break;
    case 7:  
       leds[8] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[18] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[3] = CRGB(0, 0, 0);
      leds[13] = CRGB(0, 0, 0);
      break;
    case 8: 
       leds[4] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[14] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[8] = CRGB(0, 0, 0);
      leds[18] = CRGB(0, 0, 0);
      break;
    case 9: 
       leds[9] = CRGB(background_colorR, background_colorG, background_colorB);
      leds[19] = CRGB(background_colorR, background_colorG, background_colorB);

      leds[4] = CRGB(0, 0, 0);
      leds[14] = CRGB(0, 0, 0);
      break;
  }

  FastLED.show();
}

void setup() {
  uint8_t i;
  Serial.begin(115200);
  BLINKER_DEBUG.stream(Serial);//串口输出
  // 初始化有LED的IO
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  ///////////////////////////
  // 初始化blinker
  Blinker.begin(auth, ssid, pswd);
  //Blinker.attachData(dataRead);
  Button1.attach(button1_callback);
  RGB1.attach(rgb1_callback);
  Blinker.setTimezone(8.0);
  for (i = 0; i < 120; i++)
{
    leds[i] = CRGB(0, 0, 0);
    
  }
}

void loop() {
  Blinker.run();
  if(refreash==1)
  {
    huiguang_display();
  }
  else
  {
     set_hou = Blinker.hour() - 12;
  set_minu = Blinker.minute();
  set_sec = Blinker.second();

  if(set_hou != -1)
  {
    hou=set_hou;
  }
  if(set_minu != -1)
  {
    minu=set_minu;
  }
  if(set_sec != -1)
  {
    refreash=1;
    sec=set_sec;
  }
   }
}
