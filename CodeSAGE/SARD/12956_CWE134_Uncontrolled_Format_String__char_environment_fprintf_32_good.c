#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcpy(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 fprintf(VAR6, VAR2);
 }
}
static void FUN2()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN3(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 fprintf(VAR6, "", VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
