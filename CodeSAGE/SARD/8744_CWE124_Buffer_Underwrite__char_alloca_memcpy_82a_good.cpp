#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 VAR4* VAR5 = new VAR6;
 VAR5->FUN3(VAR2);
 delete VAR5;
}
void FUN4()
{
 FUN1();
}
#endif
