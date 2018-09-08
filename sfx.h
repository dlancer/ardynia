#ifndef sfx_h
#define sfx_h

#include <Arduino.h>
#include <Arduboy2Beep.h>

struct Sfx {
    static BeepPin1 b1;
    static BeepPin2 b2;

    static void sword(void);
    static void boomerang(void);
    static void playerDamage(void);
    static void successJingle(void);
    static void pickUpItem(void);

    static void init(void);
    static void update(void);
};

#endif