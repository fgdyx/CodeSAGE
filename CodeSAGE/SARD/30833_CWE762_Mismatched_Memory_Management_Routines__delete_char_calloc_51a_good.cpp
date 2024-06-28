#ifndef VAR1
void FUN1(char * VAR2);
void FUN2(char * VAR2);
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 FUN1(VAR2);
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 FUN2(VAR2);
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
