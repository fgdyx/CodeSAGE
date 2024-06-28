#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_34_unionType VAR3;
 VAR2 = 0;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 char VAR16[VAR17];
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR19, VAR20, VAR21);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN6(VAR27);
 if (FUN7(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN8(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN9(VAR13, NULL, NULL);
 if (VAR15 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR15, VAR16, VAR17 - 1, 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR16[VAR11] = '';
 VAR2 = FUN10(VAR16, NULL, 0);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN11(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN11(VAR15);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7) && VAR2 < 100)
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN13()
{
 FUN1();
 FUN3();
}
#endif
