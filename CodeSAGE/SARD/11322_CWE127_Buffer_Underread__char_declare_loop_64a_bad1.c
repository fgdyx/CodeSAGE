#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 FUN1(&VAR3);
}
#endif
