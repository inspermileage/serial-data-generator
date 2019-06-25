# Serial Data Generator
This arduino program generates random data simulating 6 sensors and prints to the USB Serial port.

The protocol used was:

|         <        |     data    |     ,     |     data    |     ,     | ... |        >       |
|:----------------:|:-----------:|:---------:|:-----------:|:---------:|:---:|:--------------:|
| Start of message | sensor data | delimiter | sensor data | delimiter |     | End of message |


