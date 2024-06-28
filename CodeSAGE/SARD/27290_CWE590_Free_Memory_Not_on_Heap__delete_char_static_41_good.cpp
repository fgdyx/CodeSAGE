#ifndef VAR1
void FUN1(char * VAR2)
{
 FUN2(*VAR2);
 delete VAR2;
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
