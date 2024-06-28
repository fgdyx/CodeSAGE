#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 char * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR3 = VAR4;
 }
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
