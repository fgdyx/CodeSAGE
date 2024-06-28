#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new char;
 *VAR3 = '';
 FUN3(*VAR3);
 FUN1(&VAR3);
}
#endif
