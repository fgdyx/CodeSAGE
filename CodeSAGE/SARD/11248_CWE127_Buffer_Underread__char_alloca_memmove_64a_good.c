#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR3 = VAR4;
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
