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
#define FUN2 (3 * sizeof(VAR21) + 2)
#VAR2 <VAR22.VAR5>
namespace VAR23
{
VAR24::FUN3(int VAR25)
{
 VAR21 = VAR25;
 {
#ifdef VAR3
 WSADATA VAR26;
 int VAR27 = 0;
#endif
 int VAR28;
 struct sockaddr_in VAR29;
 SOCKET VAR30 = VAR18;
 char VAR31[VAR32];
 do
 {
#ifdef VAR3
 if (FUN4(FUN5(2,2), &VAR26) != VAR33)
 {
 break;
 }
 VAR27 = 1;
#endif
 VAR30 = socket(VAR34, VAR35, VAR36);
 if (VAR30 == VAR18)
 {
 break;
 }
 memset(&VAR29, 0, sizeof(VAR29));
 VAR29.VAR37 = VAR34;
 VAR29.VAR38.VAR39 = FUN6(VAR20);
 VAR29.VAR40 = FUN7(VAR41);
 if (connect(VAR30, (struct VAR42*)&VAR29, sizeof(VAR29)) == VAR19)
 {
 break;
 }
 VAR28 = recv(VAR30, VAR31, VAR32 - 1, 0);
 if (VAR28 == VAR19 || VAR28 == 0)
 {
 break;
 }
 VAR31[VAR28] = '';
 VAR21 = FUN8(VAR31);
 }
 while (0);
 if (VAR30 != VAR18)
 {
 FUN9(VAR30);
 }
#ifdef VAR3
 if (VAR27)
 {
 FUN10();
 }
#endif
 }
}
VAR24::~FUN3()
{
 if (FUN11((long)VAR21) <= (long)FUN12((double)VAR43))
 {
 int VAR44 = VAR21 * VAR21;
 FUN13(VAR44);
 }
 else
 {
 FUN14("");
 }
}
}
#endif
