# CPP-Varicode-ASCII-Conversions

Simple lookup table and unordered_map for ascii -> varicode and varicode -> ascii.
Varicode is represented as a string.

There is no padding added so if it is being used within a QPSK or BPSK application keep this in mind. 
With PSK31 the padding between characters is logical "00".
