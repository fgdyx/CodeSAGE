#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 VAR4 FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
