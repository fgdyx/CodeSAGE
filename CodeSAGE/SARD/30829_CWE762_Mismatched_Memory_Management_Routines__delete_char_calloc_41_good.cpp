#ifndef VAR1
static void FUN1(char * VAR2)
{
 delete VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 FUN1(VAR2);
}
static void FUN3(char * VAR2)
{
 free(VAR2);
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
