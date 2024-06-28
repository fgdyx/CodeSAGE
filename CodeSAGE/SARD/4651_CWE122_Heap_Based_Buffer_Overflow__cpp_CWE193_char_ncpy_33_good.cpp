#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new char[10+1];
 {
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 strncpy(VAR2, VAR4, strlen(VAR4) + 1);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
