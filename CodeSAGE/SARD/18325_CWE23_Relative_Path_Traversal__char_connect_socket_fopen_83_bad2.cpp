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
#define FOPEN fopen
#else
#define FOPEN fopen
#endif
namespace VAR21
{
VAR22::FUN2(char * VAR23)
{
 VAR24 = VAR23;
 {
#ifdef VAR3
 WSADATA VAR25;
 int VAR26 = 0;
#endif
 int VAR27;
 struct sockaddr_in VAR28;
 char *VAR29;
 SOCKET VAR30 = VAR18;
 size_t VAR31 = strlen(VAR24);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR25) != VAR32)
 {
 break;
 }
 VAR26 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR30 = socket(VAR33, VAR34, VAR35);
 if (VAR30 == VAR18)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR36 = VAR33;
 VAR28.VAR37.VAR38 = FUN5(VAR20);
 VAR28.VAR39 = FUN6(VAR40);
 if (connect(VAR30, (struct VAR41*)&VAR28, sizeof(VAR28)) == VAR19)
 {
 break;
 }
 VAR27 = recv(VAR30, (char *)(VAR24 + VAR31), sizeof(char) * (VAR42 - VAR31 - 1), 0);
 if (VAR27 == VAR19 || VAR27 == 0)
 {
 break;
 }
 VAR24[VAR31 + VAR27 / sizeof(char)] = '';
 VAR29 = strchr(VAR24, '');
 if (VAR29)
 {
 *VAR29 = '';
 }
 VAR29 = strchr(VAR24, '');
 if (VAR29)
 {
 *VAR29 = '';
 }
 }
 while (0);
 if (VAR30 != VAR18)
 {
 FUN7(VAR30);
 }
#ifdef VAR3
 if (VAR26)
 {
 FUN8();
 }
#endif
 }
}
VAR22::~FUN2()
{
 {
 VAR43 *VAR44 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR44 = FUN9(VAR24, "");
 if (VAR44 != NULL)
 {
 fclose(VAR44);
 }
 }
}
}
#endif
