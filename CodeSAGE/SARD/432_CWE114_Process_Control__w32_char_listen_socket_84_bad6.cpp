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
namespace VAR20
{
VAR21::FUN2(char * VAR22)
{
 VAR23 = VAR22;
 {
#ifdef VAR3
 WSADATA VAR24;
 int VAR25 = 0;
#endif
 int VAR26;
 struct sockaddr_in VAR27;
 char *VAR28;
 SOCKET VAR29 = VAR18;
 SOCKET VAR30 = VAR18;
 size_t VAR31 = strlen(VAR23);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR24) != VAR32)
 {
 break;
 }
 VAR25 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR29 = socket(VAR33, VAR34, VAR35);
 if (VAR29 == VAR18)
 {
 break;
 }
 memset(&VAR27, 0, sizeof(VAR27));
 VAR27.VAR36 = VAR33;
 VAR27.VAR37.VAR38 = VAR39;
 VAR27.VAR40 = FUN5(VAR41);
 if (FUN6(VAR29, (struct VAR42*)&VAR27, sizeof(VAR27)) == VAR19)
 {
 break;
 }
 if (FUN7(VAR29, VAR43) == VAR19)
 {
 break;
 }
 VAR30 = FUN8(VAR29, NULL, NULL);
 if (VAR30 == VAR19)
 {
 break;
 }
 VAR26 = recv(VAR30, (char *)(VAR23 + VAR31), sizeof(char) * (100 - VAR31 - 1), 0);
 if (VAR26 == VAR19 || VAR26 == 0)
 {
 break;
 }
 VAR23[VAR31 + VAR26 / sizeof(char)] = '';
 VAR28 = strchr(VAR23, '');
 if (VAR28)
 {
 *VAR28 = '';
 }
 VAR28 = strchr(VAR23, '');
 if (VAR28)
 {
 *VAR28 = '';
 }
 }
 while (0);
 if (VAR29 != VAR18)
 {
 FUN9(VAR29);
 }
 if (VAR30 != VAR18)
 {
 FUN9(VAR30);
 }
#ifdef VAR3
 if (VAR25)
 {
 FUN10();
 }
#endif
 }
}
VAR21::~FUN2()
{
 {
 HMODULE VAR44;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR44 = LoadLibraryA(VAR23);
 if (VAR44 != NULL)
 {
 FUN11(VAR44);
 FUN12("");
 }
 else
 {
 FUN12("");
 }
 }
}
}
#endif
