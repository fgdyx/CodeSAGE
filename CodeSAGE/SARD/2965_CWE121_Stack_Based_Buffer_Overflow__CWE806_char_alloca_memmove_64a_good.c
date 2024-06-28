#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 VAR3 = VAR4;
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
