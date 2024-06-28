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
#define VAR21 ''
namespace VAR22
{
VAR23::FUN2(char * VAR24)
{
 VAR25 = VAR24;
 {
#ifdef VAR3
 WSADATA VAR26;
 int VAR27 = 0;
#endif
 int VAR28;
 struct sockaddr_in VAR29;
 char *VAR30;
 SOCKET VAR31 = VAR18;
 size_t VAR32 = strlen(VAR25);
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR26) != VAR33)
 {
 break;
 }
 VAR27 = 1;
#endif
 VAR31 = socket(VAR34, VAR35, VAR36);
 if (VAR31 == VAR18)
 {
 break;
 }
 memset(&VAR29, 0, sizeof(VAR29));
 VAR29.VAR37 = VAR34;
 VAR29.VAR38.VAR39 = FUN5(VAR20);
 VAR29.VAR40 = FUN6(VAR41);
 if (connect(VAR31, (struct VAR42*)&VAR29, sizeof(VAR29)) == VAR19)
 {
 break;
 }
 VAR28 = recv(VAR31, (char *)(VAR25 + VAR32), sizeof(char) * (100 - VAR32 - 1), 0);
 if (VAR28 == VAR19 || VAR28 == 0)
 {
 break;
 }
 VAR25[VAR32 + VAR28 / sizeof(char)] = '';
 VAR30 = strchr(VAR25, '');
 if (VAR30)
 {
 *VAR30 = '';
 }
 VAR30 = strchr(VAR25, '');
 if (VAR30)
 {
 *VAR30 = '';
 }
 }
 while (0);
 if (VAR31 != VAR18)
 {
 FUN7(VAR31);
 }
#ifdef VAR3
 if (VAR27)
 {
 FUN8();
 }
#endif
 }
}
VAR23::~FUN2()
{
 {
 size_t VAR43;
 for (VAR43=0; VAR43 < strlen(VAR25); VAR43++)
 {
 if (VAR25[VAR43] == VAR21)
 {
 FUN9("");
 break;
 }
 }
 free(VAR25);
 }
}
}
#endif
