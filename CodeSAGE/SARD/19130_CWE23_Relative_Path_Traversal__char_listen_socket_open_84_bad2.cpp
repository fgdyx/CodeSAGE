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
#ifdef VAR3
#define OPEN _open
#define CLOSE VAR20
#else
#define OPEN open
#define CLOSE close
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
 SOCKET VAR31 = VAR18;
 size_t VAR32 = strlen(VAR24);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR25) != VAR33)
 {
 break;
 }
 VAR26 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR30 = socket(VAR34, VAR35, VAR36);
 if (VAR30 == VAR18)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR37 = VAR34;
 VAR28.VAR38.VAR39 = VAR40;
 VAR28.VAR41 = FUN5(VAR42);
 if (FUN6(VAR30, (struct VAR43*)&VAR28, sizeof(VAR28)) == VAR19)
 {
 break;
 }
 if (FUN7(VAR30, VAR44) == VAR19)
 {
 break;
 }
 VAR31 = FUN8(VAR30, NULL, NULL);
 if (VAR31 == VAR19)
 {
 break;
 }
 VAR27 = recv(VAR31, (char *)(VAR24 + VAR32), sizeof(char) * (VAR45 - VAR32 - 1), 0);
 if (VAR27 == VAR19 || VAR27 == 0)
 {
 break;
 }
 VAR24[VAR32 + VAR27 / sizeof(char)] = '';
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
 FUN9(VAR30);
 }
 if (VAR31 != VAR18)
 {
 FUN9(VAR31);
 }
#ifdef VAR3
 if (VAR26)
 {
 FUN10();
 }
#endif
 }
}
VAR22::~FUN2()
{
 {
 int VAR46;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR46 = FUN11(VAR24, VAR47|VAR48, VAR49|VAR50);
 if (VAR46 != -1)
 {
 FUN12(VAR46);
 }
 }
}
}
#endif
