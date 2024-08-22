#include<stdio.h>
#include<time.h>
int main(){
    //clock_t:- represent the processor time (or clock ticks) consumed by a program
    clock_t s_time;
    clock_t e_time;
    //these ticks can be converted into seconds by dividing by the constant CLOCKS_PER_SEC.
    double cpu_time;
    //
    s_time=clock();//a value of type clock_t that represents the number of clock ticks since the program started.
    int sum=0;
    for(int i=0;i<=100000000;i++){
        sum+=i;
    }
    //record time after the operation
    e_time=clock();//clock() function returns the number of clock ticks used by the program
    // a processor running at 3 GHz has a clock that ticks 3 billion times per second.
    cpu_time=(double)(e_time-s_time)/CLOCKS_PER_SEC;
    printf("%f \n Seconds",cpu_time);
    /*
    CPU Frequency Or CPU clock speed:-
    It is number of clock cycles performed by a cpu in a second
    Measure in Hz(1 cycle per second)
    Ghz :- giga Hz is 1billion cycles per second
    Clock cycle is single electrical pulse passing in cpu 
    Using this one pulse cpu performs basic operation like accessing memeory,ready data.
    Number of cycles varies from Instruction to Instruction
    
    */
}  
