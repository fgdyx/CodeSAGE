#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 strcpy(VAR3, VAR4);
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
