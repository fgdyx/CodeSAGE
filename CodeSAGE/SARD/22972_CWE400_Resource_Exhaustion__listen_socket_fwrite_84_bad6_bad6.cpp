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
#define FUN2 (3 * sizeof(VAR20) + 2)
#define VAR21 ""
namespace VAR22
{
VAR23::FUN3(int VAR24)
{
 VAR20 = VAR24;
 {
#ifdef VAR3
 WSADATA VAR25;
 int VAR26 = 0;
#endif
 int VAR27;
 struct sockaddr_in VAR28;
 SOCKET VAR29 = VAR18;
 SOCKET VAR30 = VAR18;
 char VAR31[VAR32];
 do
 {
#ifdef VAR3
 if (FUN4(FUN5(2,2), &VAR25) != VAR33)
 {
 break;
 }
 VAR26 = 1;
#endif
 /* POTENTIAL FLAW: Read count using a listen socket */
 VAR29 = socket(VAR34, VAR35, VAR36);
 if (VAR29 == VAR18)
 {
 break;
 }
 memset(&VAR28, 0, sizeof(VAR28));
 VAR28.VAR37 = VAR34;
 VAR28.VAR38.VAR39 = VAR40;
 VAR28.VAR41 = FUN6(VAR42);
 if (FUN7(VAR29, (struct VAR43*)&VAR28, sizeof(VAR28)) == VAR19)
 {
 break;
 }
 if (FUN8(VAR29, VAR44) == VAR19)
 {
 break;
 }
 VAR30 = FUN9(VAR29, NULL, NULL);
 if (VAR30 == VAR19)
 {
 break;
 }
 VAR27 = recv(VAR30, VAR31, VAR32 - 1, 0);
 if (VAR27 == VAR19 || VAR27 == 0)
 {
 break;
 }
 VAR31[VAR27] = '';
 VAR20 = FUN10(VAR31);
 }
 while (0);
 if (VAR29 != VAR18)
 {
 FUN11(VAR29);
 }
 if (VAR30 != VAR18)
 {
 FUN11(VAR30);
 }
#ifdef VAR3
 if (VAR26)
 {
 FUN12();
 }
#endif
 }
}
VAR23::~FUN3()
{
 {
 size_t VAR45 = 0;
 VAR46 *VAR47 = NULL;
 const char *VAR48 = "";
 VAR47 = fopen(VAR48, "");
 if (VAR47 == NULL)
 {
 FUN13(1);
 }
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
 for (VAR45 = 0; VAR45 < (VAR49)VAR20; VAR45++)
 {
 if (strlen(VAR21) != fwrite(VAR21, sizeof(char), strlen(VAR21), VAR47))
 {
 FUN13(1);
 }
 }
 if (VAR47)
 {
 fclose(VAR47);
 }
 }
}
}
#endif
