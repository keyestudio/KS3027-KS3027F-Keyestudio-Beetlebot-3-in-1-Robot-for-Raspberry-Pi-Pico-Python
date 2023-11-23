# Python Tutorial

## Preparation for Python

**Before we start building a project, we need to do some preparations first, which is so important that we can't skip it.**

### **Install Thonny**

Thonny is a free and open source software platform with small size, simple interface, simple operation and rich functions. It is a Python IDE suitable for beginners. In this tutorial, we use this IDE to develop a Raspberry Pi Pico. Thonny supports multiple operating systems including Windows, Mac OS, Linux.

### **Download Thonny**

Enter the website: https://thonny.org to download the latest version of Thonny.

Thonny open-source code library: https://github.com/thonny/thonny

Please follow the instructions on the official website or click the link below to download and install. (Please select the appropriate option based on your operating system.)

| [System](javascript:;) | Download link                                                                                                                                                                                                                                                                                                                        |
|------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| MAC OS：               | <https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg>                                                                                                                                                                                                                                                         |
| Windows：              | [https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe](https:/github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe)                                                                                                                                                                              |
|      Linux：           | **latest** **version**  **Binary bundle for PC (Thonny+Python):**  bash \<(wget -O - https://thonny.org/installer-for-linux)  **With pip:**  pip3 install thonny  **Distro packages (may not be the latest version):**  **Debian, Rasbian, Ubuntu, Mint and others:**  sudo apt install thonny  **Fedora:**  sudo dnf install thonny |

![](media/bd5823ede2c01d1fa4696438c62aec51.png)

### **Install Thonny on Windows**
The downloaded Thonny icon is as follows.

![](media/d3caa98d406fa06a124d5c98195b90db.png)

Double-click “Thonny-3.3.13.exe”. The following dialog box is displayed. I choose“![](media/11fb59a50abe0bf54df7e4cb891ad2c0.png)”to operate. You can also select“![](media/37be3f3bcc9aa0eb48c8b844eb46a71c.png)” to operate.

![](media/4c044b255da8b14fe674eb9cce01627d.png)

If you are not familiar with computer software installation, click “Next” until the installation is complete.

![](media/995b36640124b6a9b23f10473ff8a38a.png)

![](media/8bcc17840b9fc15d76f79fee8a0168ee.png)

If you want to change the route of installing Thonny，just click“**Browse...**”to select a new route and click “OK”.

If you don’t want to change the route of installing Thonny, just click “Next”and then click“Next”again.

![](media/df6f63b42ebb1676b22c26b25dc9c7aa.png)

![](media/f5cd6d619b4645601c5b098ffdbec12a.png)

Select "Create Desktop Icon". Thonny software will generate a shortcut on your desktop for you to open Thonny software later.

![IMG_256](media/a30c89dde3de81ad00aced30510071be.png)

Click "Install"

![](media/6ace65142291e5e8af5f81e4a6b2f180.png)

Wait for a while but don’t click **Cancel**

![](media/a504b3a3ab16b4d91040cd5878acea0c.png)

Once we see the following screen, Thonny software has been successfully installed. Click “Finish”.

![](media/a1fb6027e54a975de1c0aa1e1a0d6a29.png)

If we select “Create Desktop Icon” during the installation, the following icon will be displayed on the desktop.

![](media/80f35044d91d66f734e36059db35f273.png)

### **Basic configuration of Thonny software**
Double-click the desktop icon of Thonny software, we can see the following interface, and we can also choose the language and initial settings. Once set, click "Let's Go!"

![](media/ee240978a4f844184f1ea9f5a21d0395.png)

![](media/619a856895d95e00beed748b1438072d.png)

![](media/bcf6c31e4f69c904a7a0c0e9df7e8d7d.png)

Select“View”→“File”和“Shell”

![](media/5ff5c305585dbe7e832cc41183db5818.png)

![](media/d41b79772c9846fd8bf295c8451f8321.png)

![](media/3d04fe6893ca104e4e593a0786cb3799.png)

**Update Micropython firmware**

To run MicroPython programs on Raspberry Pi Pico, we first need to burn a firmware into Raspberry Pi Pico.

**Why do we need to update the firmware?**

The Raspberry Pi Pico can be programmed in both C and MicroPython, and which is shipped without MicroPython firmware, which we need to download before we can program with MicroPython.

Note: MicroPython Firmware only needs to be downloaded once and does not need to be downloaded again when programming with MicroPython. If we have downloaded the.uf2 firmware written in C, it will be overwritten, so the next time we use MicroPython, we need to update our Raspberry Pi Pico firmware by following the steps.

**Download the Micropython Firmware**

Method1: Raspberry Pi Pico official website：https://www.raspberrypi.com/documentation/microcontrollers/

Click the link above, we can see the following interface:

![](media/3b3e6a639416b76c44f2a0854dc451cc.png)

Scroll the mouse and we can see the following again:

![](media/5d04d67506852588d126ce760739a3c5.png)

Click MicroPython(Getting Started MicroPython) to go to the firmware download page.

![](media/137e21851df02502fb989d8541fa0da8.png)

Method 2: By clicking on the download link: https://micropython.org/download/rp2-pico/rp2-pico-latest.uf2, we can download directly.

Method 3: If we can't download it due to network problems or other reasons, we can use the.uf2 file we prepared, which is located in the following file path.

![](media/ca4858fd34bc267a5b6089ad8ef1d277.png)

**The procedures for burning MicroPython firmware**

① Connect one end of the microUSB cable to the USB port of our computer.

② Long press the white button on the "Raspberry Pi Pico" (BOOTSEL). The Raspberry Pi Pico is then connected to the computer via the microUSB wire.

![](media/33c91d51b2aeb2c943691706354aaad1.png)

③ Release the button, when the connection is successful, open [Device Manager] on our computer, the computer will automatically recognize the removable disk (RPI-RP2), as shown below:

![](media/87e24af3ea812b5492a06b0141060b86.png)

④ Copy the file (RP2-Pico-20210902-v1.17.uf2) to a removable disk (RPI-rp2) and wait for it to complete, just like copying the file to a USBflash drive.

![](media/916dc807eb08231d8410603e944d405e.png)

⑤ Raspberry Pi Pico automatically restarts after the firmware is burned. After that, we can run Micropython.

**Thonny connects to Raspberry Pi Pico**

1.Open Thonny, click“Run”and select“Select interpreter…”

![](media/09593c45eabe111d9f75848e39312b75.png)

2.Select“Micropython (generic)”or“Micropython (Raspberry Pi Pico)”How to select“Micropython(generic)”? As follows:

![](media/0dda06df90ad37a0490c56559108ba51.png)

Select USB-Serial (COMx). The COMx number may be different on different PCS. Just make sure we select "USB-Serial (COMx)".

**How to determine which port does the Raspberry Pi Pico communicate with our computer?**

Step 1: When our Raspberry Pi Pico is not connected to the computer, open Thonny software, click "Run", select "Select Interpreter", the dialog will pop up, click "Port", we can view the currently connected port, as shown in the picture below:

![](media/0112f6cc9da283b3e257d3b1e494f610.png)

Step 2: Close the dialog box. Connect Raspberry Pi Pico to our computer, click "Run" again and select "Select Interpreter". Click “Port” in the window that is displayed to view the current port. Now add another port, so this port is used to communicate with the computer.

![未标题-2](media/58613bc6727537a24a253c1cc7d9b5cf.jpeg)

Select“Micropython(generic)”and port，and click“OK”.

![未标题-3](media/52262cb23cd963079c41b6b015a43261.jpeg)

When the following message is displayed on Thonny, then the Thonny successfully connects to the Raspberry Pi Pico.

![](media/e33d2e9552d2cecedc50bf96a5036845.png)

So far, all the preparations have been made.


## Projects：

### Project 1: Onboard LED Flashing

<!-- end list -->

**Description：**

Raspberry Pi Pico has an onboard LED,which is a GP25 pin attached to the Raspberry Pi Pico. In this project, we will learn the effect of making the onboard LED blink.

**Knowledge：**


![Img](./media/KS3027%20KS3027F%29%20Keyestudio Beetlebot 3 in%201 Robot for Python%20STEM%20Education.md/img-20231024114022.png)

**3.Wiring Up**

In this project, Raspberry Pi Pico is connected to a computer using a USB cable.  
![Img](./media/KS3027%20KS3027F%29%20Keyestudio Beetlebot 3 in%201 Robot for Python%20STEM%20Education.md/img-20231024114049.png)


**4. Test Code**

Raspberry Pi Pico onboard LEDS are controlled by THE GP25, which lights up when the GP25 output is high.  When the output is low, the LED lights turn off.  

The code used in this project is saved at KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education Cart \\ 2.Python Tutorials\\2.python\_codes.  We can move the code anywhere.  For example, we can save the code in Disk(D) with the path D:\\2.Python\_Codes.  

![Img](./media/KS3027%20KS3027F%29%20Keyestudio Beetlebot 3 in%201 Robot for Python%20STEM%20Education.md/img-20231024114127.png)

5.  **Code running online:**

Open "Thonny" and click "This computer" → "D:" → "2. Python\_Codes" →"Project\_01\_Onboard LED Flashing".

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/4a8bcae4a34136dc21517d0d8c43d6f0.png)

Open the“Project\_01\_Onboard LED Flashing”folder, and double-click “Project\_01\_Onboard\_LED\_Flashing. py” to open it.  As shown below:

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/a9457a09c924096ae09ebf352124eb95.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin</p>
<p>import time</p>
<p>led = Pin(25, Pin.OUT) # create LED object from Pin 25, Set Pin 25 to output</p>
<p>try:</p>
<p>while True:</p>
<p>led.value(1) # Set led turn on</p>
<p>time.sleep(0.5) # Sleep 0.5s</p>
<p>led.value(0) # Set led turn off</p>
<p>time.sleep(0.5) # Sleep 0.5s</p>
<p>except:</p>
<p>pass</p></td>
</tr>
</tbody>
</table>

Make sure Raspberry Pi Pico is connected to the computer. Click “Stop/Restart Backend” and see what the “Shell” window displays.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/49f8d97181aaedb0e6611fba43092ea9.png)

Click "Run Current Script" and the code starts executing, and what you see is: Raspberry Pi Pico's LED starts flashing. Or press Ctrl+C or click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit the program. 

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/6ec5d9b07c749df4713493ecef75174a.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/b282e1fbd4b4d492d19efe7062b7eddb.png)
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/529c3be102eb7414ac1e5e66fb203b6e.png)

Note: This is the code that runs online.  If you disconnect the USB cable and restart Raspberry Pi Pico, the LEDS on Raspberry Pi Pico stop flashing.  The following information will be displayed in the "Shell" window of Thonny software:  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/a504d2b93ac673c212752984bc3c89ac.png)

Code to run offline (upload code to Raspberry Pi Pico) :

Ensure that the Raspberry Pi Pico is connected to the computer and click
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png).


![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/909d69160049afa664367bace470d888.png)

As shown in the following figure, right-click the
file“Project\_01\_Onboard\_LED\_Flashing. py” and choose“Upload to/”to
upload the code to Raspberry Pi Pico.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/975cb6a4dc140c98723974fa1dba85d5.png)

Upload main.py in the same way.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/34f326c688f77b89e440a5b713960553.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/0a9aa0d49f9d5a8fa9ad54767e616ae5.png)

Disconnect the USB cable from the Raspberry Pi Pico and reconnect, and the Raspberry Pi Pico's LED flashes repeatedly.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/b282e1fbd4b4d492d19efe7062b7eddb.png)
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/529c3be102eb7414ac1e5e66fb203b6e.png)

Note: The code here runs offline.  If you want to Stop running offline and display the information in the “Shell” window, simply click
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)

in Thonny software.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/7db32233a300492d922d42f52ac56a8d.png)

### Project 2: 6812 RGB

**Description：**

There are 4 RGB LEDs, which can be widely used in the decoration of buildings, bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with them.

**Knowledge：**

**SK6812RGB:** There are four RGB LEDS on the expansion board of the car. It can be seen from the schematic diagram that these four RGBLED are all connected in series. Under the condition of sufficient voltage and current, hundreds of RGB leds can be connected.  Every RGBLED is an independent pixels, each pixel is consist of R, G, B three primary colors, which can realize the class of 256 and complete 16777216 colours of whole true color display.At the same time, the pixel contains internal intelligent digital interface data latch signal shaping amplifier drive circuit and the built-in signal shaping circuit, effectively ensure the pixel point light color height consistency .  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/86e292d0666046b72a1e0e68adfb17e8.png)

3.  **Test Code**

The SK6812RGB of the PCB board is controlled by the GPIO 13 of the Raspberry Pi Pico.

The code is saved in the KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education \\ 2.Python Tutorials\\ 2.python\_codes.  

We can move the code anywhere.  For example, we can save the code in Disk(D) with the path D:\\2.Python\_Codes.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open the "Thonny" software, click "This computer"→"D:"→"2.Python\_Codes"→"Project\_02\_6812\_RGB" .

Select "neopixel.py" and right-click and select "Upload to /". Then the "neopixel.py" will be uploaded to the Raspberry Pi Pico, then left-click "Project\_02\_6812\_RGB.py"

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/621c8152e8d7ed65d59a0a101e132f7a.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/64a9cf48a5cf9f03eb43eb2426ba6f59.png)

<table>
<tbody>
<tr class="odd">
<td><p>#Import Pin, neopiexl and time modules.</p>
<p>import time</p>
<p>from machine import Pin</p>
<p>from neopixel import myNeopixel</p>
<p>#Define the number of pin and LEDs connected to neopixel.</p>
<p>NUM_LEDS = 4</p>
<p>np = myNeopixel(NUM_LEDS, 13)</p>
<p>red = (255, 0, 0)</p>
<p>green = (0, 255, 0)</p>
<p>blue = (0, 0, 255)</p>
<p>white = (255, 255, 255)</p>
<p>close = (0, 0, 0)</p>
<p>COLORS = [red, green, blue, white, close]</p>
<p>np.brightness(150) #brightness: 0 ~ 255</p>
<p>while True:</p>
<p>for color in COLORS:</p>
<p>np.fill(color[0], color[1], color[2])</p>
<p>np.show()</p>
<p>time.sleep(0.5)</p></td>
</tr>
</tbody>
</table>

4.  **Test Result：**

Ensure that the Raspberry Pi Pico is connected to the computer and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/093cad871ab7100581bf8ce607076980.png) 

Click "Run Current Script", the code starts to execute, we can see that the 4 RGB LED on the CAR PCB board will show red, green, blue, white then go off, the cycle goes on.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/0d23e6891643e73ce98dc2f93def946d.jpeg)

### Project 3: Play Music

**Description：**

There is a power amplifier component on the expansion board, which is often used to play music and serve as an external amplifying device for music playback devices.

In this experiment, we use the speaker amplifier component to play music.

**2. Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have internal oscillation circuits.

The power amplifier module can chime sounds with different frequency when power it up.

**3. Test Code**

The speaker module of the PCB board is controlled by the GPIO 12 of the Raspberry Pi Pico.

The code is saved in the KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education \\ 2.Python Tutorials\\ 2.python\_codes.  

We can move the code anywhere.  For example, we can save the code in Disk(D) with the path D:\\2.Python\_Codes.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open the "Thonny" software, click "This computer"→"D:"→"2.Python\_Codes"→"Project\_03\_Buzzer” .

Double-click“Project\_03\_Buzzer.py”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/1397a97d13d5471502c40846bcbfd976.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin</p>
<p>import time</p>
<p>#Initialize the passive buzzer</p>
<p>buzzer = Pin(12,Pin.OUT)</p>
<p>#Simulate two different frequencies</p>
<p>while True:</p>
<p>#Output 500HZ frequency sound</p>
<p>for i in range(80):</p>
<p>buzzer.value(1)</p>
<p>time.sleep(0.001)</p>
<p>buzzer.value(0)</p>
<p>time.sleep(0.001)</p>
<p>#Output 250HZ frequency sound</p>
<p>for i in range(100):</p>
<p>buzzer.value(1)</p>
<p>time.sleep(0.002)</p>
<p>buzzer.value(0)</p>
<p>time.sleep(0.002)</p></td>
</tr>
</tbody>
</table>

**4. Test Result：**

Ensure that the Raspberry Pi Pico is connected to the computer and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png).


![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/09e2ac09527a760058ebdb95bcd97132.png)

Click "Run Current Script", the code starts to execute, we will see the car PCB speaker amplifier components start to beep. Press“Ctrl+C”or click ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/0c97256e014e470050fe35707a074a51.png)

### Project 4: 8*8 Dot Matrix

**1.Description:**

Composed of LED emitting tube diodes, the 8\*8 LED dot matrix are applied widely to public information display like bus station,
advertising screen, bank window screen, stop screen and parking system, etc, by controlling LED to show words, pictures and videos, etc.

In this experiment, the 8\*8 dot matrix screens will be used to display patterns.  

**2.Knowledge:**

8\*8 dot matrix screen: The LED dot matrix screen according to LED light color can be divided into monochrome, two-color, three-color lights, etc., which can display red, yellow, green and even true color.  According to the number of LED, it can be divided into 4×4, 8×8, 16×16 and other different types.  Here we see how this works by using a monochrome 8×8 lattice screen.  

Different dot matrix screens are packaged differently. The 8×8 dot matrix screens are composed of 64 LED lights in 8 rows and 8 columns, and the inner structure of 8×8 dot matrix is shown below.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line. When the voltage on a row line increases, and the voltage on the column line reduces, the LED on the cross point will light up. The 8×8 dot matrix has 16 pins. Put the silk-screened side down and the numbers are 1,-8, 9- 16 in anticlockwise order as marked below.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/6576aff8e8a7fb35335629c2f60de29b.jpeg)

The definition inner pins are shown below:

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, we should increase the voltage of pin 9 and reduce the voltage of pin 13.

**HT16K33 8X8 Dot Matrix**: The above introduced the principle of 8\*8 dot matrix, which requires up to 16 single chip pins to control it .  It's a waste of resources and time.  Here we use a chip that drives the dot matrix screen: HT16K33.  HT16K33 is a memory mapping and multi-function LED controller driver chip.  Using HT16K33 chip to drive an 8\*8 dot matrix, only the I2C communication port of MCU is used to control the dot matrix, which greatly saves the resources of MCU.  The following figure is the working principle diagram of HT16K33 chip.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)

**3. Specification:**

  - Input voltage: 5V    

  - Rated input frequency: 400KHZ 

  - Input power: 2.5W  

  - Input current: 500mA
    
    **4. Introduction for Modulus Tool**

The principle of dot matrix and drive has been introduced,but how is the content displayed on the dot matrix come? Is there a relatively simple method?  Here to introduce a lattice modulus tool, this tool is used online, link: http://dotmatrixtool.com/\#

Let us see how to use it  together  now. 

①Open the link to enter the following page.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*8 in this project. So set the height to 8, width to 8; as shown below.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/501ba516e4be9c8ec4ca6f37e2b6915f.png)

③Click **Byte order** to select **Row major**

Click **Endian** to select **Big Endian(MSB)**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/5e29353965bbe864662cf4a93bd06268.png)

④ Generate the pattern into hexadecimal data

As shown below, the left button of the mouse is for selection while the right is for canceling. Thus you could use them to draw the pattern you want, then click **Generate**, to yield the hexadecimal data needed.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/32e674da893cc93cd1330a9da73269cb.png)

The generated hexadecimal code（0x00, 0x66, 0x00, 0x00, 0x18, 0x42, 0x3c, 0x00) is what will be displayed, so we need to save it for next procedure.

3.  **Wiring up：**

|                         |           |
| ----------------------- | --------- |
| 8\*8 Dot matrix display | PCB Board |
| G                       | G         |
| 5V                      | 5V        |
| SDA                     | SDA       |
| SCL                     | SCL       |

4.  **Test Code**
    
    The 8\*8 dot matrix is controlled by the GPIO20 (SDA) and GPIO21(SCL) of the Raspberry Pi Pico motherboard.
    
    Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny”, click “This computer”→“D:”→“2.Python\_Codes”→“Project\_04\_8×8\_Dot\_Matrix\_Display”
.

Select“ht16k33\_matrix.py”and“matrix\_fonts.py”, right-click“Upload to/” and upload them to the Pico board, then double-click“Project\_04\_8×8\_Dot\_Matrix\_Display.py”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/a59d1ca2f09f597d535af96f6f972dda.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e7a8f977a4c975c24177c3e9785c7410.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/a1946fed26703953b8d34ce2baab8252.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin,I2C</p>
<p>import time</p>
<p>import json</p>
<p>import matrix_fonts</p>
<p>from ht16k33_matrix import ht16k33_matrix</p>
<p>## Tool To Make Sprites https://gurgleapps.com/tools/matrix</p>
<p>#i2c config</p>
<p>clock_pin = 21</p>
<p>data_pin = 20</p>
<p>bus = 0</p>
<p>i2c_addr_left = 0x70</p>
<p>use_i2c = True</p>
<p>def scan_for_devices():</p>
<p>i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))</p>
<p>devices = i2c.scan()</p>
<p>if devices:</p>
<p>for d in devices:</p>
<p>print(hex(d))</p>
<p>else:</p>
<p>print('no i2c devices')</p>
<p>if use_i2c:</p>
<p>scan_for_devices()</p>
<p>left_eye = ht16k33_matrix(data_pin, clock_pin, bus, i2c_addr_left)</p>
<p>def show_char(left):</p>
<p>if use_i2c:</p>
<p>left_eye.show_char(left)</p>
<p>def scroll_message(font,message='hello',delay=0.05): #Scrolling display</p>
<p>left_message = ' ' + message</p>
<p>right_message = message + ' '</p>
<p>length=len(right_message)</p>
<p>char_range=range(length-1)</p>
<p>for char_pos in char_range:</p>
<p>right_left_char=font[right_message[char_pos]]</p>
<p>right_right_char=font[right_message[char_pos+1]]</p>
<p>left_left_char=font[left_message[char_pos]]</p>
<p>left_right_char=font[left_message[char_pos+1]]</p>
<p>for shift in range(8):</p>
<p>left_bytes=[0,0,0,0,0,0,0,0]</p>
<p>right_bytes=[0,0,0,0,0,0,0,0]</p>
<p>for col in range(8):</p>
<p>left_bytes[col]=left_bytes[col]|left_left_char[col]&lt;&lt;shift</p>
<p>left_bytes[col]=left_bytes[col]|left_right_char[col]&gt;&gt;8-shift;</p>
<p>right_bytes[col]=right_bytes[col]|right_left_char[col]&lt;&lt;shift</p>
<p>right_bytes[col]=right_bytes[col]|right_right_char[col]&gt;&gt;8-shift;</p>
<p>if use_i2c:</p>
<p>left_eye.show_char(left_bytes)</p>
<p>time.sleep(delay)</p>
<p>while True:</p>
<p>show_char(matrix_fonts.textFont1['A']) #Show the letter A</p>
<p>time.sleep(1)</p>
<p>show_char(matrix_fonts.textFont1['B'])</p>
<p>time.sleep(1)</p>
<p>show_char(matrix_fonts.textFont1['C'])</p>
<p>time.sleep(1)</p>
<p>scroll_message(matrix_fonts.textFont1, 'Hello World')</p></td>
</tr>
</tbody>
</table>

5.  **Test Result：**

Ensure that the Raspberry Pi Pico is connected to the computer, and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png).

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/97401410e723ca5b61261ab22079f7b9.png)

Click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/da852227207616ccd9aff28f19e02690.png) "Run Current Script", the code starts to execute, and we will see that the 8\*8 dot matrix display character "A" 1S, display character "B" 1S, display character "C" 1S, then scroll display string "Hello World", repeat.  Press Ctrl+C or click Stop/Restart Backend to exit the program.


![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/880ffaa81958455b5a07d4b63f675da1.png)

### Project 5: Servo Rotation

**Description：**

There are two servos on the car. We take the servo connected to pin D9 as an example.

The servo is a motor that can rotate very accurately. It has been widely applied to toy cars, remote control helicopters, airplanes, robots and other fields. In this project, we will use the Nano motherboard to control the servo to spin.

**Knowledge:**
    
    ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles. 

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/708316fde05c62113a3024e0efb0c237.jpeg)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/35084ae289a08e35bdb8c89ceb134ba4.png)

3.  **Wire up：**

|        |           |
| ------ | --------- |
| Servo  | PCB Board |
| Brown  | G         |
| Red    | 5V        |
| Orange | S1（GPIO9） |

4.  **Test Code 1：**

The servo of the ultrasonic sensor is controlled by the GPIO9 of the Pico board.

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D).

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny”, click “This computer”→“D:”→“2.Python\_Codes”→“Project\_05.1\_Servo\_Rotate.py”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e6b9198b963782b0e4bbf7d921b7c48e.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin, PWM</p>
<p>import time</p>
<p>#Define GPIO9’s output frequency as 50Hz and assign them to PWM.</p>
<p>pwm = PWM(Pin(9))</p>
<p>pwm.freq(50)</p>
<p>'''</p>
<p>#Duty cycle corresponding to steering gear Angle</p>
<p>0°----2.5%----1638</p>
<p>45°----5%----3276</p>
<p>90°----7.5%----4915</p>
<p>135°----10%----6553</p>
<p>180°----12.5%----8192</p>
<p>'''</p>
<p>#steering gear Angle are fit to its duty cycle.</p>
<p>angle_0 = 1638</p>
<p>angle_45 = 3276</p>
<p>angle_90 = 4915</p>
<p>angle_135 = 6553</p>
<p>angle_180 = 8192</p>
<p>while True:</p>
<p>pwm.duty_u16(angle_0)</p>
<p>time.sleep(1)</p>
<p>pwm.duty_u16(angle_45)</p>
<p>time.sleep(1)</p>
<p>pwm.duty_u16(angle_90)</p>
<p>time.sleep(1)</p>
<p>pwm.duty_u16(angle_135)</p>
<p>time.sleep(1)</p>
<p>pwm.duty_u16(angle_180)</p>
<p>time.sleep(1)</p></td>
</tr>
</tbody>
</table>

5.  **Test Result 1:**

Ensure that the Raspberry Pi Pico is connected to the computer, and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png).

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/6db68799bd64fd7c1e0428dbba07d707.png)

Place batteries in the battery holder and turn the power switch to the
ON endand then click "Run Current Script". We will see that servo rotate
0°→45°→90°→135°→180° in loop way. Press"Ctrl+C" or click
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit the program.

**Test Code 2:**

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D).

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny”and click This computer”→“D:”→“2.Python\_Codes”→“Project\_05\_Servo”

Select myservo.py and right-click Upload to /

Then double-click Project\_05.2\_Servo\_Sweep.py

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/36048582e4378458d8ea3bbee1bc8fa3.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/cc7f360ec6166793079cc54dd4698a15.png)

<table>
<tbody>
<tr class="odd">
<td><p>from myservo import Servo</p>
<p>import time</p>
<p>servo=Servo(9)</p>
<p>servo.ServoAngle(0)</p>
<p>time.sleep_ms(1000)</p>
<p>try:</p>
<p>while True:</p>
<p>for i in range(0, 180, 1):</p>
<p>servo.ServoAngle(i)</p>
<p>time.sleep_ms(15)</p>
<p>for i in range(180, 0, -1):</p>
<p>servo.ServoAngle(i)</p>
<p>time.sleep_ms(15)</p>
<p>except:</p>
<p>servo.deinit()</p></td>
</tr>
</tbody>
</table>

**Test Result 2：**

Connect the Pico board to your computer and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/3eca30207855b870f594a6bba6413bf7.png)

Place batteries in the battery holder and turn the power switch to the ON end and click "Run Current Script", we will see that servo rotate from 0° to 180°then from 180° to 0°constantly. Press "Ctrl+C" or click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)"Stop/Restart Backend" to exit the program.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/255338bbcca87fb1ca6059fcbf96dfbc.png)

### Project 6: Motor Driving and Speed Control 

**Description：**

There are many ways to drive motors. This car uses the most commonly used DRV8833 motor driver chip, which provides a dual-channel bridge electric driver for toys, printers and other motor integration applications.

In this experiment, we use the DRV8833 motor driver chip on the expansion board to drive the two DC motors, and demonstrate the effect of forward, backward, left-turning, and right-turning.

**Knowledge：**

DRV8833 motor driver chip: Dual H-bridge motor driver with current control function, can drive two DC motors, one bipolar stepper motor, solenoid valve or other inductive loads. Each H-bridge includes circuitry to regulate or limit winding current.

An internal shutdown function with a fault output pin is used for over-current and short circuit protection, under-voltage lockout and over-temperature. A low-power sleep mode is also added. Let's take a look at the schematic diagram of the DRV8833 motor driver chip driving two DC motors:

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/bc839fa0f37fdc3003485b0398dd6d1f.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/9cb8b7c00f814e367040f2ed4a3c9f4a.png)

If you want to get insight to it, you can check the specification of this chip. Just browse it in the“Attachments”folder.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/a2e2b9dde37868ae2233946edb5b5b07.png)

**3. Specification：**

Input voltage of logic part: DC 5V

Input voltage of driving part : DC 5V

Working current of logic part: \<30mA

Operating current of driving part: \<2A

Maximum power dissipation: 10W (T=80℃)

Motor speed: 5V 200 rpm / min

Motor drive form: dual H-bridge drive

Control signal input level: high level 2.3V\<Vin\<5V, low level -0.3V\<Vin\<1.5V

Working temperature: -25\~130℃

**4. Drive the car to move**

From the above diagram, the direction pin of the left motor is GPIO15; the speed pin is GPIO17; GPIO14 is the direction pin of the right motor; and GPIO16 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-65535. The more the PWM value is set, the faster the rotation of the motor.

|            |        |                       |               |        |                       |               |
| ---------- | ------ | --------------------- | ------------- | ------ | --------------------- | ------------- |
| Function   | GPIO15 | GPIO17（PWM）（PWM）（PWM） | Left motor    | GPIO14 | GPIO16（PWM）（PWM）（PWM） | Right motor   |
| forward    | 1      | 50000                 | clockwise     | 1      | 50000                 | clockwise     |
| Go back    | 0      | 10000                 | anticlockwise | 0      | 10000                 | anticlockwise |
| Turn left  | 0      | 50000                 | anticlockwise | 1      | 32768                 | clockwise     |
| Turn right | 1      | 32768                 | clockwise     | 0      | 50000                 | anticlockwise |
| Stop       | 0      | 0                     | stop          | 0      | 0                     | stop          |

**5. Test Code**

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open “Thonny”, click “This computer”→“D:”→“2.Python\_Codes”→“Project\_06\_Motor\_Drive\_And\_Speed\_Regulation”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ce3c245c4daf4c97522bc6087bac98c0.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin,PWM</p>
<p>import time</p>
<p># right wheel</p>
<p>pin1=Pin(14,Pin.OUT)</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p># left wheel</p>
<p>pin3=Pin(15,Pin.OUT)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p># As a function of the car going forward.</p>
<p>def car_forward():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(50000)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(50000)</p>
<p># As a function of the car going backwards.</p>
<p>def car_back():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(10000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(10000)</p>
<p># As a function of the car going left.</p>
<p>def car_left():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(50000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(32768)</p>
<p># As a function of the car going right.</p>
<p>def car_right():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(32768)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(50000)</p>
<p># As a function of the car stopping.</p>
<p>def car_stop():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(0)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(0)</p>
<p>try:</p>
<p>while True:</p>
<p>car_forward() #Car ahead</p>
<p>time.sleep(2) # delay 2s</p>
<p>car_back() # Car goes back</p>
<p>time.sleep(2)</p>
<p>car_left() # Car to the left</p>
<p>time.sleep(2)</p>
<p>car_right() # Car to the right</p>
<p>time.sleep(2)</p>
<p>car_stop() # Car stop</p>
<p>time.sleep(2)</p>
<p>except:</p>
<p>pass</p></td>
</tr>
</tbody>
</table>

6.  **Test Result**

Ensure that the Raspberry Pi Pico is connected to the computer, and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/030a30863b40511c78e1dedc17a399d8.png)

Place batteries in the battery holder and turn the power switch to the ON end and click "Run Current Script"

The car moves forward for 2 seconds, backward for 2 seconds, turns left for 2 seconds, turns right for 2 seconds, stops for 2 seconds, constantly. Press Ctrl+C or click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)
to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/118ab605ba728ee8c916376d53298761.png)

### Project 7: Ultrasonic Sensor

There is an ultrasonic sensor on the car. It is a very affordable distance-measuring sensor.

The ultrasonic sensor sends a high-frequency ultrasonic signal that human hearing can’t hear. When encountering obstacles, these signals will be reflected back immediately. After receiving the returned information, the distance between the sensor and the obstacle will be calculated by judging the time difference between the transmitted signal and the received signal. It is mainly used for object avoidance and ranging in various robotics projects.

#### Project 7.1: Ultrasonic Ranging

**1.Description：**

In this experiment, we use an ultrasonic sensor to measure distance and print the data on a serial monitor.

**2. Knowledge：**

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.

In front of the ultrasonic sensor are two metal cylinders, and these are converters, which converts mechanical energy into electrical signals.  In ultrasonic sensors, there are transmitting converters and receiving converters.  

The transmitting converters transform electrical signals into ultrasonic pulses and the receiving converters transform reflected ultrasonic pulses back to electrical signals.  If we look at the back of the ultrasonic sensor, we'll see an IC behind the transmitter,
which controls the transmitting converter.  There is also an IC behind the receiving converter, which is a quad operational amplifier that amplifies the signal generated by the receiving converter into a signal large enough to transmit to the Arduino.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e6f6037071e434febf7090b56ac35802.png)

**3.Sequence Diagram**

The sequence diagram of HC-SR04 is shown below. In order to begin measurement, the Trig of the SR04 must receive a high pulse (5V) of at least 10uS,which will trigger the sensor to emit eight cycles of 40kHz ultrasonic pulse and wait for the reflected ultrasonic pulse.  When the sensor detects an ultrasonic wave from the receiver, it sets the echo pin to high (5V) and delay to one cycle (width), proportional to the distance. To get the distance, measure the width of the Echo pin.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/4114885ac4b6214953e3224d8c1d52c4.png)

Time=Echo pulse width, unit: us

Distance（cm）=time/ 58

Distance(inch)=time/ 148

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/db430baa07e2e4d9ac9efca1950b953a.jpeg)

The HC-SR04 ultrasonic sensor has four pins: Vcc, Trig, Echo and GND.

The Vcc pin provides power generating ultrasonic pulses and is connected to Vcc/+5V. The GND pin is grounded/GND.

The Trig pin is where the Arduino sends a signal to start the ultrasonic pulse. The Echo pin is where the ultrasonic sensor sends information about the duration of the ultrasonic pulse stroke to the Arduino control board.

**4.Wiring Up**

|                   |            |
| ----------------- | ---------- |
| Ultrasonic Sensor | PCB Board  |
| Vcc               | 5V         |
| Trig              | S2（GPIO10） |
| Echo              | S1（GPIO11） |
| Gnd               | G          |

**Test Code**

The pin Trig and Echo of the ultrasonic sensor are controlled by the GPIO10 and GPIO11 of the pico board.

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D).

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Click Thonny and click This computer”→“D:”→“2.Python\_Codes”→“Project\_07.1\_Ultrasonic\_Ranging”

Double-click Project\_07.1\_Ultrasonic\_Ranging.py

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/f62da5ce04c3213aa56c437e9e0d8734.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin</p>
<p>import time</p>
<p>#Define the control pins of the ultrasonic ranging module.</p>
<p>trigPin=Pin(10,Pin.OUT,0)</p>
<p>echoPin=Pin(11,Pin.IN,0)</p>
<p>#Set the speed of sound.</p>
<p>soundVelocity=340</p>
<p>distance=0</p>
<p>#Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,</p>
<p>#and return the measured distance in centimeters. In this function, first let trigPin</p>
<p>#send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read</p>
<p>#the Ultrasonic Module and return the duration time of high level.</p>
<p>#Finally, the measured distance according to the time is calculated.</p>
<p>def getSonar():</p>
<p>trigPin.value(1)</p>
<p>time.sleep_us(10)</p>
<p>trigPin.value(0)</p>
<p>while not echoPin.value():</p>
<p>pass</p>
<p>pingStart=time.ticks_us()</p>
<p>while echoPin.value():</p>
<p>pass</p>
<p>pingStop=time.ticks_us()</p>
<p>pingTime=time.ticks_diff(pingStop,pingStart)</p>
<p>distance=pingTime*soundVelocity//2//10000</p>
<p>return int(distance)</p>
<p>#Delay for 2 seconds and wait for the ultrasonic module to stabilize,</p>
<p>#Print data obtained from ultrasonic module every 500 milliseconds.</p>
<p>time.sleep_ms(2000)</p>
<p>while True:</p>
<p>time.sleep_ms(500)</p>
<p>print('Distance: ',getSonar(),'cm' )</p></td>
</tr>
</tbody>
</table>

6.  **Test Result**

Ensure the Raspberry Pi Pico is connected to the computer，and click“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/2771589d12c58a183b1f0d9bf3721b25.png)

Place batteries in the battery holder and turn the power switch to the ON end and click "Run Current Script"

We will see that the distance value between the ultrasonic sensor and the object will be printed in the "Shell" window under Thonny IDE. Press “Ctrl+C” or click “Stop/Restart Backend” to exit the program.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/48dc9960039e95502da922fe807320f7.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ce873cf513307a15f9aa58078c8dd7d6.png)

#### Project 7.2: Light Following

**1.Description：**

In the above experiments, we have learned about the 8\*8 dot matrix, motor drivers and speed regulation, ultrasonic sensors, servos and other hardware. In this experiment, we will combine them to create a follow car with the ultrasonic sensor. The can can follow an object to move through measuring distance.

**2. Working Principle：**

|             |                            |                   |
| ----------- | -------------------------- | ----------------- |
| Detection   | Detect the front distance  | Distance（unit：cm） |
| Condition 1 | Distance＜8                 |                   |
| State       | Go back（set PWM to 100）    |                   |
| Condition 2 | 8≤distance\<13             |                   |
| State       | stop                       |                   |
| Condition 3 | 13≤distance\<35            |                   |
| State       | Go forward（set PWM to 100） |                   |
| Condition 4 | distance≥35                |                   |
| State       | stop                       |                   |

**3.Flow Chart：**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e1ded45b4454e64b7ff419bad285cb3a.png)

**4.Test Code**

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Click Thonny and click This computer”→“D:”→“2.Python\_Codes”→“Project\_07.2\_Follow\_Me

Double-click Project\_07.2\_Follow\_Me.py

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/d8e8e6c0f2d79f4366d3d5628abb4230.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin, PWM</p>
<p>import time</p>
<p>'''</p>
<p>#Duty cycle corresponding to steering gear Angle</p>
<p>0°----2.5%----1638</p>
<p>45°----5%----3276</p>
<p>90°----7.5%----4915</p>
<p>135°----10%----6553</p>
<p>180°----12.5%----8192</p>
<p>'''</p>
<p>#Define GPIO9’s output frequency as 50Hz and its duty cycle as 4915, and assign them to PWM.</p>
<p>servoPin = PWM(Pin(9))</p>
<p>servoPin.freq(50)</p>
<p>servoPin.duty_u16(4915)</p>
<p>time.sleep(1)</p>
<p>#Set the pin and sound speed of the ultrasonic sensor</p>
<p>trigPin=Pin(10,Pin.OUT,0)</p>
<p>echoPin=Pin(11,Pin.IN,0)</p>
<p>soundVelocity=340</p>
<p>distance=0</p>
<p># right wheel</p>
<p>pin1=Pin(14,Pin.OUT)</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p># left wheel</p>
<p>pin3=Pin(15,Pin.OUT)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p># As a function of the car going forward.</p>
<p>def car_forward():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(30000)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(30000)</p>
<p># As a function of the car going backwards.</p>
<p>def car_back():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(30000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(30000)</p>
<p># As a function of the car stopping.</p>
<p>def car_stop():</p>
<p>pin2.deinit()</p>
<p>pin4.deinit()</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(0)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(0)</p>
<p>#Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,</p>
<p>#and return the measured distance in centimeters. In this function, first let trigPin</p>
<p>#send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read</p>
<p>#the Ultrasonic Module and return the duration time of high level.</p>
<p>#Finally, the measured distance according to the time is calculated.</p>
<p>def getSonar():</p>
<p>trigPin.value(1)</p>
<p>time.sleep_us(10)</p>
<p>trigPin.value(0)</p>
<p>while not echoPin.value():</p>
<p>pass</p>
<p>pingStart=time.ticks_us()</p>
<p>while echoPin.value():</p>
<p>pass</p>
<p>pingStop=time.ticks_us()</p>
<p>pingTime=time.ticks_diff(pingStop,pingStart)</p>
<p>distance=pingTime*soundVelocity//2//10000</p>
<p>time.sleep_ms(10)</p>
<p>return int(distance)</p>
<p>while True:</p>
<p>Distance=getSonar() #Get the distance measured by ultrasound.</p>
<p>print(Distance) #Send a pulse to calculate the distance in centimeters and print the result.</p>
<p>if Distance&lt;8: #If the distance is less than 8</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_back() #Car goes back</p>
<p>elif Distance&gt;=8 and Distance&lt;13: #If the distance is greater than or equal to 8, it's less than 13.</p>
<p>car_stop() # Car stop</p>
<p>elif Distance&gt;=13 and Distance&lt;35: #If the distance is greater than or equal to 13, it's less than 35.</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_forward() #Car ahead</p>
<p>else:</p>
<p>car_stop()</p></td>
</tr>
</tbody>
</table>

**5. Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer，and click“Stop/Restart backend”.

Place batteries in the battery holder and turn the power switch to the ON end and click "Run Current Script".

We will see that the car can move with the movement of obstacles in front of it. Press Ctrl+C or click Stop/Restart Backend to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/da1764ce61523145e91b42d8c1c51f7e.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e4b4586d9fa83d48d4dd534b5e017699.png)

#### Project 7.3: Dodge Obstacles

**1.Description：**

In the last experiment, we made an ultrasonic following car.  In fact, using the same hardware, we only needed to change one test code to change it into an obstacle avoidance car. But how to achieve it? Of course, it is also achieved through the range of ultrasonic sensors. The obstacle in front of the robot is detected by ultrasonic sensor, and then the direction of the robot movement is obtained according to the data.  

**2. Working Principle：**

|          |                                                      |                                                         |                                             |
| -------- | ---------------------------------------------------- | ------------------------------------------------------- | ------------------------------------------- |
|          | 8\*8 Dot matrix display                              |                                                         |                                             |
|          | Set servo to 90°                                     |                                                         |                                             |
| **loop** | Detect the distance away from the obstacle（unit: cm） |                                                         |                                             |
|          | Condition 1                                          | State                                                   |                                             |
|          | **0\<distance＜10**                                   | Stop                                                    |                                             |
|          |                                                      | Show the“stop”pattern                                   |                                             |
|          |                                                      | Set the servo to 180°                                   | Distance away form the obstacle：a1（unit：cm） |
|          |                                                      | Set the servo to 0°                                     | Distance away form the obstacle：a2（unit：cm） |
|          |                                                      | Condition 2                                             | State                                       |
|          |                                                      | **a1＜a2**                                               | Car turns right（set PWM to 200）             |
|          |                                                      |                                                         | show“turning right”pattern                  |
|          |                                                      |                                                         | Set servo to 90°                            |
|          |                                                      | **a1≥a2**                                               | Turn left（set PWM to 200）                   |
|          |                                                      |                                                         | display“left turning”pattern                |
|          |                                                      |                                                         | Set servo to 90°                            |
|          | **distance≥10**                                      | The 8\*8 dot matrix display shows“going forward”pattern |                                             |
|          |                                                      | Go forward（set PWM to 200）                              |                                             |

**3. Flow Chart：**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/62cafb9417859896368e046396c58495.png)

**4. Test Code**

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny” and click This computer”→“D:”→“2.Python\_Codes”→“Project\_07.3\_Avoid\_Obstacles”，

Select “ht16k33\_matrix.py”and“matrix\_fonts.py” and click“Upload to /”.

Then double-click“Project\_07.3\_Avoid\_Obstacles.py”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/1a506a692f176a04e6f129055cb50f7d.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/b14df0c11aff9c91c578c7a582623e4e.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/3c238e5239927c4c72d8431d19bf987f.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin,I2C,PWM</p>
<p>import time</p>
<p>import json</p>
<p>import matrix_fonts</p>
<p>from ht16k33_matrix import ht16k33_matrix</p>
<p>'''</p>
<p>#Duty cycle corresponding to steering gear Angle</p>
<p>0°----2.5%----1638</p>
<p>45°----5%----3276</p>
<p>90°----7.5%----4915</p>
<p>135°----10%----6553</p>
<p>180°----12.5%----8192</p>
<p>'''</p>
<p>#Define GPIO9’s output frequency as 50Hz and its duty cycle as 4915, and assign them to PWM.</p>
<p>servoPin = PWM(Pin(9))</p>
<p>servoPin.freq(50)</p>
<p>servoPin.duty_u16(4915)</p>
<p>time.sleep(1)</p>
<p>#Set the pin and sound speed of the ultrasonic sensor.</p>
<p>trigPin=Pin(10,Pin.OUT,0)</p>
<p>echoPin=Pin(11,Pin.IN,0)</p>
<p>soundVelocity=340</p>
<p>distance=0</p>
<p># right wheel</p>
<p>pin1=Pin(14,Pin.OUT)</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p># left wheel</p>
<p>pin3=Pin(15,Pin.OUT)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p># As a function of the car going forward.</p>
<p>def car_forward():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(20000)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(20000)</p>
<p># As a function of the car going left.</p>
<p>def car_left():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(20000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(40000)</p>
<p># As a function of the car going right.</p>
<p>def car_right():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(40000)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(20000)</p>
<p># As a function of the car stopping.</p>
<p>def car_stop():</p>
<p>pin2.deinit()</p>
<p>pin4.deinit()</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(0)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(0)</p>
<p>#Subfunction getSonar() is used to start the Ultrasonic Module to begin measurements,</p>
<p>#and return the measured distance in centimeters. In this function, first let trigPin</p>
<p>#send 10us high level to start the Ultrasonic Module. Then use pulseIn() to read</p>
<p>#the Ultrasonic Module and return the duration time of high level.</p>
<p>#Finally, the measured distance according to the time is calculated.</p>
<p>def getSonar():</p>
<p>trigPin.value(1)</p>
<p>time.sleep_us(10)</p>
<p>trigPin.value(0)</p>
<p>while not echoPin.value():</p>
<p>pass</p>
<p>pingStart=time.ticks_us()</p>
<p>while echoPin.value():</p>
<p>pass</p>
<p>pingStop=time.ticks_us()</p>
<p>pingTime=time.ticks_diff(pingStop,pingStart)</p>
<p>distance=pingTime*soundVelocity//2//10000</p>
<p>time.sleep_ms(10)</p>
<p>return int(distance)</p>
<p>## Tool To Make Sprites https://gurgleapps.com/tools/matrix</p>
<p>#i2c config</p>
<p>clock_pin = 21</p>
<p>data_pin = 20</p>
<p>bus = 0</p>
<p>i2c_addr_left = 0x70</p>
<p>use_i2c = True</p>
<p>def scan_for_devices():</p>
<p>i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))</p>
<p>devices = i2c.scan()</p>
<p>if devices:</p>
<p>for d in devices:</p>
<p>print(hex(d))</p>
<p>else:</p>
<p>print('no i2c devices')</p>
<p>if use_i2c:</p>
<p>scan_for_devices()</p>
<p>left_eye = ht16k33_matrix(data_pin, clock_pin, bus, i2c_addr_left)</p>
<p>def show_char(left):</p>
<p>if use_i2c:</p>
<p>left_eye.show_char(left)</p>
<p>while True:</p>
<p>Distance=getSonar() #Get the distance measured by ultrasound.</p>
<p>if Distance&gt;0 and Distance&lt;10: #If the distance is greater than 0, it's less than 10.</p>
<p>car_stop() # Car stop</p>
<p>show_char(matrix_fonts.textFont1['!']) #Show the punctuation !</p>
<p>time.sleep(0.2)</p>
<p>servoPin.duty_u16(8192)</p>
<p>time.sleep(0.3)</p>
<p>a1=getSonar()</p>
<p>time.sleep(0.2)</p>
<p>servoPin.duty_u16(1638)</p>
<p>time.sleep(0.3)</p>
<p>a2=getSonar()</p>
<p>time.sleep(0.2)</p>
<p>if a1&gt;a2:</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_left()</p>
<p>show_char(matrix_fonts.textFont1['&gt;'])</p>
<p>servoPin.duty_u16(4915)</p>
<p>time.sleep(0.3)</p>
<p>show_char(matrix_fonts.textFont1['^'])</p>
<p>else:</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_right()</p>
<p>show_char(matrix_fonts.textFont1['&lt;'])</p>
<p>servoPin.duty_u16(4915)</p>
<p>time.sleep(0.3)</p>
<p>show_char(matrix_fonts.textFont1['^'])</p>
<p>else:</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_forward() #Car ahead</p>
<p>show_char(matrix_fonts.textFont1['^'])</p></td>
</tr>
</tbody>
</table>
**5. Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer，and click“Stop/Restart backend”.

Place batteries in the battery holder and turn the power switch to the ON end and click "Run Current Script"

We will see that the car can avoid obstacles automatically when we put some obstacles around it. Press Ctrl+C or click Stop/Restart Backend to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/d3eda9adf645f2c6b5a08c8bfc66f013.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/b555512c894a8dddf1ccdd8c59d8a1d7.png)

### Project 8: Line Tracking Sensor

There are two IR line tracking sensors on the car. They are actually two pairs of ST188L3 infrared tubes and used to detect black and white lines. In this project, we will make a line tracking car.

#### Project 8.1: Reading Values

**1.Description：**

In this experiment, we use ST188L3 infrared tubes to detect black and white lines, then print the data on the serial monitor.

**2. Knowledge：**

**Infrared line tracking:**

The IR line tracking sensor boasts a pair of ST188L3 infrared tubes,which has an infrared emitting diode and a receiver tube. When the emitting diode emits an infrared signal then received by the receiving tube after being reflected by the white object. Once the receiving tube receives the signal, the output terminal will output a low level (0); when the infrared emitting diode emits an infrared signal, and the infrared signal is absorbed by the black object, a high level (1) will be output, thus realizing the function of detecting signals through infrared rays.

Warning: Reflective optical sensors (including IR line tracking sensors) should not be applied under sunlight as there is a lot of invisible light such as infrared and ultraviolet.

Values detected by the line tracking sensor are shown in the table.

The values of infrared tracking detection of objects with different colors in all cases. Where black object or no object is detected
represents 1, and white object is detected represents 0.  

|      |       |                |
| ---- | ----- | -------------- |
| Left | Right | Value（Binary ） |
| 0    | 0     | 00             |
| 0    | 1     | 01             |
| 1    | 0     | 10             |
| 1    | 1     | 11             |

**3. Test Code**

The line tracking sensors of the PCB board are controlled by GPIO7 and GPIO8 of the pico board.

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open “Thonny”, click “This computer”→“D:”→“2.Python\_Codes”→“Project\_08.1\_Tracking\_Sensor\_Read\_Value.py”
.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/9471c6df68dcd3f67727da13b3fb4a12.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import Pin</p>
<p>import time</p>
<p>tracking_left = Pin(7, Pin.IN)</p>
<p>tracking_right = Pin(8, Pin.IN)</p>
<p>while True:</p>
<p>L_value = tracking_left.value()</p>
<p>R_value = tracking_right.value()</p>
<p>print("L_value:%d, R_value:%d" %(L_value, R_value))</p>
<p>time.sleep(0.5)</p></td>
</tr>
</tbody>
</table>

**4.Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer, and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/cf6886e3c76f0b23a81887ce001d0e4b.png)

Click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/da852227207616ccd9aff28f19e02690.png)“Run current script. Put a black object under line tracking sensors and move it, you will see indicator light up and the Shell show values detected by the IR line tracking sensor.

Click Ctrl+C or click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

The sensitivity can be adjusted by rotating the potentiometer. When the indicator light is adjusted to the critical point of on and off state, the sensitivity is the highest.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/1c9dc0ebe3ffe4330ecb9df48ab74672.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/7b57898ccc7423695e6078a3e015fb90.png)

#### Project 8.2: Line Tracking

**1.Description：**

We have introduced the knowledge of motor drivers, speed regulation, and infrared line tracking. In this experiment, the car will perform different actions according to the values transmitted by the infrared tracking.

**Working Principle：**

|      |       |                |              |
| ---- | ----- | -------------- | ------------ |
| Left | Right | Value（Binary ） | State        |
| 0    | 0     | 00             | Stop         |
| 0    | 1     | 01             | Turn right   |
| 1    | 0     | 10             | Turn left    |
| 1    | 1     | 11             | Move forward |

3.  **Flow Chart：**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/c6a0ace5faa949e4fb24fc511d179e08.png)

4.  **Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer, and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/569d54b7df23878ac24bdb07a18af9de.png)

Place batteries in the battery holder, turn the power switch to the ON end, power up and put the car on a map we provide.

Click“Run current script”，then it will perform different functions via values sent by line tracking sensors. Press Ctrl+C or click
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ced1dfcc06db40a7372c35beb3071758.png)

### Project 9: Light Following

We all know that humans can look for light in the dark with their eyes, but how do robots do this?  For the robot to do this task, it first needs to be equipped with bright eyes, or light-sensitive sensors, so that the robot can find the light source by its strength. Our car is equipped with one photosensitive sensor on the left and the right.

When the light intensity and weakness of the external environment change, the resistance of the photosensitive sensor also changes accordingly, and this change is transmitted to the Nano board on the car, which judges and thinks like the human brain, directs the car to find light. Two photosensitive sensors constantly detect whether there is light, detect the light on the left and right sides of the judgment of which direction the light is stronger, and finally direct the car to the direction of strong light.  

#### Project 9.1 Read Values

**Description：**

In this experiment, we will learn the working principle of the photoresistor.

**2. Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance varies from the light intensity. The signal terminal of the sensor is connected to the analog port of the microcontroller. When the light is stronger, the analog value at the analog port will increase; on the contrary, when the light intensity is weaker, the analog value of the microcontroller will reduce. In this way, the corresponding analog value can reflect the ambient light intensity.

**3. Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are connected to A6 and A7 of the Nano board.

For the following experiment, we use the photoresistor connected to A6 to finish experiments. First, let us read analog values.

|                    |           |
| ------------------ | --------- |
| Left photoresistor | PCB board |
| G                  | G         |
| V                  | V         |
| S                  | S（GPIO26） |

**4. Test Code**

The left photoresistor is controlled by the GPIO26 of the pico board.

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open “Thonny”, click“This computer”→“D:”→“2.Python\_Codes”→“Project\_09.1\_Read\_Photosensor\_Value”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/23630dcf5871c355dada5baec97cfa3d.png)

<table>
<tbody>
<tr class="odd">
<td><p>from machine import ADC, Pin</p>
<p>import time</p>
<p># Initialize the photoresistance to pin 26 (ADC function)</p>
<p>adc = ADC(Pin(26))</p>
<p># Print the current adc value of the photoresistance cyclically</p>
<p>try:</p>
<p>while True:</p>
<p>adcValue = adc.read_u16() # read the ADC value of photoresistance</p>
<p>print("ADC Value:", adcValue) #Send the ADC value of photoresistance and print the result.</p>
<p>time.sleep(0.5)</p>
<p>except:</p>
<p>pass</p></td>
</tr>
</tbody>
</table>
**5.Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/d32c01936b81f7a73e72c3004e39f184.png)

Click“Run current script”, we will see that when the light intensifies, the analog value will get increased; on the contrary, the analog value will get reduced. Press“Ctrl+C”or click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart Backend”to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/d5408971cd4dcac6d79074abbc3181f0.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/2779d2006487d514963e0c9b095864be.png)

#### Project 9.2: Light Following Car

**Description：**

We have learned the working principle of photoresistor, motor and speed regulation. In this experiment, we will use a photoresistor to detect the intensity of light as as to achieve the light following effect.

**Working Principle：**

|                                 |                                  |               |
| ------------------------------- | -------------------------------- | ------------- |
| Analog value of the left sensor | Analog value of the right sensor | Function      |
| \>50000                         | \>50000                          | Move forward  |
| \>50000                         | ≤50000                           | Move to left  |
| ≤50000                          | \>50000                          | Move to right |
| \<50000                         | \<50000                          | Stop          |

3.  **Wiring up：**

<table>
<tbody>
<tr class="odd">
<td>Left Photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
<td></td>
<td>Right photoresistor</td>
<td><p>PCB</p>
<p>Board</p></td>
</tr>
<tr class="even">
<td>G</td>
<td>G</td>
<td></td>
<td>G</td>
<td>G</td>
</tr>
<tr class="odd">
<td>V</td>
<td>V</td>
<td></td>
<td>V</td>
<td>V</td>
</tr>
<tr class="even">
<td>S</td>
<td>S（GPIO26）</td>
<td></td>
<td>S</td>
<td>S（GPIO27）</td>
</tr>
</tbody>
</table>

4.  **Flow Chart：**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/3fbf253b690c18612d2ef79a1ab3e348.png)

5.  **Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer, and click“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/359277411f6677cd03a8f21d072ed8f5.png)

Place batteries in the battery holder, turn the power switch to ON end and click "Run Current Script". We will see that the car will follow the light to move.

Press“Ctrl+C”or click“Stop/Restart Backend”to exit the program.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/c16c3e40eed19bd9581a83a50778dee8.png)

### Project 10: IR Remote Control

Infrared remote controls are everywhere in daily life. It is used to control various home appliances, such as TV, speakers, video recorders and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a decoding MCU. In this project, we will make a IR remote control car.

#### Project 10.1: IR Remote and Reception

**1.Description：**

In this experiment, we will combine the IR receiver and the IR remote control to read key values and show them on the serial monitor.

**Knowledge：**

**IR Remote Control：**

It is a device with buttons. When the key is pressed, IR signals will be sent.

Infrared remote control technology is widely used, such as TVs, air conditioners and so on. And it can control air conditioners and TVs

The infrared remote control adopts NEC coding, and the signal period is 110ms.

The remote control is shown below:

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

Infrared (IR) receiver:

It can receive infrared light and be used to detect the infrared signal emitted by the infrared remote control.

It can demodulate the received infrared light signal and convert it back to binary, and then transmit the information to the microcontroller.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/3da1969e509f53706643c77d0534eb73.png)

**NEC Infrared communication protocol：**

**NEC Protocol**

To my knowledge the protocol I describe here was developed by NEC (Now Renesas). I've seen very similar protocol descriptions on the internet, and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is that it was used in my late VCR produced by Sanyo and was marketed under the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the days, when service manuals were filled with useful information\!

**Features**

8 bit address and 8 bit command length.

Extended mode available, doubling the address size.

Address and command are transmitted twice for reliability.

Pulse distance modulation.

Carrier frequency of 38kHz.

Bit time of 1.125ms or 2.25ms.

**Modulation**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/da33571c6f0afb94b1ec1d91caba3edb.png)

The NEC protocol uses pulse distance encoding of the bits. Each pulse is a 560µs long 38kHz carrier burst (about 21 cycles). A logical "1" takes 2.25ms to transmit, while a logical "0" is only half of that, being 1.125ms. The recommended carrier duty-cycle is 1/4 or 1/3.

**Protocol**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/f970404e7bbfb5711fea5c776f689f3a.png)

The picture above shows a typical pulse train of the NEC protocol. With this protocol the LSB is transmitted first. In this case Address $59 and Command $16 is transmitted. A message is started by a 9ms AGC burst, which was used to set the gain of the earlier IR receivers. This AGC burst is then followed by a 4.5ms space, which is then followed by the Address and Command. 

Address and Command are transmitted twice. The second time all bits are inverted and can be used for verification of
the received message. The total transmission time is constant because every bit is repeated with its inverted length. If you're not interested in this reliability you can ignore the inverted values, or you can expand the Address and Command to 16 bits each\!

Keep in mind that one extra 560µs burst has to follow at the end of the message in order to be able to determine the value of the last bit.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/63364daf21e5522c64eb8dfa82f2cef2.png)

A command is transmitted only once, even when the key on the remote control remains pressed. Every 110ms a repeat code is transmitted for as long as the key remains down. This repeat code is simply a 9ms AGC pulse followed by a 2.25ms space and a 560µs burst.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/afea92a3b5cc1aa2457d2b118b157c84.png)

**Extended NEC protocol**

The NEC protocol is so widely used that soon all possible addresses were used up. By sacrificing the address redundancy the address range was extended from 256 possible values to approximately 65000 different values. This way the address range was extended from 8 bits to 16 bits without changing any other property of the protocol.

By extending the address range this way the total message time is no longer constant. It now depends on the total number of 1's and 0's in the message. If you want to keep the total message time constant you'll have to make sure the number 1's in the address field is 8 (it automatically means that the number of 0's is also 8). This will reduce the maximum number of different addresses to just about 13000.

The command redundancy is still preserved. Therefore each address can still handle 256 different commands.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/2f78d1ce7f001926f6b90ad966796e91.png)

Keep in mind that 256 address values of the extended protocol are invalid because they are in fact normal NEC protocol addresses. Whenever the low byte is the exact inverse of the high byte it is not a valid extended address.

3.  **Test Code**

The IR receiver on the PCB board is controlled by GPIO6 of the pico board.

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny”, click“This computer”→“D:”→“2.Python\_Codes”→“Project\_10.1\_Infrared\_Remote\_And\_Receiver”

Select“irrecvdata.py”and right-click“Upload to /， after the“irrecvdata.py”is uploaded to the Raspberry Pi Pico，then double-click“Project\_10.1\_Infrared\_Remote\_And\_Receiver.py”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ebebdd19187697dd6a25351df9a97ef7.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/2ac3e77b4555d9ee5dbf2956241322f4.png)

<table>
<tbody>
<tr class="odd">
<td><p>from irrecvdata import irGetCMD #Import the infrared decoder.</p>
<p>recvPin = irGetCMD(6) #Associate the infrared decoder with Pin(6).</p>
<p>#When infrared key value is obtained, print it out in"Shell" repetitively.</p>
<p>try:</p>
<p>while True:</p>
<p>irValue = recvPin.ir_read() #Call ir_read() to read the value of the pressed key and assign it to IRValue.</p>
<p>if irValue:</p>
<p>print(irValue) # Send the irValue of Infrared Receiver and print the result.</p>
<p>except:</p>
<p>pass</p></td>
</tr>
</tbody>
</table>
**4.Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer，and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/c38be543f0ee20956fd99b93d2160fa4.png)

Click "Run Current Script" . Point at the infrared remote control at the infrared receiving head and press buttons on the controller, the "Shell" window under Thonny IDE will print the current received keycode value. Press “Ctrl+C” or click
![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart
Backend” to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/775b2f65d47a2907ac6c720b7a568cfd.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/623f8fa842b90a093d286954835483c6.png)

Write down the code associated with each button on the infrared remote, as we will need this information later.   

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

#### Project 10.2: IR Remote Control Car

**1.Description：**

In the above experiment, we have learned about the knowledge of the 8\*8 dot matrix display, the motor driver and speed regulation, the infrared receiver and the infrared remote control. In this experiment, we will use the infrared remote control and the infrared receiver to control the car.

**2.Working Principle：**

|                                                                                                                                                    |           |                            |
| -------------------------------------------------------------------------------------------------------------------------------------------------- | --------- | -------------------------- |
| Keys                                                                                                                                               | Keys Code | Functions                  |
| ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e471ee4e3fd5a9daafc9d97460124119.png) | FF629D    | Go forward                 |
|                                                                                                                                                    |           | Display “forward”pattern   |
| ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ace76021618d9ae6107a0f9b69dc47fc.png) | FFA857    | Go back                    |
|                                                                                                                                                    |           | Display “back”pattern      |
| ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/813f77055aefe6ee0fce22e14fbf093c.png) | FF22DD    | Turn left                  |
|                                                                                                                                                    |           | Show“left” pattern         |
| ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/9eb9042aace52c96a86379dbac70ee2d.png) | FFC23D    | Turn right                 |
|                                                                                                                                                    |           | Show“right turning”pattern |
| ![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/68cbb08d230ef50b2f69c66c685414f6.png) | FF02FD    | stop                       |
|                                                                                                                                                    |           | show“stop”pattern          |

3.  **Flow Chart：**

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)

**4. Test Code**

Go to the folder KS3027 Keyestudio Beetlebot 3 in 1 Robot for Pico STEM Education\\2. Python Tutorials\\2.Python\_Codes, You can save the code anywhere. For example, we save the code in the Disk(D)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/53ad6dae1158e06978b3f04b448272e9.png)

Open“Thonny”, click “This computer”→“D:”→“2.Python\_Codes”→“Project\_10.2\_IR\_Control\_Car”

Select“ht16k33\_matrix.py, irrecvdata.py and matrix\_fonts.py and right-click Upload to /, then double-click Project\_10.2\_IR\_Control\_Car.py”

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e3bff76c4eec83f54c9038c404885109.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e4ce9db5306d8204838ea35f78418320.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/1922c10aa46e58d07dca58f0a50fdb15.png)

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/7fe5635b3e53e79cdfd51114dde09d92.png)

<table>
<tbody>
<tr class="odd">
<td><p>#Import libraries</p>
<p>from machine import Pin,I2C,PWM</p>
<p>import time</p>
<p>import json</p>
<p>import matrix_fonts</p>
<p>from ht16k33_matrix import ht16k33_matrix</p>
<p>from irrecvdata import irGetCMD</p>
<p>recvPin = irGetCMD(6) #Associate the infrared decoder with Pin(6).</p>
<p>'''</p>
<p>#Duty cycle corresponding to steering gear Angle</p>
<p>0°----2.5%----1638</p>
<p>45°----5%----3276</p>
<p>90°----7.5%----4915</p>
<p>135°----10%----6553</p>
<p>180°----12.5%----8192</p>
<p>'''</p>
<p>#Define GPIO9’s output frequency as 50Hz and its duty cycle as 4915, and assign them to PWM.</p>
<p>servoPin = PWM(Pin(9))</p>
<p>servoPin.freq(50)</p>
<p>servoPin.duty_u16(4915)</p>
<p>time.sleep(1)</p>
<p># right wheel</p>
<p>pin1=Pin(14,Pin.OUT)</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p># left wheel</p>
<p>pin3=Pin(15,Pin.OUT)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>## Tool To Make Sprites https://gurgleapps.com/tools/matrix</p>
<p>#i2c config</p>
<p>clock_pin = 21</p>
<p>data_pin = 20</p>
<p>bus = 0</p>
<p>i2c_addr_left = 0x70</p>
<p>use_i2c = True</p>
<p>def scan_for_devices():</p>
<p>i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))</p>
<p>devices = i2c.scan()</p>
<p>if devices:</p>
<p>for d in devices:</p>
<p>print(hex(d))</p>
<p>else:</p>
<p>print('no i2c devices')</p>
<p>if use_i2c:</p>
<p>scan_for_devices()</p>
<p>left_eye = ht16k33_matrix(data_pin, clock_pin, bus, i2c_addr_left)</p>
<p>def show_char(left):</p>
<p>if use_i2c:</p>
<p>left_eye.show_char(left)</p>
<p># As a function of the car going forward.</p>
<p>def car_forward():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(50000)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(50000)</p>
<p># As a function of the car going backwards.</p>
<p>def car_back():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(10000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(10000)</p>
<p># As a function of the car going left.</p>
<p>def car_left():</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(50000)</p>
<p>pin3.value(1)</p>
<p>pin4.duty_u16(32768)</p>
<p># As a function of the car going right.</p>
<p>def car_right():</p>
<p>pin1.value(1)</p>
<p>pin2.duty_u16(32768)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(50000)</p>
<p># As a function of the car stopping.</p>
<p>def car_stop():</p>
<p>pin2.deinit()</p>
<p>pin4.deinit()</p>
<p>pin1.value(0)</p>
<p>pin2.duty_u16(0)</p>
<p>pin3.value(0)</p>
<p>pin4.duty_u16(0)</p>
<p>def handleControl(value):</p>
<p>if value == '0xff629d':</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_forward() #Car ahead</p>
<p># Dot matrix shows a forward pattern</p>
<p>show_char(matrix_fonts.textFont1['^'])</p>
<p>elif value == '0xffa857':</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_back() # Car goes back</p>
<p># Dot matrix shows a backward pattern</p>
<p>show_char(matrix_fonts.textFont1['v'])</p>
<p>elif value == '0xff22dd':</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_left() # Car to the left</p>
<p># Dot matrix shows a left pattern</p>
<p>show_char(matrix_fonts.textFont1['&gt;'])</p>
<p>elif value == '0xffc23d':</p>
<p>pin2=PWM(Pin(16))</p>
<p>pin2.freq(50)</p>
<p>pin4=PWM(Pin(17))</p>
<p>pin4.freq(50)</p>
<p>car_right() # Car to the right</p>
<p># Dot matrix displays a right pattern</p>
<p>show_char(matrix_fonts.textFont1['&lt;'])</p>
<p>elif value == '0xff02fd':</p>
<p>car_stop() # Car to the right</p>
<p># Dot matrix displays a stop pattern</p>
<p>show_char(matrix_fonts.textFont1['!'])</p>
<p>try:</p>
<p>while True:</p>
<p>irValue = recvPin.ir_read() #Call ir_read() to read the value of the pressed key and assign it to IRValue.</p>
<p>if irValue:</p>
<p>print(irValue)</p>
<p>handleControl(irValue)</p>
<p>except:</p>
<p>pass</p></td>
</tr>
</tbody>
</table>

**4.Test Result：**

Ensure the Raspberry Pi Pico is connected to the computer，and click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”.

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/e9d8c553dadffc57605b896120a3e01d.png)

Place batteries in the battery holder, turn the power switch to ON end. Click "Run Current Script", point the remote control at the infrared receiver, press keys on the remote control, then the car will show different functions. Press“Ctrl+C”or
click![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart Backend”to exit the program.  

![](raw.githubusercontent.com/keyestudio/KS3027-KS3027F-Keyestudio-Beetlebot-3-in-1-Robot-for-Raspberry-Pi-Pico-Python/master/media/ca75ccb0730d47d804ee22484e6ad079.png)



 

