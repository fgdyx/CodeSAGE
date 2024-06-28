#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 VAR3 FUN2(VAR2);
}
void FUN3()
{
 FUN1();
}
#endif
