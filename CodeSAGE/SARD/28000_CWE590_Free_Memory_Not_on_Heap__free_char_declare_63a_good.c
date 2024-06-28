#ifndef VAR1
void FUN1(char * * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 FUN1(&VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
