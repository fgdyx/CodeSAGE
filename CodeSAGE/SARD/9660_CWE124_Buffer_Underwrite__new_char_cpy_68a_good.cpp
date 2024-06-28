#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 VAR4 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
