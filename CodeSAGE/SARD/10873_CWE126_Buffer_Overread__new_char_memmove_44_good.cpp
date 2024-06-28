#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 VAR2 = NULL;
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
