#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 char *VAR10;
 SOCKET VAR11 = VAR12;
 size_t VAR13 = strlen(VAR4);
 do
 {
#ifdef VAR5
 if (FUN3(FUN4(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR11 = socket(VAR15, VAR16, VAR17);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN5(VAR21);
 VAR9.VAR22 = FUN6(VAR23);
 if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR11, (char *)(VAR4 + VAR13), sizeof(char) * (100 - VAR13 - 1), 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR4[VAR13 + VAR8 / sizeof(char)] = '';
 VAR10 = strchr(VAR4, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 VAR10 = strchr(VAR4, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN7(VAR11);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN8();
 }
#endif
 }
 VAR3.FUN9(VAR3.FUN10(), 1, VAR4);
 VAR3.FUN9(VAR3.FUN10(), 1, VAR4);
 VAR3.FUN9(VAR3.FUN10(), 1, VAR4);
 FUN1(VAR3);
}
void FUN11()
{
 FUN2();
}
#endif
