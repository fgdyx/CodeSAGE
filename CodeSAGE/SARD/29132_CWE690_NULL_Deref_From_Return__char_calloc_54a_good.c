#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
