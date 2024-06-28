#ifndef VAR1
void FUN1(char * VAR2[]);
static void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(char * VAR2[]);
static void FUN4()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 char * VAR6 = FUN5(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR3+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
