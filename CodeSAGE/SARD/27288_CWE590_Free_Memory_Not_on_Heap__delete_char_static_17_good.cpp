#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR3 = VAR4;
 }
 }
 FUN2(*VAR3);
 delete VAR3;
}
void FUN3()
{
 FUN1();
}
#endif
