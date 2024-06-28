#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 HANDLE VAR6;
 VAR6 = FUN4(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN5(VAR6);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(FUN7())
 {
 strcat(VAR2, "");
 }
 {
 HANDLE VAR6;
 VAR6 = FUN4(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN5(VAR6);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
