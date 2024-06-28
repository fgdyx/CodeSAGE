#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 HANDLE VAR6;
 VAR6 = FUN3(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN4(VAR6);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(5==5)
 {
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 HANDLE VAR6;
 VAR6 = FUN3(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN4(VAR6);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
