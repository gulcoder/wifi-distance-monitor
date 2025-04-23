#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include "lcd.h"
#include "wifi.h"
#include "buzzer.h"
#include "ultrasonic.h"
#include "datetime.h"
#include <math.h>
#include "led.h"

#define WIFI_SSID "XXXX"
#define WIFI_PASSWORD "XXXX"

int main(){
	

    stdio_init_all();

    lcd_init();
    lcd_clear();
    buzzer_init();

    lcd_set_cursor(0, 0);
    lcd_print("Ansluter till");
    lcd_set_cursor(0, 1);
    lcd_print("WiFi....");

    if (connect_to_wifi(WIFI_SSID, WIFI_PASSWORD)){
	    lcd_clear();
	    lcd_set_cursor(0, 0);
	    lcd_print("Ansluten till");
	    lcd_set_cursor(0, 1);
	    lcd_print("WiFi!");
	    sleep_ms(2000);

	    }



    else{
	    lcd_clear();
	    lcd_set_cursor(0, 0);
	    lcd_print("WiFi FEL!");
	    sleep_ms(2000);
    }

    ultrasonic_init(17, 16);
    datetime_init();
    led_init();

   
  

    while(true){
	    double distance = ultrasonic_read_cm();
	    char buffer[32] = {0};
	    struct tm *now = datetime_get_time();
	    lcd_clear(); 
	    lcd_set_cursor(0, 0);
	    snprintf(buffer, sizeof(buffer), "Avstand: %1f cm", distance);
	    lcd_print(buffer);





	    if (now){
		    char time_buf[32] = {0};
		    snprintf(time_buf, sizeof(time_buf), "%02d/%02d/%04d %02d:%02d:%02d",
				   now->tm_mday, now->tm_mon +1, now->tm_year + 1900,
				   now->tm_hour, now->tm_min, now->tm_sec);
		    lcd_set_cursor(0, 1);
		    lcd_print(time_buf);
	    } else {
		    lcd_set_cursor(0, 1);
		    lcd_print("Ingen tid");
	    }

	    if (distance < 100){
		    buzzer_beep(200);
		    led_on();
	    } else{
		    led_off();}
	   
	    sleep_ms(1000);
    }


    return 0;
}

