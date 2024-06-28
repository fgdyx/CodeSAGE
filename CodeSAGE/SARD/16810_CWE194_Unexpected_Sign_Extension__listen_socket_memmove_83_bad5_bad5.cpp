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
#define CHAR_ARRAY_SIZE 8
namespace VAR20
{
VAR21::FUN2(short VAR22)
{
 VAR23 = VAR22;
 {
#ifdef VAR3
 WSADATA VAR24;
 int VAR25 = 0;
#endif
 int VAR26;
 int VAR27;
 struct sockaddr_in VAR28;
 SOCKET VAR29 = VAR18;
 SOCKET VAR30 = VAR18;
 char VAR31[VAR32];
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR24) != VAR33)
 {
 break;
 }
 VAR25 = 1;
#endif
 VAR29 = socket(VAR34, VAR35, VAR36);
 if (VAR29 == VAR18)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR37 = VAR34;
 VAR28.VAR38.VAR39 = VAR40;
 VAR28.VAR41 = FUN5(VAR42);
 if (FUN6(VAR29, (struct VAR43*)&VAR28, sizeof(VAR28)) == VAR19)
 {
 break;
 }
 if (FUN7(VAR29, VAR44) == VAR19)
 {
 break;
 }
 VAR30 = FUN8(VAR29, NULL, NULL);
 if (VAR30 == VAR19)
 {
 break;
 }
 VAR26 = recv(VAR30, VAR31, VAR32 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR26 == VAR19 || VAR26 == 0)
 {
 break;
 }
 VAR31[VAR26] = '';
 VAR27 = FUN9(VAR31);
 if (VAR27 > VAR45 || VAR27 < VAR46)
 {
 VAR23 = -1;
 }
 else
 {
 VAR23 = VAR27;
 }
 }
 while (0);
 if (VAR29 != VAR18)
 {
 FUN10(VAR29);
 }
 if (VAR30 != VAR18)
 {
 FUN10(VAR30);
 }
#ifdef VAR3
 if (VAR25)
 {
 FUN11();
 }
#endif
 }
}
VAR21::~FUN2()
{
 {
 char VAR47[100];
 char VAR48[100] = "";
 memset(VAR47, '', 100-1);
 VAR47[100-1] = '';
 if (VAR23 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR48, VAR47, VAR23);
 VAR48[VAR23] = '';
 }
 FUN12(VAR48);
 }
}
}
#endif
