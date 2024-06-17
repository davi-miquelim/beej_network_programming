#include <stdint.h>
#include <stddef.h>

struct sockaddr_storage {
   unsigned short       ss_family;
};

struct in6_addr {
    unsigned char       s6_addr[16];
};

struct sockaddr_in6 {
    unsigned short int  sin6_family;
    unsigned short int  sin6_port;
    unsigned int        sin6_flowinfo;
    struct in6_addr     sin6_addr;
    unsigned int        sin6_scope_id;
};

struct in_addr {
    unsigned int        s_addr;
};

struct sockaddr_in {
    short int           sin_family;
    unsigned short int  sin_port;
    struct in_addr      sin_addr; 
    unsigned char       sin_zero[8];
};

struct sockaddr {
    unsigned short      sa_family;
    char                sa_data[14];
};

struct addrinfo {
    int                 ai_flags; 
    int                 ai_family; 
    int                 ai_socktype; 
    int                 ai_protocol; 
    size_t              ai_addrlen; 
    struct sockaddr    *ai_addr;
    char               *ai_cannonname;

    struct addrinfo    *ai_next;
};
