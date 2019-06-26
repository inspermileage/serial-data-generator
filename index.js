const SerialPort = require("serialport");
const Regex = SerialPort.parsers.Regex;
const Readline = SerialPort.parsers.Regex;

const port = new SerialPort("/dev/ttyUSB0", {
     baudRate: 9600
});

const parser = port.pipe(new Regex({ regex: "\<([^\>]+)\>" }));

parser.on('open', function () {
    console.log('Opened parser.');
});

parser.on('data', function (data) {
    // console.log(JSON.stringify(data)); //Shows what the computer is receiving from the USB Serial, including \n\r
    const parsedData = data.toString().split(',');
    // console.log(parsedData);  // Shows parsed data by comma in list
    console.log(toJSON(parsedData));
});

parser.on('err', function (data) {
    console.log(err.message);
});

const dataSet = ["button", "accelerometer", "altimeter", "barometer", 
                "temperature", "rpm","voltage", "current"]

function toJSON(data) {
    return Object.assign({}, ...dataSet.map((n, index) => ({[n]: data[index]})))
}