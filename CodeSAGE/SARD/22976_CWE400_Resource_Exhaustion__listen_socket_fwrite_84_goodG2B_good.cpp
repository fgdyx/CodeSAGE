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
 VAR20 = 20;
}
VAR23::~FUN3()
{
 {
 size_t VAR25 = 0;
 VAR26 *VAR27 = NULL;
 const char *VAR28 = "";
 VAR27 = fopen(VAR28, "");
 if (VAR27 == NULL)
 {
 FUN4(1);
 }
 for (VAR25 = 0; VAR25 < (VAR29)VAR20; VAR25++)
 {
 if (strlen(VAR21) != fwrite(VAR21, sizeof(char), strlen(VAR21), VAR27))
 {
 FUN4(1);
 }
 }
 if (VAR27)
 {
 fclose(VAR27);
 }
 }
}
}
#endif
