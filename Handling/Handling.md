# Handling Robot

## Description

Among many industrial robots, handling robots are undoubtedly effective, applied in industrial manufacturing, warehousing and logistics, tobacco, medicine, food, chemical and other industries, or in post offices, libraries, ports and parking lots. In this experiment, we will use LEGO blocks to build a handling robot to carry things.

## How to build up a handling robot

### Step 1
 Dismantle the ultrasonic sensor
![ 6](media/f05a58fdd61093240a78a884d2484bab.png)

------


 Required components
![6_2](media/1f8438657adee5ee0931a2e0db8c8d79.png)

------

![6_3](media/b9cb95a5c53ab96b85b41d648c19534f.png)

------

![6_4](media/502348fe825fa6e57cd61d1700c93c0f.png)

------


### Step 2
 Required components
![6_5](media/6ce5dc24243321d0d31e385997059e21.png)

------

![6_6](media/d33b93e264a8c2833ce2b3d4dcd91517.png)

------

![6_7](media/c9a151d3856720e100dabe436d62d230.png)

------


### Step 3
 Required components
![6_8](media/a2b2a96f444801e2da559161cc5b2b65.png)

------

![6_9](media/077d7de8e6260998b60e008593bff7e5.png)

------

![6_10](media/a9a493a264445b0feab48159837fe725.png)

------


### Step 4
 Required components
![6_11](media/a86c18982b0afaa1921a3b0072989a95.png)

------

![6_12](media/0f804e35e2f7dc6e2a028d21f21e392e.png)

------

![6_13](media/4a759b55f056a6cd9dfdee0cece5dfd1.png)

------


### Step 5
 Required components
![6_14](media/e99bf266cf59d343b34f2cca10de5b49.png)

------

![6_15](media/ce5e3e8e4548aba8fad60910214bcca6.png)

------

![6_16](media/9b2185eaf2f66f35b57754d5476b1ddd.png)

------


### Step 6
 Required components
![6_17](media/4dfd662862d57090e60b71b18cd3291f.png)

------

![6_18](media/7164d7dd08e97a62bc77ae08aadf1526.png)

------

![6_19](media/1cccaf2a536170c11bbc4cdf7683484a.png)

------


### Step 7
 Required components
![6_20](media/7d3e50e74ae36545217c4fa15a53d04e.png)

------

![6_21](media/7d32a51858167fd8aee486b72f287ae3.png)

------

![6_22](media/83dbaa2175018608dc84f4dda726fa96.png)

------


### Step 8
 Required components
![6_23](media/6e73265906657a00ca17c5323f65dcec.png)

------


![6_24](media/f60d276bb389be3c440b15adea292adf.png)

------

![6_25](media/86f43f7d15cfb6c4ac807423b2510de0.png)

------


### Step 9
 Required components
![6_26](media/df4b2ab9b8ad767b948de6f783a0cf42.png)

------



 Set the angle of the servo to 180 degree

|    Wire servo up Servo  |  PCB Board    |
| ---- | ---- |
|   Brown   |  G    |
|   Red   |   5V   |
|   Orange   |   S2（A0）   |

 Upload the code of the servo to the main board of the Beetlebot car, as shown below

    #include <Servo.h>
    Servo lgservo;  // create servo object to control a servo

    void setup() {
    lgservo.attach(3);  // attaches the servo on pin 3 to the servo object
    }

    void loop() {
    lgservo.write(180); // tell servo to go to position
    }


------

![6_27](media/014d0f844d18f7bbd2a80b7f1679fca1.png)

------

![6_28](media/e66813dd3c1884b0c1f65bdf3f5b8c48.png)

------




### Step 10

 Required components

![6_29](media/13c2436b53b5dab5f508e902bcb6b0cf.png)

------

![6_30](media/20149b66db795ce32fcb060a0823bab0.png)

------

![3](media/b97e180d74ce41e7293acfe85a0b1bd7.png)

------

![3_1](media/b1d1dd5fe42bc14bbf773e9e10cdcab9.png)

------

![6_31](media/87076fbdd533d91c88fa7ae5cd5df32e.png)

------

![6_32](media/89d2a853cf95635fae60b5ec48482d54.png)

------



## Wire up servo

![8c76722a8e1b9678784637c950ad597](media/3f637fbc0f6a056d188ef4e91c0483bd.jpeg)

------


## Test Code：

    #include <Servo.h>
    Servo lgservo;
    #define ML 15
    #define ML_PWM 17
    #define MR 14
    #define MR_PWM 16
    #define servo2 3

    char val;
    char wifiData;

    void setup() {
    Serial1.begin(9600);
    pinMode(ML, OUTPUT);
    pinMode(ML_PWM, OUTPUT);
    pinMode(MR, OUTPUT);
    pinMode(MR_PWM, OUTPUT);
    
    lgservo.attach(3);
    lgservo.write(180);
    }

    void loop() {
    if(Serial1.available() > 0)
    {
        val = Serial1.read();
        Serial.print(val);
    }
    switch(val)
    {
        case 'F': car_forward(); break;
        case 'B': car_back(); break;
        case 'L': car_left(); break;
        case 'R': car_right(); break;
        case 'S': car_stop(); break;
        case 'p': lgservo.write(110); break;
        case 'x': lgservo.write(180); break;
    }
    }


    void car_forward()
    {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,127);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,127);
    }

    void car_back()
    {
    digitalWrite(ML,HIGH);
    analogWrite(ML_PWM,127);
    digitalWrite(MR,HIGH);
    analogWrite(MR_PWM,127);
    }

    void car_left()
    {
    digitalWrite(ML,HIGH);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,105);
    }

    void car_right()
    {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,105);
    digitalWrite(MR,HIGH);
    analogWrite(MR_PWM,150);
    }

    void car_stop()
    {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,0);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,0);
    }


Connect Wifi, click buttons![](media/5f365b2083f264b4ecfc5e68d07df287.png) to make the car to move toward building blocks and put some building blocks on the robot.

Then press ![](media/5f365b2083f264b4ecfc5e68d07df287.png)to drive the robot to move.

Hold down the button ![](media/0e62c323c0018af1a2824a120d447bda.png)to drive the robot to drop building blocks, then building blocks can be conveyed
