#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
char * FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 FUN3(VAR4, 100, "", VAR5);
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
char * FUN5(char * VAR4);
static void FUN6()
{
 char * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 FUN3(VAR4, 100, "", VAR5);
 FUN4(VAR4);
 delete [] VAR4;
 }
 ;
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
