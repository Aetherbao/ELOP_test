#include "ASW_SigIn/ASW_SigIn.h"
#include "FOC.c"

#include <stdio.h>
#include <stdio.h>

//#define LOG(msg) fprintffprintf(log_file, msg "\n")

typedef void (*task_func_t)(void);

typedef struct {
    task_func_t task;        // 任务函数指针
    uint32 period;         // 任务执行周期（单位：微秒）
    uint32 elapsed_time;   // 已用时间（单位：微秒）
} task_t;

#define MAX_TASKS 10
task_t task_list[MAX_TASKS];
int num_tasks = 0;
uint32 system_time = 0;  // 系统运行时间（单位：微秒）
int count_1 = 0;
int count_2 = 0;
int count_3 = 0;
void add_task(task_func_t task, double period) {
    if (num_tasks < MAX_TASKS) {
        task_list[num_tasks].task = task;
        task_list[num_tasks].period = period;
        task_list[num_tasks].elapsed_time = 0;
        num_tasks++;
    }
}

void update_system_time(uint32 delta_time) {
    system_time += delta_time;
}

void scheduler(void) {
    while (1) {
        for (int i = 0; i < num_tasks; i++) {
            task_list[i].elapsed_time += 1;  // 假设每次调度间隔为1μs
            if (task_list[i].elapsed_time >= task_list[i].period) {
                task_list[i].task();  // 执行任务
                task_list[i].elapsed_time = 0;
            }
        }
        // 假设每次调度间隔为1μs
        update_system_time(1);
    }
}

void task1(void) {
    Interface_FR_Task();
}

void task2(void) {
    
    Interface_500usTask(count_2);
    count_2++;
}

void task3(void) {
    // 执行任务3的代码
    Interface_10msTask(count_3);
    count_3++;
}
void get_ADC2_Data(int mV){
    int data = get_ADC2_mV(mV);
    printf("%d\n",data);
}
void get_ADC2_Temp_Data(int temp){
    int data = get_ADC2_Temp(temp);
    printf("%d\n",data);
}

void get_uSplyVltg_Data(void){
    int data = get_ADC2_mV(18000);
    uint16 u16_uADSplyVltg = data_addr_ADC2_FILT_OUT0(data);
    uint16 u16_uSplyVltg;
    uint32 tmp;
    dt_Standardize_u16p15b0 rtb_VectorConcatenate_oqqq[40];
    ASW_SigIn_B.DataTypeConversion_ikt4 = (uint16)(((uint16)((((uint32)u16_uADSplyVltg) * Gu16_rSplyVltgADCRat_C) >> 14)) << 1);
    rtb_VectorConcatenate_oqqq[0] = ASW_SigIn_B.DataTypeConversion_ikt4;

  /* S-Function (sfix_udelay): '<S46>/Tapped Delay' */
  memcpy(&rtb_VectorConcatenate_oqqq[1], &ASW_SigIn_DW.TappedDelay_DWORK1_nx03[0],
         39U * (sizeof(dt_Standardize_u16p15b0)));
    tmp = 0U;
  for (int i = 0; i < 40; i++) {
    tmp += rtb_VectorConcatenate_oqqq[i];
  }
    u16_uSplyVltg = (dt_Standardize_u16p15b0)((((sint32)tmp) << 4) / 640);

}

int main(void) {
    add_task(task1, 62.5);   // 任务1，周期62.5μs
    add_task(task2, 500);    // 任务2，周期500μs
    add_task(task3, 10000);  // 任务3，周期10000μs
    //printf("Hello, World!\n");
    scheduler();  // 启动调度器
    //int data = ADC1_Get(818);
    //printf("%d\n",data);
    //SigIn_SlwTask();
    //printf("%d\n",busSigIn_SlwTaskOut.u8_tPwrTubTemp);
    //int data = get_ADC1_mV(1276);
    //data = ADC1_Get(data);
    //printf("%d\n",data);
    //get_ADC2_Data(8000);
    //get_ADC2_Data(18000);
    //data_addr_ADC2_FILT_OUT0(256);
    //data_addr_ADC2_FILT_OUT0(585);
    //data_addr_ADC2_FILT_OUT0(602);
    //get_ADC2_Temp_Data(400);
    /*int data = ADC2_Temp_Result_C(1023);
    printf("%d\n",data);*/
    return 0;
}