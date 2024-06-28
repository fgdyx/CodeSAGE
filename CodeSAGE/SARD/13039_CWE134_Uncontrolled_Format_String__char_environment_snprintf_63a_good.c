#ifndef VAR1
void FUN1(char * * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN1(&VAR2);
}
void FUN3(char * * VAR2);
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = strlen(VAR2);
 char * VAR5 = FUN5(VAR6);
 if (VAR5 != NULL)
 {
 strncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 FUN3(&VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
