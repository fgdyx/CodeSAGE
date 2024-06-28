#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
