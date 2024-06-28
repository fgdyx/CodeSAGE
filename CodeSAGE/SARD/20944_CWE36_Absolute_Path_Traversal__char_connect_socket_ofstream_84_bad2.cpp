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
#VAR2 <VAR21>
using namespace VAR22;
namespace VAR23
{
VAR24::FUN2(char * VAR25)
{
 VAR26 = VAR25;
 {
#ifdef VAR3
 WSADATA VAR27;
 int VAR28 = 0;
#endif
 int VAR29;
 struct sockaddr_in VAR30;
 char *VAR31;
 SOCKET VAR32 = VAR18;
 size_t VAR33 = strlen(VAR26);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR27) != VAR34)
 {
 break;
 }
 VAR28 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR32 = socket(VAR35, VAR36, VAR37);
 if (VAR32 == VAR18)
 {
 break;
 }
 memset(&VAR30, 0, sizeof(VAR30));
 VAR30.VAR38 = VAR35;
 VAR30.VAR39.VAR40 = FUN5(VAR20);
 VAR30.VAR41 = FUN6(VAR42);
 if (connect(VAR32, (struct VAR43*)&VAR30, sizeof(VAR30)) == VAR19)
 {
 break;
 }
 VAR29 = recv(VAR32, (char *)(VAR26 + VAR33), sizeof(char) * (VAR44 - VAR33 - 1), 0);
 if (VAR29 == VAR19 || VAR29 == 0)
 {
 break;
 }
 VAR26[VAR33 + VAR29 / sizeof(char)] = '';
 VAR31 = strchr(VAR26, '');
 if (VAR31)
 {
 *VAR31 = '';
 }
 VAR31 = strchr(VAR26, '');
 if (VAR31)
 {
 *VAR31 = '';
 }
 }
 while (0);
 if (VAR32 != VAR18)
 {
 FUN7(VAR32);
 }
#ifdef VAR3
 if (VAR28)
 {
 FUN8();
 }
#endif
 }
}
VAR24::~FUN2()
{
 {
 ofstream VAR45;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR45.open((char *)VAR26);
 VAR45.close();
 }
}
}
#endif
