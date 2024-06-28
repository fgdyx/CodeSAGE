#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 char *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = strlen(VAR4);
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN5(VAR24);
 VAR12.VAR25 = FUN6(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR4 + VAR16), sizeof(char) * (VAR6 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR4[VAR16 + VAR11 / sizeof(char)] = '';
 VAR13 = strchr(VAR4, '');
 if (VAR13)
 {
 *VAR13 = '';
 }
 VAR13 = strchr(VAR4, '');
 if (VAR13)
 {
 *VAR13 = '';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN7(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN8();
 }
#endif
 }
 VAR3.FUN9(VAR4);
 VAR3.FUN9(VAR4);
 VAR3.FUN9(VAR4);
 FUN1(VAR3);
}
#endif
