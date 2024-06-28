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
#VAR2 <VAR20>
using namespace VAR21;
namespace VAR22
{
VAR23::FUN2(wchar_t * VAR24)
{
 VAR25 = VAR24;
 {
#ifdef VAR3
 WSADATA VAR26;
 int VAR27 = 0;
#endif
 int VAR28;
 struct sockaddr_in VAR29;
 wchar_t *VAR30;
 SOCKET VAR31 = VAR18;
 SOCKET VAR32 = VAR18;
 size_t VAR33 = wcslen(VAR25);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR26) != VAR34)
 {
 break;
 }
 VAR27 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR31 = socket(VAR35, VAR36, VAR37);
 if (VAR31 == VAR18)
 {
 break;
 }
 memset(&VAR29, 0, sizeof(VAR29));
 VAR29.VAR38 = VAR35;
 VAR29.VAR39.VAR40 = VAR41;
 VAR29.VAR42 = FUN5(VAR43);
 if (FUN6(VAR31, (struct VAR44*)&VAR29, sizeof(VAR29)) == VAR19)
 {
 break;
 }
 if (FUN7(VAR31, VAR45) == VAR19)
 {
 break;
 }
 VAR32 = FUN8(VAR31, NULL, NULL);
 if (VAR32 == VAR19)
 {
 break;
 }
 VAR28 = recv(VAR32, (char *)(VAR25 + VAR33), sizeof(wchar_t) * (VAR46 - VAR33 - 1), 0);
 if (VAR28 == VAR19 || VAR28 == 0)
 {
 break;
 }
 VAR25[VAR33 + VAR28 / sizeof(wchar_t)] = VAR47'';
 VAR30 = FUN9(VAR25, VAR47'');
 if (VAR30)
 {
 *VAR30 = VAR47'';
 }
 VAR30 = FUN9(VAR25, VAR47'');
 if (VAR30)
 {
 *VAR30 = VAR47'';
 }
 }
 while (0);
 if (VAR31 != VAR18)
 {
 FUN10(VAR31);
 }
 if (VAR32 != VAR18)
 {
 FUN10(VAR32);
 }
#ifdef VAR3
 if (VAR27)
 {
 FUN11();
 }
#endif
 }
}
VAR23::~FUN2()
{
 {
 ofstream VAR48;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR48.open((char *)VAR25);
 VAR48.close();
 }
}
}
#endif
