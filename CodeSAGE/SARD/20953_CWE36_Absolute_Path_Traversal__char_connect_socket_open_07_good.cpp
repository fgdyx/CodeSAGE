#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 int VAR7;
 VAR7 = FUN3(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(VAR5==5)
 {
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 int VAR7;
 VAR7 = FUN3(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
