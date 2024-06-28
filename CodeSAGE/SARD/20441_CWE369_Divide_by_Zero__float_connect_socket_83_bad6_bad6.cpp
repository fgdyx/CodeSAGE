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
#define CHAR_ARRAY_SIZE 20
#define VAR20 ""
namespace VAR21
{
VAR22::FUN2(float VAR23)
{
 VAR24 = VAR23;
 {
#ifdef VAR3
 WSADATA VAR25;
 int VAR26 = 0;
#endif
 int VAR27;
 struct sockaddr_in VAR28;
 SOCKET VAR29 = VAR18;
 char VAR30[VAR31];
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR25) != VAR32)
 {
 break;
 }
 VAR26 = 1;
#endif
 VAR29 = socket(VAR33, VAR34, VAR35);
 if (VAR29 == VAR18)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR36 = VAR33;
 VAR28.VAR37.VAR38 = FUN5(VAR20);
 VAR28.VAR39 = FUN6(VAR40);
 if (connect(VAR29, (struct VAR41*)&VAR28, sizeof(VAR28)) == VAR19)
 {
 break;
 }
 /* POTENTIAL FLAW: Use a value input from the network */
 VAR27 = recv(VAR29, VAR30, VAR31 - 1, 0);
 if (VAR27 == VAR19 || VAR27 == 0)
 {
 break;
 }
 VAR30[VAR27] = '';
 VAR24 = (float)FUN7(VAR30);
 }
 while (0);
 if (VAR29 != VAR18)
 {
 FUN8(VAR29);
 }
#ifdef VAR3
 if (VAR26)
 {
 FUN9();
 }
#endif
 }
}
VAR22::~FUN2()
{
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR42 = (int)(100.0 / VAR24);
 FUN10(VAR42);
 }
}
}
#endif
