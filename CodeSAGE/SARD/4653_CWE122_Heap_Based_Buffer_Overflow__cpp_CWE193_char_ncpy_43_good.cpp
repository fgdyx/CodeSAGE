#ifndef VAR1
static void FUN1(char * &VAR2)
{
 VAR2 = new char[10+1];
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[10+1] = VAR4;
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
