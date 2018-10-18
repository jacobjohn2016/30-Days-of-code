# 30 Days of code

**Aim:** Commit at least once every day for the next 30 days. Attempt to crack C programming by solving one program per day.

## Checksum
### 10/15/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/error-detection-computer-networks/)
* In checksum error detection scheme, the data is divided into k segments each of m bits.
* In the sender’s end the segments are added using 1’s complement arithmetic to get the sum. The sum is complemented to get the checksum.
* The checksum segment is sent along with the data segments.
* At the receiver’s end, all received segments are added using 1’s complement arithmetic to get the sum. The sum is complemented.
* If the result is zero, the received data is accepted; otherwise discarded.

## Cylic Redundancy Check (CRC)
### 10/16/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/modulo-2-binary-division/)
* A cyclic redundancy check (CRC) is an error-detecting code commonly used in digital networks and storage devices to detect accidental changes to raw data
* Blocks of data entering these systems get a short check value attached, based on the remainder of a polynomial division of their contents.
* On retrieval, the calculation is repeated and, in the event the check values do not match, corrective action can be taken against data corruption.
* CRCs can be used for error correction.

## The ISP Addressing Problem
### 10/17/18
* An ISP is granted a block of addresses starting with 190.100.0.0/16 (65,536 addresses). The ISP needs to distribute these addresses to three groups of customers as follows:
    * The first group has 64 customers; each needs 256 addresses.
    * The second group has 128 customers; each needs 128 addresses.
    * The third group has 128 customers; each needs 64 addresses.
* Design the subblocks and find out how many addresses are still available after these allocations.

## Hamming Code
### 10/18/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/computer-network-hamming-code/)
* Hamming code is a set of error-correction codes that can be used to detect and correct the errors that can occur when the data is moved or stored from the sender to the receiver.
* A parity bit is a bit appended to a data of binary bits to ensure that the total number of 1’s in the data are even or odd. Parity bits are used for error detection.
* Sender message size = 4 bits
* Receiver message size = 7 bits

## Go Back N
### 10/19/18
Source: [Wikipedia](https://en.wikipedia.org/wiki/Go-Back-N_ARQ)
* Go-Back-N ARQ is a specific instance of the automatic repeat request (ARQ) protocol, in which the sending process continues to send a number of frames specified by a window size even without receiving an acknowledgement (ACK) packet from the receiver.
* It is a special case of the general sliding window protocol with the transmit window size of N and receive window size of 1.
* It can transmit N frames to the peer before requiring an ACK.

## Note
* All programs were compiled using the `gcc-8` and `gcc` compiler on MacOS.