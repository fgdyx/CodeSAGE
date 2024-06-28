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
 {
#ifdef VAR3
 WSADATA VAR26;
 int VAR27 = 0;
#endif
 int VAR28;
 struct sockaddr_in VAR29;
 SOCKET VAR30 = VAR18;
 SOCKET VAR31 = VAR18;
 char VAR32[VAR33];
 do
 {
#ifdef VAR3
 if (FUN4(FUN5(2,2), &VAR26) != VAR34)
 {
 break;
 }
 VAR27 = 1;
#endif
 VAR30 = socket(VAR35, VAR36, VAR37);
 if (VAR30 == VAR18)
 {
 break;
 }
 memset(&VAR29, 0, sizeof(VAR29));
 VAR29.VAR38 = VAR35;
 VAR29.VAR39.VAR40 = VAR41;
 VAR29.VAR42 = FUN6(VAR43);
 if (FUN7(VAR30, (struct VAR44*)&VAR29, sizeof(VAR29)) == VAR19)
 {
 break;
 }
 if (FUN8(VAR30, VAR45) == VAR19)
 {
 break;
 }
 VAR31 = FUN9(VAR30, NULL, NULL);
 if (VAR31 == VAR19)
 {
 break;
 }
 VAR28 = recv(VAR31, VAR32, VAR33 - 1, 0);
 if (VAR28 == VAR19 || VAR28 == 0)
 {
 break;
 }
 VAR32[VAR28] = '';
 VAR20 = FUN10(VAR32);
 }
 while (0);
 if (VAR30 != VAR18)
 {
 FUN11(VAR30);
 }
 if (VAR31 != VAR18)
 {
 FUN11(VAR31);
 }
#ifdef VAR3
 if (VAR27)
 {
 FUN12();
 }
#endif
 }
}
VAR24::~FUN3()
{
 if (VAR20 > 0 && VAR20 <= 2000)
 {
 FUN13(VAR20);
 FUN14("");
 }
 else
 {
 FUN14("");
 }
}
}
#endif
