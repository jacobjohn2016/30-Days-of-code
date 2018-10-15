# 30 Days of code

Attempt to crack C programming by solving one program per day.

*Aim:* Commit at least once every day for the next 30 days.

## Checksum
### 10/15/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/error-detection-computer-networks/)
* In checksum error detection scheme, the data is divided into k segments each of m bits.
* In the sender’s end the segments are added using 1’s complement arithmetic to get the sum. The sum is complemented to get the checksum.
* The checksum segment is sent along with the data segments.
* At the receiver’s end, all received segments are added using 1’s complement arithmetic to get the sum. The sum is complemented.
* If the result is zero, the received data is accepted; otherwise discarded.

