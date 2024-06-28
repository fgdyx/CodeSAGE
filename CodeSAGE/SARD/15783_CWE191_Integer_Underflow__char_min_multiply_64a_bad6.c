#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char VAR3;
 VAR3 = '';
 /* POTENTIAL FLAW: Use the minimum size of the data type */
 VAR3 = VAR4;
 FUN1(&VAR3);
}
#endif
