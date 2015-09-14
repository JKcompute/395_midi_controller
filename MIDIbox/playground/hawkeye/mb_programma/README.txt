$Id: README.txt 2014-06-08 16:43:42Z tk $

MIDIbox Programma by Hawkeye, based on MIDIbox NG by TK.
===============================================================================

The Programma is a hardware synth patch programmer, based on MIDIbox NG with a
standardized set of standard MIDIbox hardware/modules.

This allows specific code customization to the awesome and generic
MIDIboxNG by TK to extend it for programma-specific features and hardware.

Current hardware requirements to run the Programma:

a) STM32F4 core, running this adapted version of MBNG
b) four of fairlightiiis LRE8x2 LEDring modules (optionally equipped with
pushable encoders for parameter input acceleration)
c) twenty-four SSD1306 compatible 128x64px OLEDs (four-wire serial mode),
which will be mounted on the LEDring boards in an innovative way to label
the encoders
d) one DOUTx4 digital out module to drive label displays
e) a SCS-based menu hardware section, which allows to switch programma targets (MBNG
patches), store edited instrument patches, ...
f) an optional (also standardized) analog extension box (attached to a AINSER64)
containing an analog joystick, pedal inputs, ...

================================================================================

