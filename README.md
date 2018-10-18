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

## The ISP Addressing Problem
### 10/17/18
* An ISP is granted a block of addresses starting with 190.100.0.0/16 (65,536 addresses). The ISP needs to distribute these addresses to three groups of customers as follows:
    * The first group has 64 customers; each needs 256 addresses.
    * The second group has 128 customers; each needs 128 addresses.
    * The third group has 128 customers; each needs 64 addresses.
* Design the subblocks and find out how many addresses are still available after these allocations.

## Socket Programming: Sending date and time from server to client
### 10/18/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/socket-programming-cc/)

## Socket Programming: A basic chat client
### 10/19/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/socket-programming-cc/)

## Checksum
### 10/20/18

## Note
* All programs were compiled using the `gcc-8` and `gcc` compiler on MacOS.