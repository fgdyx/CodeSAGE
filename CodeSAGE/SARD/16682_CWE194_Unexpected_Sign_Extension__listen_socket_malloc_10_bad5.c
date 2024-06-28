#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 char VAR13[VAR14];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR15)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN4(VAR24);
 if (FUN5(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN6(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN7(VAR10, NULL, NULL);
 if (VAR12 == VAR26)
 {
 break;
 }
 VAR7 = recv(VAR12, VAR13, VAR14 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR7 == VAR26 || VAR7 == 0)
 {
 break;
 }
 VAR13[VAR7] = '';
 VAR8 = FUN8(VAR13);
 if (VAR8 > VAR28 || VAR8 < VAR29)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR8;
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN9(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN9(VAR12);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN10();
 }
#endif
 }
 }
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR30 = (char *)malloc(VAR2);
 memset(VAR30, '', VAR2-1);
 VAR30[VAR2-1] = '';
 FUN11(VAR30);
 free(VAR30);
 }
}
#endif
