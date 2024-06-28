#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#VAR2 <VAR4.VAR5>
#VAR2 <VAR6.VAR5>
#VAR2 <VAR7.VAR5>
#VAR8 FUN1(VAR9, "")
#define CLOSE_SOCKET VAR10
#else
#VAR2 <VAR11/VAR12.VAR5>
#VAR2 <VAR11/socket.VAR5>
#VAR2 <VAR13/VAR14.VAR5>
#VAR2 <VAR15/VAR16.VAR5>
#VAR2 <VAR17.VAR5>
#define VAR18 -1
#define VAR19 -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif
#define TCP_PORT 27015
#define VAR20 ""
#ifdef VAR3
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR21
{
VAR22::FUN2(char * VAR23)
{
 VAR24 = VAR23;
 strcpy(VAR24, "");
}
VAR22::~FUN2()
{
 {
 char VAR25[100] = "";
 FUN3(VAR25, 100-1, VAR24);
 FUN4(VAR25);
 }
}
}
#endif
