#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
