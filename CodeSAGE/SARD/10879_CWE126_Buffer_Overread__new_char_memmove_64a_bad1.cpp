#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* FLAW: Use a small buffer */
 VAR3 = new char[50];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 FUN1(&VAR3);
}
#endif
