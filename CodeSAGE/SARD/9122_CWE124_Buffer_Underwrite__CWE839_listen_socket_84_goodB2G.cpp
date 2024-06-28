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
namespace VAR21
{
VAR22::FUN3(int VAR23)
{
 VAR20 = VAR23;
 {
#ifdef VAR3
 WSADATA VAR24;
 int VAR25 = 0;
#endif
 int VAR26;
 struct sockaddr_in VAR27;
 SOCKET VAR28 = VAR18;
 SOCKET VAR29 = VAR18;
 char VAR30[VAR31];
 do
 {
#ifdef VAR3
 if (FUN4(FUN5(2,2), &VAR24) != VAR32)
 {
 break;
 }
 VAR25 = 1;
#endif
 VAR28 = socket(VAR33, VAR34, VAR35);
 if (VAR28 == VAR18)
 {
 break;
 }
 memset(&VAR27, 0, sizeof(VAR27));
 VAR27.VAR36 = VAR33;
 VAR27.VAR37.VAR38 = VAR39;
 VAR27.VAR40 = FUN6(VAR41);
 if (FUN7(VAR28, (struct VAR42*)&VAR27, sizeof(VAR27)) == VAR19)
 {
 break;
 }
 if (FUN8(VAR28, VAR43) == VAR19)
 {
 break;
 }
 VAR29 = FUN9(VAR28, NULL, NULL);
 if (VAR29 == VAR19)
 {
 break;
 }
 VAR26 = recv(VAR29, VAR30, VAR31 - 1, 0);
 if (VAR26 == VAR19 || VAR26 == 0)
 {
 break;
 }
 VAR30[VAR26] = '';
 VAR20 = FUN10(VAR30);
 }
 while (0);
 if (VAR28 != VAR18)
 {
 FUN11(VAR28);
 }
 if (VAR29 != VAR18)
 {
 FUN11(VAR29);
 }
#ifdef VAR3
 if (VAR25)
 {
 FUN12();
 }
#endif
 }
}
VAR22::~FUN3()
{
 {
 int VAR44;
 int VAR45[10] = { 0 };
 if (VAR20 >= 0 && VAR20 < (10))
 {
 VAR45[VAR20] = 1;
 for(VAR44 = 0; VAR44 < 10; VAR44++)
 {
 FUN13(VAR45[VAR44]);
 }
 }
 else
 {
 FUN14("");
 }
 }
}
}
#endif
