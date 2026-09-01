#include <stdio.h>

struct Motor
{
    int id;
    int speed;
    float current;
    char status;
};

// Function declarations
void readmotor(struct Motor *m);
void checkmotor(struct Motor *m);
void displaymotor(struct Motor *m);

int main(){
struct Motor motors[5];

for (int i = 0; i < 5; i++)
{
    motors[i].id = 1 + i;

       readmotor(&motors[i]);
      checkmotor(&motors[i]);
    displaymotors(&motors[i]);
}

    return 0;
}
// 1. Read  value
void readmotor(struct Motor *m)
{
    printf("enter motor speed: ");
    scanf("%d", &m->speed);
    printf("enter motor current  :\n ");
    scanf("%d",&m->current);
}
// 2. Calculate grade
void checkmotor(struct Motor *m)
{if (m->speed <500&&m->current<=12.5)
{
    m->status= "Low ";
}
else if (m->speed>500&&m->speed <1500&&m->current <= 12.50)
{
    m->status = "Normal";
}
else if (m->speed >=1500&& m->current<12.5)
{
    m->status = "High";
}
else
{
    m->status  = "Faulty";
}
}


// 3. dispaly status
void displaymotor(struct Motor *m){
    printf("motor %d     \n",m->id);
    printf("motor speed  :%d\n",m->speed);
    printf("motor current:%d\n",m->current );

    printf("motor status :%s\n",m->status);
}
    
