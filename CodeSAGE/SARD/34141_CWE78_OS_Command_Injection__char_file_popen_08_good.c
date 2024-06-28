#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = VAR4;
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
 VAR5 *VAR6;
 VAR6 = FUN4(VAR2, "");
 if (VAR6 != NULL)
 {
 FUN5(VAR6);
 }
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(FUN7())
 {
 strcat(VAR2, "");
 }
 {
 VAR5 *VAR6;
 VAR6 = FUN4(VAR2, "");
 if (VAR6 != NULL)
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
