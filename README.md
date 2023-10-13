# 2D-MIMO-OCC-System-Based-on-Deep-Learning

*Abstract*

<div style="text-align: justify">
    Optical camera communication (OCC) is one of the most promising optical wireless technology communication systems. This technology has a number of benefits compared to radio frequency, including unlimited spectrum, no congestion due to high usage, and low operating costs. OCC operates in order to transmit an optical signal from a light-emitting diode (LED) and receive the signal with a camera. However, identifying, detecting, and extracting data in a complex area with very high mobility is the main challenge in operating the OCC. In this paper, we design and implement a real-time OCC system that can communicate in high mobility conditions, based on You Only Look Once version 8 (YOLOv8). We utilized an LED array that can be identified accurately and has an enhanced data transmission rate due to a greater number of source lights. Our system is validated in a highly mobile environment with camera movement speeds of up to 10 m/s at 2 m, achieving a bit error rate of 10−2. In addition, this system achieves high accuracy of the LED detection algorithm with mAP0.5 and mAP0.5:0.95 values of 0.995 and 0.8604, respectively. The proposed method has been tested in real-time and achieves processing speeds up to 1.25 ms.
</div>

<p align="center">
  <img width="500" height="500" src="https://github.com/0nespo/2D-MIMO-OCC-System-Based-on-Deep-Learning/assets/92374095/c6fae164-8eea-460c-ba5b-b74cc191c341">
</p>

<div style="text-align: justify">
    This Figure provides a description of the deep learning-based two-dimensional on-off keying multiple-input multiple-output (2D OOK-MIMO) OCC. The architecture of a 2D OOK-MIMO transceiver that incorporates a deep learning system is illustrated in Figure 1. The transmitter encodes the data information, and the fundamental principle of the OCC system is to calibrate the optical signal intensity for dependable data transmission and reception. The enhancement of the security and precision of the communication system can be achieved through the utilization of a promising modulation scheme. The primary form of amplitude-shift keying modulation that serves as the foundation is the OOK scheme. This scheme utilizes two distinct data statuses, namely, “ON” and “OFF”, which are symbolized by the binary digits “1” and “0”, respectively. We detected LEDs using YOLOv8 algorithms. By positioning each LED in an LED array according to the spatial frame format of our proposed scheme, which is based on image processing techniques, the receiver side can readily detect and resolve data code.
</div>

<p align="center">
  <img width="500" height="500" src="https://github.com/0nespo/2D-MIMO-OCC-System-Based-on-Deep-Learning/assets/92374095/9ca6e6d4-9c64-4c83-919a-9938501777c7">
</p>

<div style="text-align: justify">
    Because the scattering of light reflected by the LED makes communication biased, we use a modified Gaussian filter to filter the refraction reflected by the LED. We adapted an adaptive thermostat system to print image contours according to the lighting in the surrounding environment.
</div>

<p align="center">
  <img width="500" height="500" src="https://github.com/0nespo/2D-MIMO-OCC-System-Based-on-Deep-Learning/assets/92374095/fd1db751-faef-455b-a62a-207614053278">
</p>

<div style="text-align: justify">
The output after detection of the LED using OOK modulation
</div>


You can find the complete documents and papers by clicking on this link
https://www.mdpi.com/1424-8220/23/17/7637




