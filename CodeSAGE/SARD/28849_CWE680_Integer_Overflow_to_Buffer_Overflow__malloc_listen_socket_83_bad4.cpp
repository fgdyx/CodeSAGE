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
 /* POTENTIAL FLAW: Read data using a listen socket */
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
 size_t VAR44;
 int *VAR45;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR45 = (int*)malloc(VAR20 * sizeof(int));
 for (VAR44 = 0; VAR44 < (VAR46)VAR20; VAR44++)
 {
 VAR45[VAR44] = 0;
 }
 FUN13(VAR45[0]);
 free(VAR45);
 }
}
}
#endif
