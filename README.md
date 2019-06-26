# Serial Data Generator
This arduino program generates random data simulating 6 sensors and prints to the USB Serial port.

The protocol used was:

|         <        |     data    |     ,     |     data    |     ,     | ... |        >       |
|:----------------:|:-----------:|:---------:|:-----------:|:---------:|:---:|:--------------:|
| Start of message | sensor data | delimiter | sensor data | delimiter |     | End of message |

## How to use
- Load the .ino file into a arduino
- Plug the arduino into the computer
- In the terminal, run:
  - `yarn`, to install the dependencies.
  - `node index.js`, to start the program.
  
Or after installing the dependencies, you can run in development mode with: `yarn dev` (this will re-run the index.js at every file change, thanks to *nodemon*)

## Issues
If the terminal presents some kind o error regarding the use authorization of the USB, run in the terminal:
- `sudo chmod a+rw /dev/ttyUSB0`
