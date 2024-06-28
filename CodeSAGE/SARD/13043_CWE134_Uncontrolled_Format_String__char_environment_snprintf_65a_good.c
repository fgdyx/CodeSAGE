#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 FUN3(VAR2);
}
void FUN4(char * VAR2);
static void FUN5()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR6;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
