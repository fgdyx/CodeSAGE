#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[10+1];
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
