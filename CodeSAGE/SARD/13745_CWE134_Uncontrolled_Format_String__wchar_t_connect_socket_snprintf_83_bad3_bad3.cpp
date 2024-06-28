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
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR21
{
VAR22::FUN2(wchar_t * VAR23)
{
 VAR24 = VAR23;
 {
#ifdef VAR3
 WSADATA VAR25;
 int VAR26 = 0;
#endif
 int VAR27;
 struct sockaddr_in VAR28;
 wchar_t *VAR29;
 SOCKET VAR30 = VAR18;
 size_t VAR31 = wcslen(VAR24);
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
 VAR27 = recv(VAR30, (char *)(VAR24 + VAR31), sizeof(wchar_t) * (100 - VAR31 - 1), 0);
 if (VAR27 == VAR19 || VAR27 == 0)
 {
 break;
 }
 VAR24[VAR31 + VAR27 / sizeof(wchar_t)] = VAR42'';
 VAR29 = FUN7(VAR24, VAR42'');
 if (VAR29)
 {
 *VAR29 = VAR42'';
 }
 VAR29 = FUN7(VAR24, VAR42'');
 if (VAR29)
 {
 *VAR29 = VAR42'';
 }
 }
 while (0);
 if (VAR30 != VAR18)
 {
 FUN8(VAR30);
 }
#ifdef VAR3
 if (VAR26)
 {
 FUN9();
 }
#endif
 }
}
VAR22::~FUN2()
{
 {
 wchar_t VAR43[100] = VAR42"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN10(VAR43, 100-1, VAR24);
 FUN11(VAR43);
 }
}
}
#endif
