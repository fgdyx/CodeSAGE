#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char * VAR4 = (char *)FUN3(50*sizeof(char));
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR3 = VAR5;
 VAR3[0] = '';
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
