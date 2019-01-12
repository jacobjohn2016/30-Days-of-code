# 30 Days of code

**Aim:** Commit at least once every day for the next 30 days. Attempt to crack beginner level C programming by doing a program per day.

**Note:** Due to other _commitments_ (pun intended) and coursework, I had to disband this project. Thank you for all your support!

Please feel free to follow my other [Java Programming Repo](https://github.com/jacobjohn2016/Java-Programming).

## Checksum
### Day 1: 10/15/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/error-detection-computer-networks/)
* In checksum error detection scheme, the data is divided into k segments each of m bits.
* In the sender’s end the segments are added using 1’s complement arithmetic to get the sum. The sum is complemented to get the checksum.
* The checksum segment is sent along with the data segments.
* At the receiver’s end, all received segments are added using 1’s complement arithmetic to get the sum. The sum is complemented.
* If the result is zero, the received data is accepted; otherwise discarded.

## Cylic Redundancy Check (CRC)
### Day 2: 10/16/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/modulo-2-binary-division/)
* A cyclic redundancy check (CRC) is an error-detecting code commonly used in digital networks and storage devices to detect accidental changes to raw data
* Blocks of data entering these systems get a short check value attached, based on the remainder of a polynomial division of their contents.
* On retrieval, the calculation is repeated and, in the event the check values do not match, corrective action can be taken against data corruption.
* CRCs can be used for error correction.

## The ISP Addressing Problem
### Day 3: 10/17/18
* An ISP is granted a block of addresses starting with 190.100.0.0/16 (65,536 addresses). The ISP needs to distribute these addresses to three groups of customers as follows:
    * The first group has 64 customers; each needs 256 addresses.
    * The second group has 128 customers; each needs 128 addresses.
    * The third group has 128 customers; each needs 64 addresses.
* Design the subblocks and find out how many addresses are still available after these allocations.

## Hamming Code
### Day 4: 10/18/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/computer-network-hamming-code/)
* Hamming code is a set of error-correction codes that can be used to detect and correct the errors that can occur when the data is moved or stored from the sender to the receiver.
* A parity bit is a bit appended to a data of binary bits to ensure that the total number of 1’s in the data are even or odd. Parity bits are used for error detection.
* Sender message size = 4 bits
* Receiver message size = 7 bits

## Go Back N
### Day 5: 10/19/18
Source: [Wikipedia](https://en.wikipedia.org/wiki/Go-Back-N_ARQ)
* Go-Back-N ARQ is a specific instance of the automatic repeat request (ARQ) protocol, in which the sending process continues to send a number of frames specified by a window size even without receiving an acknowledgement (ACK) packet from the receiver.
* It is a special case of the general sliding window protocol with the transmit window size of N and receive window size of 1.
* It can transmit N frames to the peer before requiring an ACK.

## Selective Repeat
### Day 6: 10/20/18
Source: [Wikipedia](https://en.wikipedia.org/wiki/Selective_Repeat_ARQ)
* Selective Repeat ARQ/Selective Reject ARQ is a specific instance of the automatic repeat-request (ARQ) protocol used to solve sequence number dilemma in communications.
* With selective repeat, the sender sends a number of frames specified by a window size even without the need to wait for individual ACK from the receiver as in Go-Back-N ARQ
* The receiver may selectively reject a single frame, which may be retransmitted alone; this contrasts with other forms of ARQ, which must send every frame from that point again
* The receiver accepts out-of-order frames and buffers them. 
* The sender individually retransmits frames that have timed out.

## Stop and Wait ARQ
### Day 7: 10/21/18
Source: [Wikipedia](https://www.geeksforgeeks.org/stop-and-wait-arq/)
* Used in Connection-oriented communication.
* It offers error and flow control
* It is used in Data Link and Transport Layers
* Stop and Wait ARQ mainly implements Sliding Window Protocol concept with Window Size 1

## Socket Programming: Time
### Day 8: 10/22/18
Source: [GeeksForGeeks](https://www.geeksforgeeks.org/socket-programming-cc/)
* Socket programming is a way of connecting two nodes on a network to communicate with each other.
* One socket(node) listens on a particular port at an IP, while other socket reaches out to the other to form a connection.
* Server forms the listener socket while client reaches out to the server.
* Program to obtain time from server and print it on client side

## Socket Programming: Chatting Application
### Day 9: 10/23/18
* Program to create a chat application using sockets

## Classful Addressing
### Day 10: 10/24/18
* Find the class of a given IPv4 Address
* Class A		  1     to    126
* Class B		128 	to    191
* Class C		192	    to    223
* Class D		224	    to    239
* Class E		240	    to    254

## Nth term in sequence
### Day 11: 10/25/18
Source: [GeeksForGeeks](https://practice.geeksforgeeks.org/problems/find-n-th-term-of-series-1-3-6-10-15-21/0)
* Given a number N, find the Nth term in the series 1, 3, 6, 10, 15, 21...
* The first line of input contains a positive integer T denoting the number of testcases. For each test case, there will be a single line containing an integer N.

## Print alternate elements of an array
### Day 12: 10/26/18
Source: [GeeksForGeeks](https://practice.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1)
* You are given an array A of size N. You need to print elements of A in alternate order.
* The first line of input contains T denoting the number of testcases. T testcases follow. Each test case contains two lines of input. The first line contains N and the second line contains the elements of the array.    

## Subarray with given sum
### Day 13: 10/27/18
Source: [GeeksForGeeks](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0#ExpectOP)
* Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number.
* For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

## Star Pattern - 1
### Day 14: 10/28/18
* Print the following star pattern:
```C
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

## Star Pattern - 2
### Day 15: 10/29/18
* Print the following star pattern:
```C
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

## Character - Frequency Table
### Day 16: 10/30/18
* Take a string input from the user
* Make all letters in the string to be in lowercase
* Process character by character
* If the character is an alphabet then increment count of it
* Print count of all alphabets

## Tic Tac Toe
### Day 17: 10/31/18
Source: [C Programming Notes](http://www.cprogrammingnotes.com/question/tic-tac-toe-game.html)
* Windows: Replace `curses.h` with `conio.h`
* Mac & Linux: Use `gcc 17_tic_tac_toe.c -lpcurses` to compile and `./a.out` to execute

## Swap values using call by reference
### Day 18: 11/1/18
* The call by reference method of passing arguments to a function copies the address of an argument into the formal parameter. 
* Inside the function, the address is used to access the actual argument used in the call.
* It means the changes made to the parameter affect the passed argument.

## Pass a Single Dimensional Array as Argument
### Day 19: 11/2/18
* Passed by reference or address by default
* Changes made in function gets reflected in main()
* Three ways to pass arrays in C all are same
* Way 1 - 
```C
void myFunction(int *a) 
{ . . . }
```
* Way 2 -
```C
void myFunction(int a[10]) 
{ . . . }
```
* Way 3 -
```C
void myFunction(int a[]ls ) 
{ . . . }
```

## Pass a 2D array as a Single Dimensional Array
### Day 20: 11/3/18

## Factorial (using recursion)
### Day 21: 11/4/18
* In mathematics, the factorial of a positive integer n, denoted by `n!`, is the product of all positive integers less than or equal to n. 
* For example, The value of 0! is 1, according to the convention for an empty product.

## Fibonacci (using recursion)
### Day 22: 11/5/18
* The Fibonacci Sequence is the series of numbers:
    `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...`
* The next number is found by adding up the two numbers before it.
* Example: the next number in the sequence above is 21+34 = 55

## Note
* All programs were compiled using the `gcc-8`, `g++` and `gcc` compiler on MacOS.