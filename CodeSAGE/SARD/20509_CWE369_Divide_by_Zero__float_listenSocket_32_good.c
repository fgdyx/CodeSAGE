#ifndef VAR1
static void FUN1()
{
 float VAR2;
 float *VAR3 = &VAR2;
 float *VAR4 = &VAR2;
 VAR2 = 0.0F;
 {
 float VAR2 = *VAR3;
 VAR2 = 2.0F;
 *VAR3 = VAR2;
 }
 {
 float VAR2 = *VAR4;
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 float VAR2;
 float *VAR3 = &VAR2;
 float *VAR4 = &VAR2;
 VAR2 = 0.0F;
 {
 float VAR2 = *VAR3;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 char VAR14[VAR15];
 do
 {
#ifdef VAR6
 if (FUN4(FUN5(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN6(VAR25);
 if (FUN7(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN8(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN9(VAR11, NULL, NULL);
 if (VAR13 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR13, VAR14, VAR15 - 1, 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR14[VAR9] = '';
 VAR2 = (float)FUN10(VAR14);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN11(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN11(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN12();
 }
#endif
 }
 *VAR3 = VAR2;
 }
 {
 float VAR2 = *VAR4;
 if(FUN13(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN2(VAR5);
 }
 else
 {
 FUN14("");
 }
 }
}
void FUN15()
{
 FUN1();
 FUN3();
}
#endif
