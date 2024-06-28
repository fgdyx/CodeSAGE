#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 VAR2 = new char[100];
 FUN3(VAR2);
}
void FUN4(char * VAR2);
static void FUN5()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR5;
 VAR2 = NULL;
 {
 char VAR6[] = "";
 VAR2 = strdup(VAR6);
 }
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
