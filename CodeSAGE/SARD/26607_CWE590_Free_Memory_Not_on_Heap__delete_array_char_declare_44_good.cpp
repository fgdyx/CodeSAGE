#ifndef VAR1
static void FUN1(char * VAR2)
{
 FUN2(VAR2);
 delete [] VAR2;
}
static void FUN3()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 }
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
