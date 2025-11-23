#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 1. we can pass structure as parameter bu both pass by value and pass by address

// pass by value

//Declaring structure

struct ipaddress
{

   char ip[20];
    int port;
};

// Function to chhange as TcP port
// call by value
// In call by value Exactt copy of function is createdd in stack

 void tcp_port(struct ipaddress value)
 {
    printf("TCP_Port= %s:%d",value.ip,value.port);
 }
void tcp_port_change(struct ipaddress *p )
{
 
  strcpy(p->ip, "192.168.18.1");
  p->port = 7878;

}
int main(void)
{

    struct ipaddress tcp1={"192.168.65.128",3002};
    struct ipaddress tcp2={"192.168.64.182",8008};
    tcp_port(tcp1);
    tcp_port_change(&tcp2);
    tcp_port(tcp2);
    return 0;
}


// Pass by Address
// In pass by addrss directly value is changes



