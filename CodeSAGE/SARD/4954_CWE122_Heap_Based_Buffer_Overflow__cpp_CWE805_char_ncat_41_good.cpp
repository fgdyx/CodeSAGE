#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strncat(VAR2, VAR3, 100);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
