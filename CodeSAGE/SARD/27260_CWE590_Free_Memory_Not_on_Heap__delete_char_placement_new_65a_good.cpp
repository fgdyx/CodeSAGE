#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 {
 char * VAR5 = new char;
 *VAR5 = '';
 VAR2 = VAR5;
 }
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
