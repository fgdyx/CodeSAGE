#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 VAR5* VAR6 = new VAR7;
 VAR6->FUN3(VAR2);
 delete VAR6;
}
void FUN4()
{
 FUN1();
}
#endif
