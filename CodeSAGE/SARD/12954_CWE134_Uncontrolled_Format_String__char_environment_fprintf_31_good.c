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
 fprintf(VAR5, VAR2);
 }
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 fprintf(VAR5, "", VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
