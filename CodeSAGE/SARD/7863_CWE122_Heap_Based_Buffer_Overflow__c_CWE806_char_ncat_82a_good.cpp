#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
void FUN3()
{
 FUN1();
}
#endif
