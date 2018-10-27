#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <time.h>


int main()
{
    //initalizing variables
    #define PORT 5600
    struct sockaddr_in sa, cli;
    int n, sockfd;
    char buff[100];

    // initalizing sockets
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
    {
        printf("\nError in Socket");
        return 0;
    }
    else
        printf("\nSocket is Opened");
    
    bzero(&sa, sizeof(sa));
    sa.sin_port = htons(PORT);
    sa.sin_family = AF_INET;

    // Connect
    if (connect(sockfd, (struct sockaddr *)&sa, sizeof(sa)) < 0)
    {
        printf("\nError in connection failed");
        return 0;
    }
    else
        printf("\nConnected successfully");

    // Read connection
    if (n = read(sockfd, buff, sizeof(buff)) < 0)
    {
        printf("\nError in Reading");
        return 0;
    }
    else
        printf("\nMessage Read %s", buff);
    return 0;
}