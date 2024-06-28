#ifndef VAR1
static void FUN1(short VAR2)
{
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR3 = (char *)malloc(VAR2);
 memset(VAR3, '', VAR2-1);
 VAR3[VAR2-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = 0;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR6
 if (FUN4(FUN5(2,2), &VAR7) != VAR17)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN6(VAR26);
 if (FUN7(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN8(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN9(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR9 = recv(VAR14, VAR15, VAR16 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR9 == VAR28 || VAR9 == 0)
 {
 break;
 }
 VAR15[VAR9] = '';
 VAR10 = FUN10(VAR15);
 if (VAR10 > VAR30 || VAR10 < VAR31)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR10;
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN11(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN11(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN12();
 }
#endif
 }
 FUN13(VAR2);
}
#endif
