#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
#ifdef VAR5
#VAR2 <VAR6.VAR4>
#VAR2 <VAR7.VAR4>
#VAR2 <VAR8.VAR4>
#VAR9 FUN1(VAR10, "")
#define CLOSE_SOCKET VAR11
#else
#VAR2 <VAR12/VAR13.VAR4>
#VAR2 <VAR12/socket.VAR4>
#VAR2 <VAR14/VAR15.VAR4>
#VAR2 <VAR16/VAR17.VAR4>
#VAR2 <VAR18.VAR4>
#define VAR19 -1
#define VAR20 -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif
#define TCP_PORT 27015
#define VAR21 ""
namespace VAR22
{
VAR23::FUN2(wchar_t * VAR24)
{
 VAR25 = VAR24;
 {
#ifdef VAR5
 WSADATA VAR26;
 int VAR27 = 0;
#endif
 int VAR28;
 struct sockaddr_in VAR29;
 wchar_t *VAR30;
 SOCKET VAR31 = VAR19;
 size_t VAR32 = wcslen(VAR25);
 do
 {
#ifdef VAR5
 if (FUN3(FUN4(2,2), &VAR26) != VAR33)
 {
 break;
 }
 VAR27 = 1;
#endif
 VAR31 = socket(VAR34, VAR35, VAR36);
 if (VAR31 == VAR19)
 {
 break;
 }
 memset(&VAR29, 0, sizeof(VAR29));
 VAR29.VAR37 = VAR34;
 VAR29.VAR38.VAR39 = FUN5(VAR21);
 VAR29.VAR40 = FUN6(VAR41);
 if (connect(VAR31, (struct VAR42*)&VAR29, sizeof(VAR29)) == VAR20)
 {
 break;
 }
 VAR28 = recv(VAR31, (char *)(VAR25 + VAR32), sizeof(wchar_t) * (100 - VAR32 - 1), 0);
 if (VAR28 == VAR20 || VAR28 == 0)
 {
 break;
 }
 VAR25[VAR32 + VAR28 / sizeof(wchar_t)] = VAR43'';
 VAR30 = FUN7(VAR25, VAR43'');
 if (VAR30)
 {
 *VAR30 = VAR43'';
 }
 VAR30 = FUN7(VAR25, VAR43'');
 if (VAR30)
 {
 *VAR30 = VAR43'';
 }
 }
 while (0);
 if (VAR31 != VAR19)
 {
 FUN8(VAR31);
 }
#ifdef VAR5
 if (VAR27)
 {
 FUN9();
 }
#endif
 }
}
static void FUN10(wchar_t * VAR25, ...)
{
 {
 va_list VAR44;
 FUN11(VAR44, VAR25);
 FUN12(VAR43"", VAR44);
 FUN13(VAR44);
 }
}
VAR23::~FUN2()
{
 FUN10(VAR25, VAR25);
}
}
#endif
