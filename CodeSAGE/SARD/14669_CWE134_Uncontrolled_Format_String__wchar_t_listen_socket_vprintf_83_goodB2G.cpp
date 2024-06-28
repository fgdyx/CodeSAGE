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
#define LISTEN_BACKLOG 5
namespace VAR21
{
VAR22::FUN2(wchar_t * VAR23)
{
 VAR24 = VAR23;
 {
#ifdef VAR5
 WSADATA VAR25;
 int VAR26 = 0;
#endif
 int VAR27;
 struct sockaddr_in VAR28;
 wchar_t *VAR29;
 SOCKET VAR30 = VAR19;
 SOCKET VAR31 = VAR19;
 size_t VAR32 = wcslen(VAR24);
 do
 {
#ifdef VAR5
 if (FUN3(FUN4(2,2), &VAR25) != VAR33)
 {
 break;
 }
 VAR26 = 1;
#endif
 VAR30 = socket(VAR34, VAR35, VAR36);
 if (VAR30 == VAR19)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR37 = VAR34;
 VAR28.VAR38.VAR39 = VAR40;
 VAR28.VAR41 = FUN5(VAR42);
 if (FUN6(VAR30, (struct VAR43*)&VAR28, sizeof(VAR28)) == VAR20)
 {
 break;
 }
 if (FUN7(VAR30, VAR44) == VAR20)
 {
 break;
 }
 VAR31 = FUN8(VAR30, NULL, NULL);
 if (VAR31 == VAR20)
 {
 break;
 }
 VAR27 = recv(VAR31, (char *)(VAR24 + VAR32), sizeof(wchar_t) * (100 - VAR32 - 1), 0);
 if (VAR27 == VAR20 || VAR27 == 0)
 {
 break;
 }
 VAR24[VAR32 + VAR27 / sizeof(wchar_t)] = VAR45'';
 VAR29 = FUN9(VAR24, VAR45'');
 if (VAR29)
 {
 *VAR29 = VAR45'';
 }
 VAR29 = FUN9(VAR24, VAR45'');
 if (VAR29)
 {
 *VAR29 = VAR45'';
 }
 }
 while (0);
 if (VAR30 != VAR19)
 {
 FUN10(VAR30);
 }
 if (VAR31 != VAR19)
 {
 FUN10(VAR31);
 }
#ifdef VAR5
 if (VAR26)
 {
 FUN11();
 }
#endif
 }
}
static void FUN12(wchar_t * VAR24, ...)
{
 {
 va_list VAR46;
 FUN13(VAR46, VAR24);
 FUN14(VAR45"", VAR46);
 FUN15(VAR46);
 }
}
VAR22::~FUN2()
{
 FUN12(VAR24, VAR24);
}
}
#endif
