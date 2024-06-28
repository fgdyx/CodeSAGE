#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 }
 goto VAR5;
VAR5:
 free(VAR2);
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new char[100];
 goto VAR5;
VAR5:
 delete [] VAR2;
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
