#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 VAR3 = FUN3(
 VAR2,
 VAR5,
 VAR6 |
 VAR7 |
 VAR8,
 VAR9,
 VAR10,
 VAR10,
 VAR11,
 NULL);
 if (VAR3 == VAR4)
 {
 FUN4(1);
 }
 if (!FUN5(VAR3))
 {
 FUN4(1);
 }
 FUN6(VAR3);
 }
 break;
 }
}
static void FUN7()
{
 switch(6)
 {
 case 6:
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 VAR3 = FUN3(
 VAR2,
 VAR5,
 VAR6 |
 VAR7 |
 VAR8,
 VAR9,
 VAR10,
 VAR10,
 VAR11,
 NULL);
 if (VAR3 == VAR4)
 {
 FUN4(1);
 }
 if (!FUN5(VAR3))
 {
 FUN4(1);
 }
 FUN6(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
