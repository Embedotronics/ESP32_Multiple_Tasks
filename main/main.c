#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void vTask1function(void* pvParameters)
{
    for(;;)
    {
        printf("This is Task 1\n");
        vTaskDelay(2000/ portTICK_PERIOD_MS);
    }
}

void vTask2function(void* pvParameters)
{
    for(;;)
    {
        printf("This is Task 2\n");
        vTaskDelay(2000/ portTICK_PERIOD_MS);
    }
}


void app_main(void)
{
    xTaskCreate(vTask1function, "TASK 1", 1024*2, NULL, 1, NULL );
    xTaskCreate(vTask2function, "TASK 2", 1024*2, NULL, 1, NULL );
}
