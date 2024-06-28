#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN4(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 FUN2("", VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
