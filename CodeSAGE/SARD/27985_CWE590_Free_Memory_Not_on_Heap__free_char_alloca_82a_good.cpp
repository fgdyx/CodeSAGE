#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 VAR4* VAR5 = new VAR6;
 VAR5->FUN4(VAR2);
 delete VAR5;
}
void FUN5()
{
 FUN1();
}
#endif
