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
#define LISTEN_BACKLOG 5
#define FUN2 (3 * sizeof(VAR20) + 2)
#ifdef VAR3
#define SLEEP VAR21
#else
#define SLEEP VAR22
#endif
namespace VAR23
{
VAR24::FUN3(int VAR25)
{
 VAR20 = VAR25;
 VAR20 = 20;
}
VAR24::~FUN3()
{
 FUN4(VAR20);
 FUN5("");
}
}
#endif
