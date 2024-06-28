#ifndef VAR1
void FUN1()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 char VAR13[VAR14];
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR19 = VAR16;
 VAR10.VAR20.VAR21 = FUN4(VAR22);
 VAR10.VAR23 = FUN5(VAR24);
 if (connect(VAR11, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 /* FLAW: Use a value input from the network */
 VAR8 = recv(VAR11, VAR13, VAR14 - 1, 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR13[VAR8] = '';
 VAR9 = FUN6(VAR13);
 if (VAR9 > VAR27 || VAR9 < VAR28)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR9;
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
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 {
 char VAR29[100];
 char VAR30[100] = "";
 memset(VAR29, '', 100-1);
 VAR29[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR30, VAR29, VAR2);
 VAR30[VAR2] = '';
 }
 FUN9(VAR30);
 }
 }
}
#endif
