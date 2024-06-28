#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = new char[50];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
